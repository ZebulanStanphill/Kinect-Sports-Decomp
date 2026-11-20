#include "havok/hkArrayUtil.h"

typedef struct Array_82CF24D0 {
    int *data;
    int size;
    int capacity;
} Array_82CF24D0;

typedef struct Allocator_82CF24D0 Allocator_82CF24D0;

typedef struct AllocatorVtable_82CF24D0 {
    void *slots[4];
    void (*freeBlock)(Allocator_82CF24D0 *, void *, int, int);
} AllocatorVtable_82CF24D0;

struct Allocator_82CF24D0 {
    AllocatorVtable_82CF24D0 *vtable;
};

typedef struct Router_82CF24D0 {
    char padding[16];
    Allocator_82CF24D0 *heap;
} Router_82CF24D0;

typedef struct Context_82CF24D0 {
    int padding;
    unsigned int first;
    unsigned int second;
    unsigned int mode;
} Context_82CF24D0;

typedef struct Sample_82CF24D0 {
    char padding[0x34];
    int count;
} Sample_82CF24D0;

extern "C" Router_82CF24D0 *fn_82CE5410(void);
extern "C" void fn_82CF1548(Sample_82CF24D0 *, float, float, int, Array_82CF24D0 *, unsigned int);

extern "C" int fn_82CF24D0(Context_82CF24D0 *self, int sampleIndex, int resultIndex, Sample_82CF24D0 ***samples,
                int count, float length, float position)
{
    Array_82CF24D0 results;
    Router_82CF24D0 *router;
    Allocator_82CF24D0 *heap;
    float step = length / (float)count;
    int result;
    Sample_82CF24D0 **sampleData;

    results.data = 0;
    results.size = 0;
    results.capacity = 0x80000000;
    router = fn_82CE5410();
    if ((results.capacity & 0x3fffffff) < count) {
        hkArrayUtil::_reserve(*reinterpret_cast<hkMemoryAllocator *>(router->heap), &results, count, 4);
    }
    result = 0;
    sampleData = *samples;
    if ((sampleData)[sampleIndex]->count > 0) {
        unsigned int source;
        results.size = 0;
        if (self->mode == 0) {
            source = self->first;
        } else {
            source = self->second;
        }
        fn_82CF1548((sampleData)[sampleIndex], position, step, count, &results, source);
        if (resultIndex < results.size) {
            result = results.data[resultIndex];
        }
    }
    heap = fn_82CE5410()->heap;
    results.size = 0;
    if ((results.capacity & (int)0x80000000) == 0) {
        heap->vtable->freeBlock(heap, results.data, results.capacity & 0x3fffffff, 4);
    }
    return result;
}
