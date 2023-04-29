#include "main.h"

int is_valid_specifier(char c) {
    switch (c) {
        case 'c':
        case 's':
        case 'p':
        case 'd':
        case 'i':
        case 'o':
        case 'u':
        case 'x':
        case 'X':
        case 'f':
        case 'F':
            return 1;
        default:
            return 0;
    }
}

int is_flag(char c) {
    switch (c) {
        case '-':
        case '+':
        case ' ':
        case '#':
        case '0':
            return 1;
        default:
            return 0;
    }
}

int is_size(char c) {
    switch (c) {
        case 'h':
        case 'l':
        case 'L':
        case 'z':
        case 'j':
        case 't':
            return 1;
        default:
            return 0;
    }
}

