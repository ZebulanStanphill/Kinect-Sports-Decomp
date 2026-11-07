extern unsigned int *fn_829E0C20(int ctx, int id);
extern int fn_829E0980(unsigned int *blk, int a, int b, int c, int ctx);
extern int fn_829E0F70(char *obj, int ctx, unsigned short *p);
extern int fn_829E10F0(char *obj, int ctx, unsigned short *p);
extern int fn_829E1628(char *obj, int ctx, unsigned short *p);
extern void fn_82A1DDC0(void *src, void *dst, int n);

int fn_829E16F0(char *self, int ctx, unsigned short *io)
{
    unsigned int *blk;
    unsigned short *p;
    int hr;

    blk = fn_829E0C20(ctx, *io);
    if (blk == 0) {
        return 0x80004005;
    }
    hr = fn_829E0980(blk, 0xc, 3, 1, ctx);
    if (hr < 0) {
        return hr;
    }
    *io = (unsigned short)(blk[1] >> 17);
    fn_82A1DDC0(blk + 2, self + 0xd4c0, 4);
    p = (unsigned short *)((blk[0] >> 14) + (char *)blk);
    hr = fn_829E10F0(self, ctx, p);
    if (hr < 0) {
        return hr;
    }
    if (*p == 0) {
        return 0x80004005;
    }
    p++;
    hr = fn_829E1628(self + 0x70, ctx, p);
    if (hr < 0) {
        return hr;
    }
    if (*p == 0) {
        return 0x80004005;
    }
    p++;
    hr = fn_829E0F70(self + 0x3820, ctx, p);
    if (hr < 0) {
        return hr;
    }
    return (*p != 0) ? 0 : 0x80004005;
}
