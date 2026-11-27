#include "havok/hkArrayUtil.h"
#include "xdk/vectorintrinsics.h"

typedef struct Allocator_82D0C930 Allocator_82D0C930;

typedef struct Vtable_82D0C930 {
    void *slots[4];
    void (*free)(Allocator_82D0C930 *, void *, int, int);
} Vtable_82D0C930;

struct Allocator_82D0C930 {
    Vtable_82D0C930 *vtable;
};

typedef struct Context_82D0C930 {
    char pad000[0x10];
    Allocator_82D0C930 *allocator; /* 0x10 */
} Context_82D0C930;

typedef struct Array_82D0C930 {
    __vector4 *data; /* 0x0 */
    int size;        /* 0x4 */
    int capacity;    /* 0x8 */
} Array_82D0C930;

typedef struct Node_82D0C930 {
    struct Node_82D0C930 *next; /* 0x0 */
    char pad004[0xc];
    __vector4 point; /* 0x10 */
} Node_82D0C930;

typedef struct Hull_82D0C930 {
    char pad000[0x24];
    Node_82D0C930 *points; /* 0x24 */
    int count;             /* 0x28 */
    char pad02c[0x34];
    Array_82D0C930 cached; /* 0x60 */
} Hull_82D0C930;

typedef struct Object_82D0C930 {
    char pad000[8];
    Hull_82D0C930 *hull; /* 0x8 */
} Object_82D0C930;

extern "C" Context_82D0C930 *fn_82CE5410(void);
extern "C" void fn_82D1D8F0(Array_82D0C930 *, Array_82D0C930 *);
extern "C" void fn_82D1D478(Array_82D0C930 *, void *, void *);

static __forceinline void Release_82D0C930(Array_82D0C930 *points)
{
    Allocator_82D0C930 *allocator = fn_82CE5410()->allocator;
    points->size = 0;
    if ((points->capacity & (int)0x80000000) == 0) {
        allocator->vtable->free(allocator, points->data, points->capacity & 0x3fffffff, 16);
    }
    points->data = 0;
    points->capacity = 0x80000000;
}

static __forceinline __vector4 *Expand_82D0C930(Array_82D0C930 *points, int count)
{
    Allocator_82D0C930 *allocator = fn_82CE5410()->allocator;
    int oldSize = points->size;
    int size = count + oldSize;
    if ((points->capacity & 0x3fffffff) < size) {
        int capacity = (points->capacity & 0x3fffffff) * 2;
        hkArrayUtil::_reserve(*reinterpret_cast<hkMemoryAllocator *>(allocator), points, size < capacity ? capacity : size, 16);
    }
    points->size += count;
    return points->data + oldSize;
}

extern "C" void fn_82D0C930(Object_82D0C930 *self, void *out, void *input)
{
    Hull_82D0C930 *hull = self->hull;
    if (hull->cached.size == 0) {
        Array_82D0C930 points;
        int count;
        __vector4 *destination;
        Node_82D0C930 *node;
        points.data = 0;
        points.size = 0;
        points.capacity = 0x80000000;
        count = hull->count;
        destination = Expand_82D0C930(&points, count);
        for (node = hull->points; node != 0; node = node->next) {
            __vector4 *slot = destination++;
            *slot = node->point;
        }
        fn_82D1D8F0(&points, &hull->cached);
        Release_82D0C930(&points);
    }
    fn_82D1D478(&hull->cached, out, input);
}
