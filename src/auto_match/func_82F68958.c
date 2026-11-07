extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);

unsigned char *fn_82F68958(unsigned char *string, const unsigned char *control,
                           unsigned char **context)
{
    unsigned char map[32];
    unsigned char *str;
    const unsigned char *ctrl;
    unsigned char *nextoken;
    int count;

    if (context == 0) {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        return 0;
    }
    if (control == 0) {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        return 0;
    }
    if (string == 0 && *context == 0) {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        return 0;
    }

    for (count = 0; count < 32; count++)
        map[count] = 0;

    ctrl = control;
    do {
        map[*ctrl >> 3] |= (unsigned char)(1 << (*ctrl & 7));
    } while (*ctrl++);

    str = string;
    if (str == 0)
        str = *context;

    while (((1 << (*str & 7)) & map[*str >> 3]) && *str)
        str++;

    nextoken = str;
    for (; *str; str++) {
        if ((1 << (*str & 7)) & map[*str >> 3]) {
            *str++ = 0;
            break;
        }
    }

    *context = str;
    if (nextoken == str)
        return 0;
    return nextoken;
}
