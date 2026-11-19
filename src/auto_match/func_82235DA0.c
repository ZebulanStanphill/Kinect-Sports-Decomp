extern int lbl_821B9BC8;
extern int lbl_82197100;
extern void fn_8289D4C0(void);
extern void fn_8265CA20(void *self);

void *fn_82235DA0(void *self, unsigned int flags)
{
    *(int *)((char *)self + 0x54) = (int)&lbl_821B9BC8;
    *(int *)self = (int)&lbl_82197100;
    fn_8289D4C0();
    if ((flags & 1) != 0) {
        fn_8265CA20(self);
    }
    return self;
}
