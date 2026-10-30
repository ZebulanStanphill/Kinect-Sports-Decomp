extern void fn_82BE8CF8(void *self);
extern void fn_82BE56C0(void *p);

void *fn_82BE2C00(char *self, unsigned int flags)
{
    fn_82BE8CF8(self);
    if (flags & 1) {
        fn_82BE56C0(self - 8);
    }
    return self - 8;
}
