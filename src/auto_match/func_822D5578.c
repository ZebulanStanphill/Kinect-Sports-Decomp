extern unsigned int lbl_821AD878;
extern unsigned int lbl_821AD8CC;
extern void fn_822CA390(void);
extern void fn_8265CA20(void *self);

unsigned int *fn_822D5578(unsigned int *self, unsigned int flags)
{
    *self = (unsigned int)&lbl_821AD878;
    self[0x1a] = (unsigned int)&lbl_821AD8CC;
    fn_822CA390();
    if ((flags & 1) != 0) {
        fn_8265CA20(self);
    }
    return self;
}
