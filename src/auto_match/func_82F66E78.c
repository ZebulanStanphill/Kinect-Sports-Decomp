extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);
extern unsigned int fn_82F7B6D0(const unsigned short *s, unsigned int max);

int fn_82F66E78(unsigned short *s, unsigned int size)
{
    if (s == 0) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0x16;
    }
    if (fn_82F7B6D0(s, size) >= size) {
        *s = 0;
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0x16;
    }
    for (; *s != 0; s++) {
        if (*s >= 0x61 && *s <= 0x7a) {
            *s -= 0x20;
        }
    }
    return 0;
}
