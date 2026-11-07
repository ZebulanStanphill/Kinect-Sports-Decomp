typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;

extern int fn_82A87148(int a, unsigned int b, int c, U16 *d);
extern int fn_82A87738(int a, unsigned int *b, int c, int d, char *e);

void fn_82A88020(int param_1, unsigned int *param_2, int param_3, int param_4,
                 char *param_5)
{
    unsigned int v;
    unsigned int base;
    U16 *h;

    v = *param_2;
    fn_82A87738(param_1, param_2, param_3, param_4, param_5 + 0x18);
    base = v + param_4;
    h = (U16 *)(param_5 + 0x1c);
    fn_82A87148(param_3, base, 0x10, h);
    fn_82A87148(param_3, base + 0x10, 0x10, h + 1);
}
