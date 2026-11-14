typedef struct Heap_82823640 Heap_82823640;
typedef struct HeapFuncs_82823640 {
    void *slot0;
    void *slot4;
    void *slot8;
    void *slotc;
    int (*size)(Heap_82823640 *heap, char *p);
} HeapFuncs_82823640;
struct Heap_82823640 {
    char pad0[0xc];
    unsigned int flags;
    HeapFuncs_82823640 *funcs;
    char pad14[0x64];
    int header;
};

extern char lbl_8320A5DC[];
extern void fn_82823440(void);
extern void fn_82822510(void *table, void (*cb)(void), void *arg, Heap_82823640 **out);

int fn_82823640(char *p)
{
    Heap_82823640 *found;
    fn_82822510(lbl_8320A5DC, fn_82823440, p, &found);
    if (found != 0) {
        Heap_82823640 *heap = found;
        char *q = p;
        int size;
        if (heap->flags & 4) {
            q = p - heap->header;
        }
        size = heap->funcs->size(heap, q);
        if (heap->flags & 4) {
            size -= heap->header * 2;
        }
        return size;
    }
    return 0;
}
