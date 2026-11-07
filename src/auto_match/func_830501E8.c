extern void *lbl_831BC978;
extern void fn_82FA5190(void *heap, void *p);
extern void *fn_82FA5060(void *heap, unsigned int size);
extern unsigned int fn_82F64CE0(const unsigned short *s);
extern int fn_82F64840(unsigned short *dst, unsigned int dstCount,
                       const unsigned short *src, unsigned int count);

int fn_830501E8(char *param_1, const unsigned short *param_2)
{
    unsigned int n;
    unsigned short *buf;

    if (*(void **)(param_1 - 0x14) != 0) {
        fn_82FA5190(lbl_831BC978, *(void **)(param_1 - 0x14));
    }
    if (param_2 != 0) {
        n = fn_82F64CE0(param_2) + 1;
        buf = (unsigned short *)fn_82FA5060(lbl_831BC978, n * 2);
        *(unsigned short **)(param_1 - 0x14) = buf;
        if (buf == 0) {
            return 0x34;
        }
        fn_82F64840(buf, n, param_2, n - 1);
    }
    return 1;
}
