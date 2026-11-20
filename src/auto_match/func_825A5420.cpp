#include "havok/hkMatrix3.h"
#include "havok/hkSimdReal.h"



typedef struct State_825A5420 {
    float a;                   /* 0x00 */
    float b;                   /* 0x04 */
    char pad8[8];
    hkVector4 v;                /* 0x10 */
    hkMatrix3 m;        /* 0x20 */
} State_825A5420;

typedef struct Self_825A5420 {
    char pad0[0x18];
    State_825A5420 *state;     /* 0x18 */
} Self_825A5420;


extern "C" void fn_825A5420(Self_825A5420 *self, float scale, State_825A5420 *out)
{
    State_825A5420 *src = self->state;
    hkSimdReal s;

    out->a = src->a;
    out->b = src->b;
    out->v = src->v;
    out->m = src->m;
    s.m_real = __vspltw(__lvlx(&scale, 0), 0);
    out->b = scale;
    out->m.mul(s);
}
