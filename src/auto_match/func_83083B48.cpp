#include "havok/hkArrayUtil.h"
#include "xdk/vectorintrinsics.h"

typedef struct Aabb_83083B48 {
    __vector4 min; /* 0x00 */
    __vector4 max; /* 0x10 */
} Aabb_83083B48;

typedef struct Array_83083B48 {
    void *data;             /* 0x00 */
    int size;               /* 0x04 */
    unsigned int flags : 2; /* 0x08 */
    unsigned int capacity : 30;
} Array_83083B48;

typedef struct Header_83083B48 {
    int count;              /* 0x00 */
    unsigned char divisor;  /* 0x04 */
    unsigned char extended; /* 0x05 */
    char pad6[0xA];
    Aabb_83083B48 aabb; /* 0x10 */
} Header_83083B48;

typedef struct Builder_83083B48 {
    Array_83083B48 nodes; /* 0x00 */
    int current;          /* 0x0C */
    int count;            /* 0x10 */
    int doubled;          /* 0x14 */
    int quotient;         /* 0x18 */
    Array_83083B48 items; /* 0x1C */
    int pad28;            /* 0x28 */
    int pad2c;            /* 0x2C */
    Aabb_83083B48 aabb;   /* 0x30 */
} Builder_83083B48;

typedef struct Allocator_83083B48 {
    char pad0[0x10];
    void *heap; /* 0x10 */
} Allocator_83083B48;

static __forceinline void CopyAabb_83083B48(Aabb_83083B48 *dst, const Aabb_83083B48 *src)
{
    dst->min = src->min;
    dst->max = src->max;
}

extern "C" Allocator_83083B48 *fn_82CE5410(void);
extern "C" void fn_83083970(Builder_83083B48 *self, int count);

extern "C" void fn_83083B48(Builder_83083B48 *self, Header_83083B48 *header)
{
    int count;
    Array_83083B48 *items;
    void *heap;
    int capacity;
    int divisor;
    int quotient;

    self->current = -1;
    CopyAabb_83083B48(&self->aabb, &header->aabb);
    count = header->count;
    if (header->extended != 0) {
        count += 4;
    }
    self->doubled = count * 2;
    divisor = header->divisor;
    if (divisor == 0) {
        quotient = 0;
    } else {
        quotient = header->count / divisor;
    }
    self->quotient = quotient;
    fn_83083970(self, self->doubled + quotient);
    items = &self->items;
    count = header->count;
    self->count = count;
    heap = fn_82CE5410()->heap;
    if ((int)items->capacity < count) {
        capacity = items->capacity * 2;
        if (count >= capacity) {
            capacity = count;
        }
        hkArrayUtil::_reserve(*reinterpret_cast<hkMemoryAllocator *>(heap), items, capacity, 0x10);
    }
    items->size = count;
}
