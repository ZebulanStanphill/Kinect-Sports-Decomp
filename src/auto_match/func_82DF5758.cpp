#include "havok/hkTransform.h"


typedef struct Collidable_82DF5758 {
    void *shape;
    unsigned int shapeKey;
    void *motion;
    void *parent;
    signed char ownerOffset; /* 0x10 */
    char pad11[3];
    int broadPhaseId;        /* 0x14 */
    unsigned char type;      /* 0x18 */
} Collidable_82DF5758;

typedef struct Entity_82DF5758 {
    char pad0[0x10];
    Collidable_82DF5758 collidable; /* 0x10 */
} Entity_82DF5758;

typedef struct Chain_82DF5758 {
    char pad0[0xc];
    void *data;                 /* 0xc */
    char pad10[0x28];
    Entity_82DF5758 **entities; /* 0x38 */
    int count;                  /* 0x3c */
} Chain_82DF5758;

extern "C" void fn_82D9AFC0(void *data, const __vector4 *a, const __vector4 *b);
extern "C" void fn_82D9CDC0(Chain_82DF5758 *self, Entity_82DF5758 *entity);

static __forceinline char *GetOwner(Collidable_82DF5758 *c)
{
    if (c->type == 1)
        return (char *)c + c->ownerOffset;
    return 0;
}

extern "C" void fn_82DF5758(Chain_82DF5758 *self, Entity_82DF5758 *entity, const hkVector4 *pivot)
{
    void *data = self->data;
    char *a = GetOwner(&self->entities[self->count - 1]->collidable);
    char *b = GetOwner(&entity->collidable);
    hkVector4 pivots[2];

    pivots[0].setTransformedInversePos(*reinterpret_cast<const hkTransform *>(a + 0xf0), *pivot);
    pivots[1].setTransformedInversePos(*reinterpret_cast<const hkTransform *>(b + 0xf0), *pivot);
    fn_82D9AFC0(data, &pivots[0].m_quad, &pivots[1].m_quad);
    fn_82D9CDC0(self, entity);
}
