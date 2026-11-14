extern unsigned char fn_82A0DAE0(void *ctx, void *target, int x0, int y0, int x1, int y1, int a, int b, int mode);
extern unsigned char fn_82A0DEE0(void *ctx, void *target, int x0, int y0, int x1, int y1, int a, int b);
extern int fn_829F4CD8(void *item);

int fn_82A0E270(void *ctx, void *target, void *item, int x0, int y0, int x1, int y1, int a, int b, unsigned int mode)
{
    unsigned char level;
    if (mode != 0)
        level = fn_82A0DAE0(ctx, target, x0, y0, x1, y1, a, b, mode);
    else
        level = fn_82A0DEE0(ctx, target, x0, y0, x1, y1, a, b);
    if (fn_829F4CD8(item) != 0)
        return level < 0xd9;
    return level < 0xa7;
}
