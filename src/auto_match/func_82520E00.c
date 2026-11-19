extern unsigned int lbl_821C2CCC;
extern void fn_82230300(void *self, unsigned int flags, unsigned int param_3);
extern void fn_8265CA20(void *self);

unsigned int *fn_82520E00(unsigned int *self, unsigned int flags)
{
    *self = (unsigned int)&lbl_821C2CCC;
    fn_82230300(self + 3, 1, 0);
    if ((flags & 1) != 0) {
        fn_8265CA20(self);
    }
    return self;
}
