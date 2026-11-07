typedef struct Entry_82266AE8 {
    char *a;
    char *b;
    unsigned short count;
} Entry_82266AE8;

void __dcbf(int offset, void const *base);

extern void fn_82630B08(void *ctx, void *p, int size, int flag);
extern void fn_82A1DBD8(void *dst, void *src, int size);
extern void *lbl_8320A898;

void fn_82266AE8(int param_1)
{
    int i;
    int idx;
    int base;
    Entry_82266AE8 **slots;
    Entry_82266AE8 *src;
    char *srcA;
    char *srcB;

    i = 0;
    idx = *(int *)(*(int *)(param_1 + 0x100) + 0x44);
    base = *(int *)(*(int *)(param_1 + 0xdc) + 0x8c0);
    slots = (Entry_82266AE8 **)(base + 0x80);
    src = ((Entry_82266AE8 **)base)[idx + 0x20];
    srcA = src->a;
    srcB = src->b;
    do {
        if (i != idx) {
            Entry_82266AE8 *e = *slots;
            char *a = e->a;
            unsigned int n = e->count;
            char *b = e->b;
            if (a != 0 && srcA != 0) {
                int size = n * 0x40;
                int q;
                fn_82A1DBD8(a, srcA, size);
                for (q = (int)a & ~0x80; q < size + (int)a; q += 0x80) {
                    __dcbf(0, (void *)q);
                }
                fn_82630B08(lbl_8320A898, a, size, 0);
            }
            if (b != 0 && srcB != 0) {
                int size = n * 0x40;
                int q;
                fn_82A1DBD8(b, srcB, size);
                for (q = (int)b & ~0x80; q < size + (int)b; q += 0x80) {
                    __dcbf(0, (void *)q);
                }
                fn_82630B08(lbl_8320A898, b, size, 0);
            }
        }
        i++;
        slots++;
    } while (i < 4);
}
