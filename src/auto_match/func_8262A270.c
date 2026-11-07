typedef unsigned int uint;

typedef struct Arg_8262A270 {
    uint value;
    int kind;
} Arg_8262A270;

extern int fn_8251E4D0(unsigned char *p);
extern void fn_82A1DD38(int h, Arg_8262A270 *arg, unsigned short n);
extern void fn_825D50C0(uint *self);
extern unsigned int lbl_821CB888;

void fn_8262A270(uint *param_1)
{
    Arg_8262A270 a;
    unsigned char *p;
    int h;

    *param_1 = (uint)&lbl_821CB888;
    if (param_1[0x25b] != 0) {
        a.value = param_1[0x25b];
        a.kind = 3;
        p = (unsigned char *)(*(uint *)(param_1[0xf] + 0xb8) + 8);
        h = fn_8251E4D0(p);
        fn_82A1DD38(h, &a, *(unsigned short *)(p + 0xc));
    }
    fn_825D50C0(param_1);
}
