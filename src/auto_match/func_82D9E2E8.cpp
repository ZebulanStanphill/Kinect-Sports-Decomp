#include "havok/hkVector4.h"

struct Pivots_82D9E2E8 {
    hkVector4 m_vec[1];          // 0x00, indexed by atom offsets (+5, +8)
};

struct Runtime_82D9E2E8 {
    hkVector4 m_vec[11];         // 0x00
    char pad[0x8];               // 0xb0
    int m_numJacobians;          // 0xb8
};

struct JacInfo_82D9E2E8 {
    hkVector4 m_axis;            // 0x00
    float m_a;                   // 0x10
    float m_b;                   // 0x14
    float m_dot;                 // 0x18
    float m_half;                // 0x1c
};

extern "C" void fn_8309FA20(JacInfo_82D9E2E8 *info, void *a, void *b);

extern "C" void fn_82D9E2E8(void *unused0, int **cursor, float **schema, void *unused1,
                            Runtime_82D9E2E8 *rt, void *out, void *out2)
{
    int idx;
    JacInfo_82D9E2E8 info;
    hkVector4 b, a;
    float *s;

    idx = *++(*cursor);
    info.m_half = 0.5f;
    b = rt->m_vec[idx + 5];
    a = rt->m_vec[idx + 8];
    info.m_axis.setCross(b, a);
    if (info.m_axis.lengthSquared3() < 1.1920929e-07f)
        return;
    info.m_axis.normalize3();
    info.m_dot = a(0) * b(0) + a(1) * b(1) + a(2) * b(2);
    s = *schema;
    *schema = s + 4;
    info.m_a = s[0];
    info.m_b = s[1];
    fn_8309FA20(&info, out, out2);
    rt->m_numJacobians++;
}
