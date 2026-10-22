typedef struct {
    void **items;
    unsigned int count;
    unsigned int cap;
} Arr;

extern void *fn_8265C940(unsigned int size, int tag);
extern void fn_8265C990(void *p, int tag);
extern int fn_82A3F7B8(void *obj, int a, int b, unsigned int cap);
extern unsigned int fn_82A3F820(void *obj);
void *memcpy(void *d, const void *s, unsigned int n);

unsigned int fn_82A3FA30(Arr *a, int p2, int p3, void **out)
{
    unsigned int r;
    unsigned int i;
    void **obj;
    void **n;
    void **items;

    i = 0;
    do {
        items = a->items;
        r = fn_82A3F820(items[i]);
        if (r != 0) break;
        i++;
    } while (i < a->count);
    if (i == a->count) {
        obj = (void **)fn_8265C940(0xc, 0x24970000);
        if (obj != 0) {
            if (fn_82A3F7B8(obj, p2, p3, a->cap) >= 0) {
                n = (void **)fn_8265C940((a->count + 1) * 4, 0x24970000);
                if (n != 0) {
                    memcpy(n + 1, a->items, a->count * 4);
                    fn_8265C990(a->items, 0x24970000);
                    a->items = n;
                    n[0] = obj;
                    i = 0;
                    if (a->cap < 0x20) {
                        a->cap <<= 1;
                    }
                    r = fn_82A3F820(obj);
                    a->count++;
                } else {
                    fn_8265C990(*obj, 0x24970000);
                    *obj = 0;
                    fn_8265C990(obj, 0x24970000);
                }
            } else {
                fn_8265C990(obj, 0x24970000);
            }
        }
    }
    if (r != 0) {
        *out = a->items[i];
    }
    return r;
}
