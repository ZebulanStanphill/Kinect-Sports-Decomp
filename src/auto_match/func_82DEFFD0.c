typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

typedef struct Allocator_82DEFFD0 Allocator_82DEFFD0;
typedef struct {
    void *dtor;
    void *(*blockAlloc)(Allocator_82DEFFD0 *self, int nbytes);
} AllocatorVt_82DEFFD0;
struct Allocator_82DEFFD0 { AllocatorVt_82DEFFD0 *vt; };
typedef struct { char pad[0x10]; Allocator_82DEFFD0 *heap; } MemoryRouter_82DEFFD0;

typedef struct { void *vt; unsigned short memSizeAndFlags; short referenceCount; } RefObject_82DEFFD0;
typedef struct { __vector4 m_quad; } Vector4_82DEFFD0;
typedef struct { void **data; int size; int capacity; } PtrArray_82DEFFD0;

typedef struct DashpotAction_82DEFFD0 {
    RefObject_82DEFFD0 base;
    void *world;
    void *island;
    unsigned int userData;
    char *name;
    void *entityA;
    void *entityB;
    Vector4_82DEFFD0 point[2];   /* 0x20 */
    float strength;              /* 0x40 */
    float damping;               /* 0x44 */
    Vector4_82DEFFD0 impulse;    /* 0x50 */
} DashpotAction_82DEFFD0;

extern MemoryRouter_82DEFFD0 *fn_82CE5410(void);
extern DashpotAction_82DEFFD0 *fn_82DEFF58(void *mem, void *entityA, void *entityB, unsigned int userData);

DashpotAction_82DEFFD0 *fn_82DEFFD0(DashpotAction_82DEFFD0 *self, PtrArray_82DEFFD0 *newEntities,
                                    PtrArray_82DEFFD0 *newPhantoms)
{
    Allocator_82DEFFD0 *heap;
    RefObject_82DEFFD0 *mem;
    DashpotAction_82DEFFD0 *da;

    if (newEntities->size != 2) return 0;
    if (newPhantoms->size != 0) return 0;
    heap = fn_82CE5410()->heap;
    mem = (RefObject_82DEFFD0 *)heap->vt->blockAlloc(heap, 0x60);
    mem->memSizeAndFlags = 0x60;
    da = fn_82DEFF58(mem, newEntities->data[0], newEntities->data[1], self->userData);
    da->point[0].m_quad = self->point[0].m_quad;
    da->point[1].m_quad = self->point[1].m_quad;
    da->strength = self->strength;
    da->damping = self->damping;
    da->impulse.m_quad = self->impulse.m_quad;
    return da;
}
