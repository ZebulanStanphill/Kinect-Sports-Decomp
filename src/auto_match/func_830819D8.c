extern void *memcpy(void *dst, const void *src, unsigned int n);

typedef struct Allocator_830819D8 Allocator_830819D8;
typedef struct AllocatorVt_830819D8 {
    void *dtor;
    void *(*blockAlloc)(Allocator_830819D8 *self, int numBytes);
    void (*blockFree)(Allocator_830819D8 *self, void *p, int numBytes);
} AllocatorVt_830819D8;
struct Allocator_830819D8 { AllocatorVt_830819D8 *vt; };

typedef struct Router_830819D8 {
    char pad[0x10];
    Allocator_830819D8 *heap;   /* 0x10 */
} Router_830819D8;

extern Router_830819D8 *fn_82CE5410(void);

typedef struct SmallArray_830819D8 {
    void *data;
    unsigned short size;              /* 0x4 */
    unsigned short capacityAndFlags;  /* 0x6 */
} SmallArray_830819D8;

void fn_830819D8(SmallArray_830819D8 *a, int cap, int elemSize)
{
    Allocator_830819D8 *heap = fn_82CE5410()->heap;
    void *p = heap->vt->blockAlloc(heap, cap * elemSize);
    memcpy(p, a->data, a->size * elemSize);
    if ((a->capacityAndFlags & 0x8000) == 0) {
        void *old = a->data;
        int n = (a->capacityAndFlags & 0x3fff) * elemSize;
        Allocator_830819D8 *h = fn_82CE5410()->heap;
        h->vt->blockFree(h, old, n);
    }
    a->data = p;
    a->capacityAndFlags = (a->capacityAndFlags & 0x4000) | cap;
}
