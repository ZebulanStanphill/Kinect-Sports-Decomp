typedef struct Container_82E14BC8 Container_82E14BC8;

typedef struct Vtable_82E14BC8 {
    void *slots0[8];
    void *(*nextResource)(Container_82E14BC8 *, const char *, const void *, void *); /* 0x20 */
    void *slots24[4];
    Container_82E14BC8 *(*nextChild)(Container_82E14BC8 *, const char *, Container_82E14BC8 *); /* 0x34 */
} Vtable_82E14BC8;

struct Container_82E14BC8 {
    Vtable_82E14BC8 *vtable;
};

typedef struct ResourceArray_82E14BC8 {
    void **data;
    int size;
    int capacityAndFlags;
} ResourceArray_82E14BC8;

typedef struct Router_82E14BC8 {
    char padding[16];
    void *heap;
} Router_82E14BC8;

extern Router_82E14BC8 *fn_82CE5410(void);
extern void fn_82CE63B0(void *, ResourceArray_82E14BC8 *, int);

static __forceinline void ConstructWithCopy(void **t, int n, void *const *tcopy)
{
    int i;
    for (i = 0; i < n; ++i) {
        t[i] = *tcopy;
    }
}

static __forceinline void PushBack(ResourceArray_82E14BC8 *a, void *const *v)
{
    Router_82E14BC8 *router = fn_82CE5410();
    if (a->size == (a->capacityAndFlags & 0x3fffffff)) {
        fn_82CE63B0(router->heap, a, 4);
    }
    ConstructWithCopy(a->data + a->size, 1, v);
    a->size++;
}

void fn_82E14BC8(Container_82E14BC8 *self, ResourceArray_82E14BC8 *resources)
{
    Container_82E14BC8 *child;
    void *resource;

    for (child = self->vtable->nextChild(self, 0, 0); child != 0;
         child = self->vtable->nextChild(self, 0, child)) {
        fn_82E14BC8(child, resources);
    }
    for (resource = self->vtable->nextResource(self, 0, 0, 0); resource != 0;
         resource = self->vtable->nextResource(self, 0, 0, resource)) {
        PushBack(resources, &resource);
    }
}
