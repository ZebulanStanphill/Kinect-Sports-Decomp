extern void *memcpy(void *dst, const void *src, unsigned int n);

typedef struct Allocator_83081A78 Allocator_83081A78;
typedef struct AllocatorVt_83081A78 {
    void *dtor;
    void *(*blockAlloc)(Allocator_83081A78 *self, int numBytes);
    void (*blockFree)(Allocator_83081A78 *self, void *p, int numBytes);
} AllocatorVt_83081A78;
struct Allocator_83081A78 { AllocatorVt_83081A78 *vt; };

typedef struct Router_83081A78 {
    char pad[0x10];
    Allocator_83081A78 *heap;   /* 0x10 */
} Router_83081A78;

extern Router_83081A78 *fn_82CE5410(void);

typedef struct SmallArray_83081A78 {
    void *data;
    unsigned short size;              /* 0x4 */
    unsigned short capacityAndFlags;  /* 0x6 */
} SmallArray_83081A78;

void fn_83081A78(SmallArray_83081A78 *a, int elemSize)
{
    int cap = a->size ? a->size * 2 : 1;
    Allocator_83081A78 *heap = fn_82CE5410()->heap;
    void *p = heap->vt->blockAlloc(heap, cap * elemSize);
    memcpy(p, a->data, a->size * elemSize);
    if ((a->capacityAndFlags & 0x8000) == 0) {
        void *old = a->data;
        int n = (a->capacityAndFlags & 0x3fff) * elemSize;
        Allocator_83081A78 *h = fn_82CE5410()->heap;
        h->vt->blockFree(h, old, n);
    }
    a->data = p;
    a->capacityAndFlags = (a->capacityAndFlags & 0x4000) | cap;
}
