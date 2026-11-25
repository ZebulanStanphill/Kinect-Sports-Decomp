#include "havok/hkVector4.h"

extern "C" const hkVector4 lbl_8323B1D0[4];   // Havok vector table (0x40 bytes), [0] used

struct Body_8309F010 {
    char pad00[0x30];
    hkVector4 m_center;     // 0x30
};

struct Contact_8309F010 {
    hkVector4 m_a;          // 0x00
    hkVector4 m_b;          // 0x10
    hkVector4 m_normal;     // 0x20
};

struct Self_8309F010 {
    char pad00[4];
    float m_radius;         // 0x04
};

extern "C" void fn_830A6458(const Contact_8309F010 *contact, void *a, void *b, float distance);

extern "C" void fn_8309F010(const Self_8309F010 *self, void *a, const Body_8309F010 *bodyA, const Body_8309F010 *bodyB, void *b)
{
    Contact_8309F010 contact;
    hkVector4 d;
    float len;

    contact.m_a = bodyA->m_center;
    contact.m_b = bodyB->m_center;
    d.setSub4(contact.m_a, contact.m_b);
    len = d.length3();
    if (len <= 1.192092896e-07f) {
        contact.m_normal = lbl_8323B1D0[0];
        len = 0.0f;
    } else {
        contact.m_normal.setMul4(1.0f / len, d);
    }
    fn_830A6458(&contact, a, b, self->m_radius - len);
}
