#include "havok/hkTransform.h"
// hkpSpringAction::setPositionsInWorldSpace shape: both pivots are moved into the local
// space of their bodies and the rest
// length becomes the distance between the two world pivots.
extern "C" {
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vmsum3fp(__vector4, __vector4);
__vector4 __vrsqrtefp(__vector4);
__vector4 __vnmsubfp(__vector4, __vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vcmpeqfp(__vector4, __vector4);
__vector4 __vsel(__vector4, __vector4, __vector4);
__vector4 __vspltisw(int);
void __stvewx(__vector4, void *, int);
extern const hkQuadReal lbl_82132D70;   // Havok's global vector of four 0.5s
}

struct Entity_82DF52C0 {
    char pad[0xf0];
    char transform[0x40];
    __forceinline const hkTransform &getTransform() const { return *(const hkTransform *)transform; }
};

struct SpringAction_82DF52C0 {
    char pad0[0x18];
    Entity_82DF52C0 *entityA;      // 0x18
    Entity_82DF52C0 *entityB;      // 0x1c
    char pad20[0x10];
    hkVector4 positionAinA;        // 0x30
    hkVector4 positionBinB;        // 0x40
    float restLength;              // 0x50
};

extern "C" void fn_82DF52C0(SpringAction_82DF52C0 *self, const hkVector4 &pivotA, const hkVector4 &pivotB)
{
    Entity_82DF52C0 *a = self->entityA;
    Entity_82DF52C0 *b = self->entityB;

    self->positionAinA.setTransformedInversePos(a->getTransform(), pivotA);
    self->positionBinB.setTransformedInversePos(b->getTransform(), pivotB);

    hkVector4 d;
    d.setSub4(pivotA, pivotB);
    self->restLength = d.length3();
}
