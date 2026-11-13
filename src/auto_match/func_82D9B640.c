/* hkpBoxMotion::setInertiaInvLocal(const hkMatrix3 &inertiaInv) (vtable slot 8 of hkpBoxMotion and hkpThinBoxMotion):
   m_inertiaAndMassInv.set(inertiaInv(0,0), inertiaInv(1,1), inertiaInv(2,2), m_inertiaAndMassInv(3)). */
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

typedef struct hkVector4_82D9B640 {
    __vector4 m_quad;
} hkVector4_82D9B640;

typedef struct hkMatrix3_82D9B640 {
    float m[3][4];
} hkMatrix3_82D9B640;

typedef struct hkpBoxMotion_82D9B640 {
    unsigned char pad[0xc0];
    hkVector4_82D9B640 m_inertiaAndMassInv;
} hkpBoxMotion_82D9B640;

static __forceinline void hkVector4_set(hkVector4_82D9B640 *v, float a, float b, float c, float d)
{
    __vector4 q;
    q.vector4_f32[0] = a;
    q.vector4_f32[1] = b;
    q.vector4_f32[2] = c;
    q.vector4_f32[3] = d;
    v->m_quad = q;
}

void fn_82D9B640(hkpBoxMotion_82D9B640 *self, const hkMatrix3_82D9B640 *inertiaInv)
{
    hkVector4_set(&self->m_inertiaAndMassInv, inertiaInv->m[0][0], inertiaInv->m[1][1], inertiaInv->m[2][2],
                  self->m_inertiaAndMassInv.m_quad.vector4_f32[3]);
}
