extern int lbl_821B4200;
extern int lbl_821971B0;
extern void fn_8289D4C0(void);
extern void fn_8265CA20(int *);

int *fn_82240AA0(int *self, unsigned int flags)
{
    self[0x15] = (int)&lbl_821B4200;
    *self = (int)&lbl_821971B0;
    fn_8289D4C0();
    if ((flags & 1) != 0) {
        fn_8265CA20(self);
    }
    return self;
}
