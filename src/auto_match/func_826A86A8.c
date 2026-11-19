extern unsigned int lbl_82007120[];

unsigned int *fn_826A86A8(unsigned int *self, unsigned int flags)
{
    if (self[1] != 0) {
        fn_8267C4F0(self[1]);
    }
    *self = (unsigned int)lbl_82007120;
    if ((flags & 1) != 0) {
        fn_8265CA20(self);
    }
    return self;
}
