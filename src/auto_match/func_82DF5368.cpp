#include "havok/hkVector4.h"

struct Entity_82DF5368 {
    char pad[0xf0];
    char transform[0x40];
    __forceinline const hkTransform &getTransform() const { return *(const hkTransform *)transform; }
};

struct SpringAction_82DF5368 {
    char pad0[0x18];
    Entity_82DF5368 *entityA;      // 0x18
    Entity_82DF5368 *entityB;      // 0x1c
    char pad20[0x10];
    hkVector4 positionAinA;        // 0x30
    hkVector4 positionBinB;        // 0x40
    float restLength;              // 0x50
};

extern "C" void fn_82DF5368(SpringAction_82DF5368 *self, const hkVector4 &pivotA, const hkVector4 &pivotB)
{
    Entity_82DF5368 *a = self->entityA;
    Entity_82DF5368 *b = self->entityB;

    self->positionAinA = pivotA;
    self->positionBinB = pivotB;

    hkVector4 worldA;
    hkVector4 worldB;
    worldA.setTransformedPos(a->getTransform(), pivotA);
    worldB.setTransformedPos(b->getTransform(), pivotB);

    hkVector4 d;
    d.setSub4(worldA, worldB);
    self->restLength = d.length3();
}
