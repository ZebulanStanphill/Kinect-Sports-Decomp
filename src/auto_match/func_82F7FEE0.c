typedef struct FloatText_82F7FEE0 {
    int sign;
    int decimal;
    int flags;
    char *mantissa;
} FloatText_82F7FEE0;

extern void fn_82F86888(unsigned __int64, FloatText_82F7FEE0 *, char *, unsigned int);
extern int fn_82F86648(char *, unsigned int, int, FloatText_82F7FEE0 *);
extern int fn_82F7FC58(char *, unsigned int, int, FloatText_82F7FEE0 *, int);
extern int fn_82F7F510(char *, unsigned int, int, int, FloatText_82F7FEE0 *, int);
extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);

int fn_82F7FEE0(const unsigned __int64 *value, char *buffer, unsigned int size, int precision, int mode)
{
    FloatText_82F7FEE0 text;
    char digits[22];
    char *start;
    unsigned int remaining;
    int previous;
    int exponent;
    char rounded;
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
    previous = text.decimal - 1;
    start = buffer + (text.sign == '-');
    remaining = size == -1 ? -1 : size - (text.sign == '-');
    result = fn_82F86648(start, remaining, precision, &text);
    if (result != 0) {
        *buffer = 0;
    } else {
        exponent = text.decimal - 1;
        rounded = previous < exponent;
        if (exponent >= -4 && exponent < precision) {
            if (rounded) {
                while (*start++ != 0) {
                }
                start[-2] = 0;
            }
            result = fn_82F7FC58(buffer, size, precision, &text, 1);
        } else {
            result = fn_82F7F510(buffer, size, precision, mode, &text, 1);
        }
    }
    return result;
}
