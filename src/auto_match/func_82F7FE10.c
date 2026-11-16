typedef struct FloatText_82F7FE10 {
    int sign;       /* 0x00 */
    int decimal;    /* 0x04 */
    int flags;      /* 0x08 */
    char *mantissa; /* 0x0c */
} FloatText_82F7FE10;

extern void fn_82F86888(unsigned __int64 value, FloatText_82F7FE10 *out, char *buffer, unsigned int size);
extern int fn_82F86648(char *buffer, unsigned int size, int precision, FloatText_82F7FE10 *value);
extern int fn_82F7FC58(char *buffer, unsigned int size, int precision, FloatText_82F7FE10 *value, int mode);
extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);

int fn_82F7FE10(const unsigned __int64 *value, char *buffer, unsigned int size, int precision)
{
    FloatText_82F7FE10 text;
    char digits[22];
    unsigned int remaining;
    int result;
    fn_82F86888(*value, &text, digits, 22);
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
    remaining = size == -1 ? -1 : size - (text.sign == '-');
    result = fn_82F86648(buffer + (text.sign == '-'), remaining, text.decimal + precision, &text);
    if (result != 0) {
        *buffer = 0;
    } else {
        result = fn_82F7FC58(buffer, size, precision, &text, 0);
    }
    return result;
}
