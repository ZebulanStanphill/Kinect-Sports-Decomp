extern int fn_827D9DC0(int h);
extern void fn_827D9DA0(int h, int flags);
extern unsigned char *fn_827DA3D8(int a, int b);

int fn_827E77F8(int *param_1)
{
    int flags;
    unsigned char *p;

    flags = fn_827D9DC0(param_1[2]);
    p = fn_827DA3D8(param_1[8], param_1[1]);
    if (*(int *)(p + 0x24) == 0) {
        return 0x4b0;
    }
    if ((flags & 8) == 0 && (flags & 4) == 0 && flags != 0) {
        return 5;
    }
    fn_827D9DA0(param_1[2], fn_827D9DC0(param_1[2]) | 0x40);
    return 0x3e4;
}
