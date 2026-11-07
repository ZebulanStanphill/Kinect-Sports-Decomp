extern void *lbl_831BC768;
extern void *fn_82FA5060(void *heap, int size);
extern void *fn_82FB40B0(void *mem, int a, int b, int c, int d);

void *fn_82FB41A8(int a, int b, int c, int d)
{
    void *mem = fn_82FA5060(lbl_831BC768, 0x54);
    if (mem != 0)
        return fn_82FB40B0(mem, a, b, c, d);
    return 0;
}
