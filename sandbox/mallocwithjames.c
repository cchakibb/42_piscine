#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

typedef struct {
    int key;
    char value[100];
} DictEntry;

size_t ft_strlen(const char *s) {
    size_t len = 0;
    while (*s != '\0') {
        len++;
        s++;
    }
    return len;
}

int ft_isdigit(int c) {
    return (c >= '0' && c <= '9');
}

int ft_isspace(int c) {
    return (c == ' ' || c == '\t' || c == '\n' ||
            c == '\r' || c == '\f' || c == '\v');
}

char *ft_strncpy(char *dest, const char *src, size_t n) {
    char *ptr = dest;
    while (*src != '\0' && n > 0) {
        *ptr++ = *src++;
        n--;
    }
    while (n > 0) {
        *ptr++ = '\0';
        n--;
    }
    return dest;
}

int ft_atoi(const char *str) {
    int sign = 1;
    int num = 0;
    while (ft_isspace(*str)) {
        str++;
    }
    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }
    while (ft_isdigit(*str)) {
        num = num * 10 + (*str - '0');
        str++;
    }
    return sign * num;
}

int parse_dict_file(char *dict_file, DictEntry *dictionary, int max_entries) {
    int fd;
    char buf[101];
    int count = 0;
    fd = open(dict_file, O_RDONLY);
    if (fd == -1) {
        return -1;
    }
    int bytes_read;
    while ((bytes_read = read(fd, buf, 100)) > 0) {
        buf[bytes_read] = '\0';
        char *key_str = strtok(buf, ":");
        char *value_str = strtok(NULL, "");
        while (*key_str != '\0' && !ft_isdigit(*key_str)) {
            key_str++;
        }
        while (*value_str != '\0' && ft_isdigit(*value_str)) {
            value_str++;
        }
        int key = ft_atoi(key_str);
        ft_strncpy(dictionary[count].value, value_str, sizeof(dictionary[count].value));
        dictionary[count].key = key;
        count++;
        if (count >= max_entries) {
            break;
        }
    }
    close(fd);
    return count;
}
