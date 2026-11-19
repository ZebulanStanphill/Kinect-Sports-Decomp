extern void fn_8251C3C0(void);
extern void fn_8265CA20(void *self);
extern unsigned int lbl_82197D40;
extern unsigned int lbl_82197D94;

unsigned int *fn_8224E780(unsigned int *self, unsigned int flags)
{
    *self = (unsigned int)&lbl_82197D40;
    self[0x1c] = (unsigned int)&lbl_82197D94;
    fn_8251C3C0();
    if ((flags & 1) != 0) {
        fn_8265CA20(self);
    }
    return self;
}
