extern int lbl_8320A5D8;
extern void *lbl_8320A5CC;
extern void fn_82816480(void *owner, int a, int b, int c, int d, int flags, unsigned int count, int extra);

void fn_82816600(int a, int b, int c, int d, unsigned int count)
{
    int flags = 0;
    lbl_8320A5D8++;
    if (lbl_8320A5CC != 0 && count <= 1) {
        flags = 0x1000;
    }
    fn_82816480(0, a, b, c, d, flags, count < 1 ? 1 : count, 0);
}
