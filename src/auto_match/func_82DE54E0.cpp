#include "havok/hkTransform.h"
#include "havok/hkSimdReal.h"


typedef struct Source_82DE54E0 {
    float f0;
    float duration;
    char pad8[0x8];
    __vector4 translation;
    hkRotation rotation;
} Source_82DE54E0;

typedef struct Out_82DE54E0 {
    char pad0[0x50];
    hkTransform transform;
    float time;
} Out_82DE54E0;


extern "C" void fn_82DE54E0(Source_82DE54E0 *self, float time, Out_82DE54E0 *out)
{
    hkSimdReal v;
    float ratio;

    ratio = time / self->duration;
    out->time = time;
    out->transform.m_translation.m_quad = self->translation;
    out->transform.m_rotation = self->rotation;
    v.m_real = __vspltw(__lvlx(&ratio, 0), 0);
    out->transform.m_rotation.mul(v);
}
