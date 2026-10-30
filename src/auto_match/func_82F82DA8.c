extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);
extern int lbl_831BBFE8;

int fn_82F82DA8(int *p)
{
    if (p == 0) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0x16;
    }
    *p = lbl_831BBFE8;
    return 0;
}
