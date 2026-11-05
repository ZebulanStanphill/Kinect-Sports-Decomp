struct Heap_82D03510;
typedef struct VtA_82D03510 { int pad; unsigned *(*f4)(struct Heap_82D03510 *, unsigned); } VtA_82D03510;
typedef struct Heap_82D03510 {
    VtA_82D03510 *vt;
    char pad[0x98 - 4];
    struct Alt_82D03510 *alt;
} Heap_82D03510;
typedef struct VtB_82D03510 { int pad[9]; unsigned *(*f24)(struct Alt_82D03510 *, unsigned); } VtB_82D03510;
typedef struct Alt_82D03510 { VtB_82D03510 *vt; } Alt_82D03510;
unsigned *fn_82D03510(Heap_82D03510 *h, unsigned n)
{
    unsigned sz = (n + 0x1f) & ~0xfu;
    unsigned *p = h->vt->f4(h, sz);
    unsigned *r;
    if (p != 0) {
        r = p + 4;
        *p = 1;
    } else {
        p = h->alt->vt->f24(h->alt, sz);
        if (p != 0) {
            r = p + 4;
            *p = 0;
        } else {
            r = 0;
        }
    }
    return r;
}
