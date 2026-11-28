#include <string.h>

typedef struct Decimal_82F7FC58 {
    int sign;
    int decimalPoint;
} Decimal_82F7FC58;

typedef struct Locale_82F7FC58 {
    char padding[0xbc];
    char **decimalPoint;
} Locale_82F7FC58;

extern Locale_82F7FC58 *lbl_831BBCA8;
extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);

int fn_82F7FC58(char *buffer, unsigned int size, int digits, Decimal_82F7FC58 *value, char fixed)
{
    int lastDigit = value->decimalPoint - 1;
    char *start;
    char *point;

    if (buffer == 0) {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        return 22;
    }
    if (size == 0) {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        return 22;
    }
    if (fixed && lastDigit == digits) {
        char *last = buffer + (lastDigit + (value->sign == '-'));
        last[0] = '0';
        last[1] = '\0';
    }
    start = buffer;
    if (value->sign == '-') {
        start = buffer + 1;
        *buffer = (char)value->sign;
    }
    if (value->decimalPoint <= 0) {
        unsigned int length = strlen(start);
        char *next = start + 1;
        memmove(next, start, length + 1);
        point = next;
        *start = '0';
    } else {
        point = start + value->decimalPoint;
    }

    if (digits > 0) {
        unsigned int length = strlen(point);
        start = point + 1;
        memmove(start, point, length + 1);
        *point = **lbl_831BBCA8->decimalPoint;
        if (value->decimalPoint < 0) {
            if (fixed) {
                digits = -value->decimalPoint;
            } else if (digits >= -value->decimalPoint) {
                digits = -value->decimalPoint;
            }
            if (digits != 0) {
                memmove(start + digits, start, strlen(start) + 1);
            }
            memset(start, '0', digits);
        }
    }
    return 0;
}
