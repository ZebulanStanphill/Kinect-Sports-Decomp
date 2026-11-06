typedef struct Allocator_82CE63B0 Allocator_82CE63B0;

typedef struct {
    void *slot0;
    void *slot4;
    void *slot8;
    void *(*alloc)(Allocator_82CE63B0 *self, int *capacity, int elemSize);
    void *slot10;
    void *(*realloc)(Allocator_82CE63B0 *self, void *data, unsigned int capacity, int *newCapacity, int elemSize);
} AllocatorVtbl_82CE63B0;

struct Allocator_82CE63B0 {
    AllocatorVtbl_82CE63B0 *vt;
};

typedef struct {
    void *data;
    int count;
    int capacity;
} Array_82CE63B0;

extern void *memcpy(void *dst, const void *src, unsigned int n);

void fn_82CE63B0(Allocator_82CE63B0 *a, Array_82CE63B0 *arr, int elemSize)
{
    int newCapacity;
    void *data;
    newCapacity = arr->count != 0 ? arr->count * 2 : 1;
    if ((arr->capacity & (int)0x80000000) == 0) {
        unsigned int cap = arr->capacity & 0x3fffffff;
        data = a->vt->realloc(a, arr->data, cap, &newCapacity, elemSize);
        arr->data = data;
        arr->capacity = newCapacity;
    } else {
        data = a->vt->alloc(a, &newCapacity, elemSize);
        memcpy(data, arr->data, elemSize * arr->count);
        arr->data = data;
        arr->capacity = newCapacity;
    }
}
