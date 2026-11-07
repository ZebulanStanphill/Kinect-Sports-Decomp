extern void fn_82FA5190(unsigned int heap, void *p);
extern void *fn_82FA5060(unsigned int heap, unsigned int size);
extern unsigned int fn_82F64CE0(const unsigned short *s);
extern int fn_82F64840(void *dst, unsigned int n, const unsigned short *src, unsigned int count);
extern unsigned int lbl_831BC978;

int fn_83050670(char *self, const unsigned short *s)
{
    unsigned int n;
    void *buf;

    if (*(void **)(self - 0x14) != 0) {
        fn_82FA5190(lbl_831BC978, *(void **)(self - 0x14));
    }
    if (s != 0) {
        n = fn_82F64CE0(s) + 1;
        buf = fn_82FA5060(lbl_831BC978, n * 2);
        *(void **)(self - 0x14) = buf;
        if (buf == 0) {
            return 0x34;
        }
        fn_82F64840(buf, n, s, n - 1);
    }
    return 1;
}
