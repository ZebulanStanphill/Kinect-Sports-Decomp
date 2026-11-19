extern int lbl_821CA7D8;
extern void fn_827F38B0(void *);
extern void fn_827F38B8(void *);
extern void fn_8265CA20(void *);

int *fn_825FFCF0(int *self, unsigned int flags)
{
    *self = (int)&lbl_821CA7D8;
    fn_827F38B0((char *)self + 0x20);
    fn_827F38B8(self);
    if ((flags & 1) != 0) {
        fn_8265CA20(self);
    }
    return self;
}
