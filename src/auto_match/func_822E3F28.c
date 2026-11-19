extern unsigned int lbl_821AF1C8[];

unsigned int *fn_822E3F28(unsigned int *self, unsigned int flags)
{
    if (self[7] != 0) {
        fn_822315A0(self[7]);
    }
    *self = (unsigned int)lbl_821AF1C8;
    if ((flags & 1) != 0) {
        fn_8265CA20(self);
    }
    return self;
}
