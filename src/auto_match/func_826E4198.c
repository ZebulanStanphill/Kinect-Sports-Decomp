extern void *fn_8267B890(void *heap, unsigned int size, unsigned int flags);
extern void *fn_826DF140(void *mem, void *a, void *b, void *c, void *heap, void *d, void *e);
extern void *lbl_831E7E64;

void *fn_826E4198(void *a, void *b, void *c, void *heap, void *d, void *e)
{
    void *mem;

    mem = fn_8267B890(heap ? heap : lbl_831E7E64, 0x24, 0);
    if (mem != 0) {
        return fn_826DF140(mem, a, b, c, heap, d, e);
    }
    return 0;
}
