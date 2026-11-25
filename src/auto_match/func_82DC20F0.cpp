#include "havok/hkTransform.h"

typedef struct Obj_82DC20F0 {
    unsigned char pad0[0x18];
    unsigned char unk18;
    unsigned char unk19;
} Obj_82DC20F0;

typedef struct Body_82DC20F0 {
    unsigned char pad0[0xf0];
    hkTransform transform;
} Body_82DC20F0;

extern "C" int fn_82DC1F50(Obj_82DC20F0 *self, const __vector4 *p);
extern "C" int fn_82DC2020(Obj_82DC20F0 *self, const __vector4 *p);

extern "C" int fn_82DC20F0(Obj_82DC20F0 *self, Body_82DC20F0 *a, Body_82DC20F0 *b, const hkVector4 *v)
{
    hkVector4 pa;
    hkVector4 pb;
    int r;

    pa.setTransformedInversePos(a->transform, *v);
    pb.setTransformedInversePos(b->transform, *v);
    r = fn_82DC1F50(self, &pa.m_quad);
    fn_82DC2020(self, &pb.m_quad);
    self->unk18 = 1;
    self->unk19 = 1;
    return r;
}
