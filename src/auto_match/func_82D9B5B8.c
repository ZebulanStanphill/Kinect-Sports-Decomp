/* hkpBoxMotion::setInertiaLocal(const hkMatrix3 &inertia) (sibling of fn_82D9B640 setInertiaInvLocal):
   m_inertiaAndMassInv.set(1/inertia(0,0), 1/inertia(1,1), 1/inertia(2,2), m_inertiaAndMassInv(3)). */
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

typedef struct hkVector4_82D9B5B8 {
    __vector4 m_quad;
} hkVector4_82D9B5B8;

typedef struct hkMatrix3_82D9B5B8 {
    float m[3][4];
} hkMatrix3_82D9B5B8;

typedef struct hkpBoxMotion_82D9B5B8 {
    unsigned char pad[0xc0];
    hkVector4_82D9B5B8 m_inertiaAndMassInv;
} hkpBoxMotion_82D9B5B8;

static __forceinline void hkVector4_set(hkVector4_82D9B5B8 *v, float a, float b, float c, float d)
{
    __vector4 q;
    q.vector4_f32[0] = a;
    q.vector4_f32[1] = b;
    q.vector4_f32[2] = c;
    q.vector4_f32[3] = d;
    v->m_quad = q;
}

void fn_82D9B5B8(hkpBoxMotion_82D9B5B8 *self, const hkMatrix3_82D9B5B8 *inertia)
{
    hkVector4_set(&self->m_inertiaAndMassInv, 1.0f / inertia->m[0][0], 1.0f / inertia->m[1][1],
                  1.0f / inertia->m[2][2], self->m_inertiaAndMassInv.m_quad.vector4_f32[3]);
}
