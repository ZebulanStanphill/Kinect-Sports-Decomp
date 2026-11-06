typedef struct Heap_82C7BFB8 {
    int pad0[2];
    char heap[1];
} Heap_82C7BFB8;

typedef struct Buf_82C7BFB8 {
    char pad0[0x5604];
    void *scratch;
    void *data;
    unsigned int size;
    char pad5610[0x6070 - 0x5610];
    Heap_82C7BFB8 *owner;
} Buf_82C7BFB8;

extern char lbl_82196582[];
extern void *fn_82C562F0(void *heap, unsigned int size, char *tag);
extern void fn_82C563B0(void *heap, void *p);
extern void *memcpy(void *dst, const void *src, unsigned int n);

int fn_82C7BFB8(Buf_82C7BFB8 *b, unsigned int keep, int extra)
{
    void *heap;
    void *saved;

    b->size = extra + 0x1000;
    saved = 0;
    heap = b->owner->heap;
    if (keep != 0) {
        saved = fn_82C562F0(heap, keep, lbl_82196582);
        if (saved == 0) {
            return -9;
        }
        memcpy(saved, b->data, keep);
    }
    if (b->data != 0) {
        fn_82C563B0(heap, b->data);
        b->data = 0;
    }
    if (b->scratch != 0) {
        fn_82C563B0(heap, b->scratch);
        b->scratch = 0;
    }
    b->scratch = fn_82C562F0(heap, b->size, lbl_82196582);
    if (b->scratch == 0) {
        b->size = 0;
        if (saved != 0) {
            fn_82C563B0(heap, saved);
        }
        return -9;
    }
    b->data = fn_82C562F0(heap, b->size, lbl_82196582);
    if (b->data == 0) {
        if (b->scratch != 0) {
            fn_82C563B0(heap, b->scratch);
            b->scratch = 0;
        }
        if (saved != 0) {
            fn_82C563B0(heap, saved);
        }
        b->size = 0;
        return -9;
    }
    if (keep != 0) {
        memcpy(b->data, saved, keep);
    }
    if (saved != 0) {
        fn_82C563B0(heap, saved);
    }
    return 0;
}
