#include "havok/hkRotation.h"

typedef struct Key_825A55D8 {
    float f0;
    float time;
    char pad8[0x8];
    hkVector4 translation;
    hkRotation rotation;
} Key_825A55D8;

typedef struct Obj_825A55D8 {
    char pad0[0x10];
    Key_825A55D8 key;
} Obj_825A55D8;

extern "C" void fn_825A55D8(Obj_825A55D8 *self, float time, Key_825A55D8 *out)
{
    const Key_825A55D8 *key = &self->key;
    hkSimdReal v;

    out->f0 = key->f0;
    out->time = key->time;
    out->translation = key->translation;
    out->rotation = key->rotation;
    v.m_real = __vspltw(__lvlx(&time, 0), 0);
    out->time = time;
    out->rotation.mul(v);
}
