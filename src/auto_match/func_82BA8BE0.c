typedef struct {
    unsigned char pad[0xc];
    int pos;
    unsigned char pad10[0x28];
    int count;
    unsigned char pad3c[0x30];
    int last;
} obj_82BA8BE0;

extern int lbl_820E2FB8[];
extern void fn_82AB1538(int pos, int bit, int width, int value);

void fn_82BA8BE0(obj_82BA8BE0 *param_1, int a, int b, int c, int d)
{
    int pos = param_1->pos;

    fn_82AB1538(pos, 1, 0xc, c);
    fn_82AB1538(pos, 0xd, 4, d);
    fn_82AB1538(pos, 0x11, 0xc, a);
    fn_82AB1538(pos, 0x1d, 6, b);
    fn_82AB1538(pos, 0x23, 9, 0);
    fn_82AB1538(pos, 0x2c, 1, 0);
    fn_82AB1538(pos, 0x2d, 4, lbl_820E2FB8[6]);
    param_1->last = param_1->pos;
    param_1->pos += 6;
    param_1->count++;
}
