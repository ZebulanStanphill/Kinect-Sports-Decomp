#include "havok/hkString.h"

typedef struct Allocator_82D004B8 Allocator_82D004B8;

typedef struct AllocatorVt_82D004B8 {
    void *f0;
    void *(*alloc)(Allocator_82D004B8 *self, int size);           /* 0x4 */
    void (*free)(Allocator_82D004B8 *self, void *data, int size); /* 0x8 */
} AllocatorVt_82D004B8;

struct Allocator_82D004B8 {
    AllocatorVt_82D004B8 *vt;
};

typedef struct Memory_82D004B8 {
    char pad0[0x10];
    Allocator_82D004B8 *allocator; /* 0x10 */
} Memory_82D004B8;

typedef struct Table_82D004B8 {
    int *data; /* 0x0 */
    int count; /* 0x4 */
    int mask;  /* 0x8 */
} Table_82D004B8;

extern "C" Memory_82D004B8 *fn_82CE5410(void);
extern "C" void fn_82D000A0(Table_82D004B8 *self, int key, int value);

extern "C" void fn_82D004B8(Table_82D004B8 *self, int capacity)
{
    int *oldData = self->data;
    int oldCapacity = self->mask + 1;
    Allocator_82D004B8 *allocator;
    int i;

    allocator = fn_82CE5410()->allocator;
    self->data = static_cast<int *>(allocator->vt->alloc(allocator, capacity * 3 * 4));
    hkString::memSet(self->data, 0xff, capacity * 4);
    self->count = 0;
    self->mask = capacity - 1;
    for (i = 0; i < oldCapacity; i++) {
        if (oldData[i] != -1) {
            fn_82D000A0(self, oldData[oldCapacity + i], oldData[oldCapacity * 2 + i]);
        }
    }
    allocator = fn_82CE5410()->allocator;
    allocator->vt->free(allocator, oldData, oldCapacity * 3 * 4);
}
