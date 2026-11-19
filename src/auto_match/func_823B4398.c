extern int lbl_821B5AD0;
extern int lbl_821B5B50;
extern void fn_828BDE70(void);
extern void fn_8265CA20(int *self);

unsigned int *fn_823B4398(unsigned int *self, int flags)
{
    *self = (unsigned int)&lbl_821B5AD0;
    self[0x14] = (unsigned int)&lbl_821B5B50;
    fn_828BDE70();
    if ((flags & 1) != 0) {
        fn_8265CA20((int *)self);
    }
    return self;
}
