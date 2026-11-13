typedef struct Allocator_82DF4B08 Allocator_82DF4B08;
typedef struct {
    void *dtor;
    void *(*blockAlloc)(Allocator_82DF4B08 *self, int nbytes);
} AllocatorVt_82DF4B08;
struct Allocator_82DF4B08 { AllocatorVt_82DF4B08 *vt; };
typedef struct { char pad[0x10]; Allocator_82DF4B08 *heap; } MemoryRouter_82DF4B08;

typedef struct { void *vt; unsigned short memSizeAndFlags; short referenceCount; } RefObject_82DF4B08;
typedef struct { float v[4]; } Vector4_82DF4B08;
typedef struct { void **data; int size; int capacity; } PtrArray_82DF4B08;

typedef struct ReorientAction_82DF4B08 {
    RefObject_82DF4B08 base;
    void *world;
    void *island;
    unsigned int userData;
    char *name;
    void *entity;
    int pad1c;
    Vector4_82DF4B08 rotationAxis;
    Vector4_82DF4B08 upAxis;
    float strength;
    float damping;
} ReorientAction_82DF4B08;

extern MemoryRouter_82DF4B08 *fn_82CE5410(void);
extern ReorientAction_82DF4B08 *fn_82DF4A98(void *mem, void *entity, Vector4_82DF4B08 *rotationAxis,
                                             Vector4_82DF4B08 *upAxis, float strength, float damping);

ReorientAction_82DF4B08 *fn_82DF4B08(ReorientAction_82DF4B08 *self, PtrArray_82DF4B08 *newEntities,
                                     PtrArray_82DF4B08 *newPhantoms)
{
    Allocator_82DF4B08 *heap;
    RefObject_82DF4B08 *mem;
    ReorientAction_82DF4B08 *action;

    if (newEntities->size != 1) return 0;
    if (newPhantoms->size != 0) return 0;
    heap = fn_82CE5410()->heap;
    mem = (RefObject_82DF4B08 *)heap->vt->blockAlloc(heap, 0x50);
    mem->memSizeAndFlags = 0x50;
    action = fn_82DF4A98(mem, newEntities->data[0], &self->rotationAxis, &self->upAxis, self->strength, self->damping);
    action->userData = self->userData;
    return action;
}
