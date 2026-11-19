extern unsigned int lbl_821BE9E8;
extern void fn_8248A290(void *self);
extern void fn_8265CA20(void *self);

unsigned int *fn_8248A228(unsigned int *self, unsigned int flags)
{
    *self = (unsigned int)&lbl_821BE9E8;
    if (self[2] != 0) {
        fn_8248A290((void *)self[2]);
    }
    if ((flags & 1) != 0) {
        fn_8265CA20(self);
    }
    return self;
}
