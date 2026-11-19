extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);

int fn_82F685A8(unsigned int value, char *buffer, unsigned int size, unsigned int radix, int negative)
{
    char *p;
    char *first;
    unsigned int length;
    unsigned int digit;
    char swap;
    int valid;

    valid = buffer != 0;
    if (!valid) {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        return 22;
    }
    valid = size > 0;
    if (!valid) {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        return 22;
    }
    *buffer = 0;
    valid = size > (unsigned int)(negative ? 2 : 1);
    if (!valid) {
        *_errno() = 34;
        _invalid_parameter_noinfo();
        return 34;
    }
    valid = radix >= 2 && radix <= 36;
    if (!valid) {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        return 22;
    }
    length = 0;
    p = buffer;
    if (negative) {
        *p++ = '-';
        length = 1;
        value = (unsigned int)-(int)value;
    }
    first = p;
    do {
        digit = value % radix;
        value /= radix;
        if (digit > 9) {
            *p++ = (char)(digit + 'a' - 10);
        } else {
            *p++ = (char)(digit + '0');
        }
        length++;
    } while (value != 0 && length < size);
    if (length >= size) {
        *buffer = 0;
        *_errno() = 34;
        _invalid_parameter_noinfo();
        return 34;
    }
    *p-- = 0;
    do {
        swap = *p;
        *p = *first;
        *first = swap;
        p--;
        first++;
    } while (first < p);
    return 0;
}
