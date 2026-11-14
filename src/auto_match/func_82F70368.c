extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);

int fn_82F70368(const unsigned short *a, const unsigned short *b, unsigned int count)
{
    unsigned short ca;
    unsigned short cb;
    int result = 0;

    if (count != 0) {
        if (a == 0) {
            *_errno() = 0x16;
            _invalid_parameter_noinfo();
            return 0x7fffffff;
        }
        if (b == 0) {
            *_errno() = 0x16;
            _invalid_parameter_noinfo();
            return 0x7fffffff;
        }
        do {
            ca = (*a >= 0x41 && *a <= 0x5a) ? *a + 0x20 : *a;
            cb = (*b >= 0x41 && *b <= 0x5a) ? *b + 0x20 : *b;
            a++;
            b++;
        } while (--count != 0 && ca != 0 && ca == cb);
        result = ca - cb;
    }
    return result;
}
