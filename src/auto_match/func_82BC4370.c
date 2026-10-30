extern void *fn_82B7BD28(void *heap, unsigned int size);
extern int *fn_82BC33B0(void *self, int a, void *b);
extern char lbl_820E3CC0[];

int *fn_82BC4370(int a, char *b)
{
    void *heap = *(void **)(b + 0x5ac);
    void **mem = (void **)fn_82B7BD28(heap, 0x3c4);
    int *o;
    *mem = heap;
    o = (int *)(mem + 1);
    if (o != 0) {
        o = fn_82BC33B0(o, a, b);
        o[4] = 1;
        o[0] = (int)lbl_820E3CC0;
        o[5] = 1;
        return o;
    }
    return 0;
}
