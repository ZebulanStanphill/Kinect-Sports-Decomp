extern unsigned int lbl_821B069C;
extern unsigned int lbl_821B0684;

extern void fn_8232B8B0(unsigned int *self);
extern void fn_8265CA20(unsigned int *self);

unsigned int *fn_8232BB90(unsigned int *self, unsigned int flags)
{
    *self = (unsigned int)&lbl_821B069C;
    self[0x15] = (unsigned int)&lbl_821B0684;
    fn_8232B8B0(self);
    if ((flags & 1) != 0) {
        fn_8265CA20(self);
    }
    return self;
}
