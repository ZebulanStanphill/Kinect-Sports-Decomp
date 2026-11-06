extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
typedef struct {
    char pad0[0x18];
    unsigned int base;
    unsigned int size;
} Block_82A20ED8;
typedef struct {
    Block_82A20ED8 **items;
    int count;
    int cap;
    int cs[7];
} Pool_82A20ED8;
extern int lbl_8315D2EC;
extern int fn_82A20570(Pool_82A20ED8 *p, int *count, int *cap, unsigned int n);
extern Block_82A20ED8 *fn_8265C940(int size, int tag);

int fn_82A20ED8(Pool_82A20ED8 *p, unsigned int base, unsigned int size)
{
    int saved;
    int hr;
    Block_82A20ED8 *b;
    RtlEnterCriticalSection(p->cs);
    saved = p->count;
    hr = fn_82A20570(p, &p->count, &p->cap, size >> 16);
    if (hr == 0) {
        while (size >= 0x10000) {
            b = fn_8265C940(0x38, lbl_8315D2EC);
            if (b == 0) {
                p->count = saved;
                hr = 8;
                break;
            }
            b->base = base;
            b->size = 0x10000;
            base += 0x10000;
            size -= 0x10000;
            p->items[p->count] = b;
            p->count++;
        }
    }
    RtlLeaveCriticalSection(p->cs);
    return hr;
}
