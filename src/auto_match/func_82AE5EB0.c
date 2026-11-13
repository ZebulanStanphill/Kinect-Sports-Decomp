typedef unsigned __int64 U64;
extern int fn_82AA66A8();
extern unsigned int fn_82ACA4F0();
extern unsigned int fn_82AE5828();

unsigned int fn_82AE5EB0(int *param_1, int param_2, unsigned char param_3)
{
    unsigned int r;
    unsigned int v;
    unsigned int i;
    unsigned int sh;

    r = fn_82AE5828(param_1, 0, param_2, 1);
    if (r == 0xffffffff) {
        if (param_3 != 0) {
            fn_82AA66A8(*param_1, 0xdf1);
        }
        return 0xffffffff;
    }
    sh = r >> 4;
    v = fn_82ACA4F0(r & 0xf, param_2);
    i = (sh >> 6) + 1;
    ((U64 *)param_1)[i] = (U64)v << (sh & 0x3f) | ((U64 *)param_1)[i];
    return r & 0xfffffff0 | v & 0xf;
}
