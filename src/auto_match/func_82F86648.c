typedef struct FloatText_82F86648 {
    int sign;                /* 0x00 */
    int decimal;             /* 0x04 */
    int flags;               /* 0x08 */
    unsigned char *mantissa; /* 0x0c */
} FloatText_82F86648;

extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);
extern void *memmove(void *dst, const void *src, unsigned int size);
extern unsigned int strlen(const char *text);

int fn_82F86648(char *buffer, unsigned int size, int digits, FloatText_82F86648 *value)
{
    unsigned char *digit = value->mantissa;
    char *out;

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
    *buffer = 0;
    if (size <= (unsigned int)((digits > 0 ? digits : 0) + 1)) {
        *_errno() = 34;
        _invalid_parameter_noinfo();
        return 34;
    }
    out = buffer;
    *out++ = '0';
    while (digits > 0) {
        *out++ = *digit ? *digit++ : (char)'0';
        digits--;
    }
    *out = 0;
    if (digits >= 0 && (char)*digit >= '5') {
        out--;
        while (*out == '9') {
            *out-- = '0';
        }
        *out += 1;
    }
    if (*buffer == '1') {
        value->decimal++;
    } else {
        memmove(buffer, buffer + 1, strlen(buffer + 1) + 1);
    }
    return 0;
}
