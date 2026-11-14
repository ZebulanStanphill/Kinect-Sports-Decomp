extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);

unsigned short *fn_82F69960(unsigned short *str, const unsigned short *delims, unsigned short **context)
{
    unsigned short *start;
    const unsigned short *d;

    if (context == 0) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0;
    }
    if (delims == 0) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0;
    }
    if (str == 0 && *context == 0) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0;
    }
    if (str == 0) {
        str = *context;
    }

    /* skip leading delimiters */
    for (; *str != 0; str++) {
        for (d = delims; *d != 0 && *d != *str; d++) {
        }
        if (*d == 0) {
            break;
        }
    }

    start = str;

    /* find the end of the token */
    for (; *str != 0; str++) {
        for (d = delims; *d != 0 && *d != *str; d++) {
        }
        if (*d != 0) {
            *str++ = 0;
            break;
        }
    }

    *context = str;
    if (start == str) {
        return 0;
    }
    return start;
}
