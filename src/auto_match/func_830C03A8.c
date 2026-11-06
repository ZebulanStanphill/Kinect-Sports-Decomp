typedef struct Pic_830C03A8 {
    char pad0[0x34];
    unsigned short f34;
    char pad36[0x558 - 0x36];
    int stride;
    char pad55c[0x580 - 0x55c];
    char sub[0x8a0 - 0x580];
} Pic_830C03A8;

extern void *lbl_8329F084;
extern void fn_830D5D20(char *ctx, Pic_830C03A8 *pic);
extern void fn_830C0798(void *a, void *b);
extern int fn_830D6DD0(char *ctx, Pic_830C03A8 *pic, char *sub);
extern int fn_831067E8(char *ctx, Pic_830C03A8 *pic, char *sub);
extern int fn_830FFAD8(char *ctx, Pic_830C03A8 *pic, char *sub);
extern int fn_830DB5C0(char *ctx, Pic_830C03A8 *pic, char *sub, int a, int b, unsigned int c);
extern void fn_82C77B70(char *ctx, Pic_830C03A8 *pic, int a, int b, unsigned int c);
extern void fn_82C76868(char *ctx, Pic_830C03A8 *pic, char *y, char *u, char *v, int a, unsigned int c);
extern void fn_830C0AE0(void *a, void *buf);

int fn_830C03A8(char *ctx)
{
    Pic_830C03A8 *pic;
    char *sub;
    int hr;
    unsigned char buf[0x600];

    pic = (Pic_830C03A8 *)(ctx + *(int *)(ctx + 0x54c8) * 0x8a0 + 0x3e70);
    fn_830D5D20(ctx, pic);
    fn_830C0798(lbl_8329F084, ctx + 0x57a0);
    sub = pic->sub;
    hr = fn_830D6DD0(ctx, pic, sub);
    if (hr != 0) {
        return hr;
    }
    hr = fn_831067E8(ctx, pic, sub);
    if (hr != 0) {
        return hr;
    }
    hr = fn_830FFAD8(ctx, pic, sub);
    if (hr != 0) {
        return hr;
    }
    hr = fn_830DB5C0(ctx, pic, sub, 0, 0, pic->f34 >> 1);
    if (hr != 0) {
        return hr;
    }
    if (*(int *)(ctx + 0xf6c) != 0) {
        fn_82C77B70(ctx, pic, 0, 0, pic->f34 >> 1);
        {
            int y = *(int *)(ctx + 0xcc) >> 1;
            int c = *(int *)(ctx + 0xd0) >> 1;
            int x = *(int *)(ctx + 0xdc);
            int cx = *(int *)(ctx + 0xe0);
            int s = pic->stride;
            int uv = c * s;
            fn_82C76868(ctx, pic,
                        *(char **)(ctx + 0xec0) + y * s + x,
                        *(char **)(ctx + 0xec4) + uv + cx,
                        *(char **)(ctx + 0xec8) + uv + cx,
                        0, pic->f34 >> 1);
        }
    }
    fn_830C0AE0(ctx + 0x57a0, buf);
    *(int *)(ctx + 0x3d08) = *(int *)(ctx + 0xf6c) != 0 || *(int *)(ctx + 0x3a28) != 0 || *(int *)(ctx + 0x3b9c) != -1;
    *(int *)(ctx + 0x3d0c) = 0;
    *(int *)(ctx + 0x3cf0) = 1;
    return 0;
}
