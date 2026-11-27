#include "xdk/vectorintrinsics.h"

typedef __vector4 Vector_82510338;
typedef struct Resource_82510338 Resource_82510338;

typedef struct Vtable_82510338 {
    void *unused;
    unsigned int (*get)(Resource_82510338 *, unsigned int);
} Vtable_82510338;

struct Resource_82510338 {
    Vtable_82510338 *vtable;
};

typedef struct Handle_82510338 {
    char pad[0x10];
    Resource_82510338 *resource; /* 0x10 */
} Handle_82510338;

typedef struct Entry_82510338 {
    unsigned int key;
    unsigned int values[3];
} Entry_82510338;

typedef struct Object_82510338 {
    int unused;
    char *device;           /* 4 */
    Handle_82510338 handle; /* 8 */
    int pad;
    Entry_82510338 *first; /* 0x20 */
    Entry_82510338 *last;  /* 0x24 */
} Object_82510338;

typedef struct Input_82510338 {
    char pad[0x10];
    unsigned int enabled; /* 0x10 */
    int unused;
    unsigned int index; /* 0x18 */
} Input_82510338;

extern __declspec(noreturn) void fn_82F63108(void);
extern void fn_82563230(void *, int, void *, Vector_82510338 *, int);

static __forceinline unsigned int GetResource_82510338(Handle_82510338 *handle, unsigned int enabled)
{
    if (handle->resource == 0) {
        fn_82F63108();
    }
    return handle->resource->vtable->get(handle->resource, enabled);
}

void fn_82510338(Object_82510338 *self, Input_82510338 **input)
{
    Input_82510338 *value = *input;
    unsigned int key = GetResource_82510338(&self->handle, value->enabled != 0);
    Entry_82510338 *first = self->first;
    Entry_82510338 *last = self->last;
    int count = last - first;
    while (count > 0) {
        int half = count / 2;
        Entry_82510338 *middle = first + half;
        if (middle->key < key) {
            first = middle + 1;
            count = count - half - 1;
        } else {
            count = half;
        }
    }
    if (first != last && first->key == key) {
        Vector_82510338 vector = *(Vector_82510338 *)(self->device + 0x50);
        fn_82563230(self->device, 3, (unsigned int *)first + value->index + 1, &vector, 0);
    }
}
