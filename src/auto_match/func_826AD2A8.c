extern unsigned int lbl_8200C4D4[];

unsigned int *fn_826AD2A8(unsigned int *self, unsigned int flags)
{
    if (self[1] != 0) {
        fn_826824B0(self[1]);
    }
    *self = (unsigned int)lbl_8200C4D4;
    if ((flags & 1) != 0) {
        fn_8265CA20(self);
    }
    return self;
}
