typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __vxor(__vector4, __vector4);
}

class hkVector4
{
  public:
    __forceinline void operator=(const hkVector4 &v)
    {
        m_quad = v.m_quad;
    }

    __forceinline float &operator()(int i)
    {
        return m_quad.vector4_f32[i];
    }

    __forceinline void setZero()
    {
        m_quad = __vxor(m_quad, m_quad);
    }

    hkQuadReal m_quad;
};

struct Runtime_82D9D658 {
    hkVector4 m_vec[11]; // 0x00
    char pad[0x8];       // 0xb0
    int m_numJacobians;  // 0xb8
};

struct JacInfo_82D9D658 {
    hkVector4 m_pivotA; // 0x00
    hkVector4 m_pivotB; // 0x10
    hkVector4 m_axis;   // 0x20
};

extern "C" void fn_830A6170(JacInfo_82D9D658 *info, void *out, void *out2);

extern "C" void fn_82D9D658(void *unused0, int **cursor, float **schema, void *unused1, Runtime_82D9D658 *rt,
                            void *out, void *out2)
{
    JacInfo_82D9D658 info;

    info.m_pivotA = rt->m_vec[0];
    info.m_axis.setZero();
    info.m_axis(0) = 1.0f;
    info.m_pivotB = rt->m_vec[1];
    fn_830A6170(&info, out, out2);
    info.m_axis(1) = 1.0f;
    info.m_axis(0) = 0.0f;
    fn_830A6170(&info, out, out2);
    info.m_axis(1) = 0.0f;
    info.m_axis(2) = 1.0f;
    fn_830A6170(&info, out, out2);
    rt->m_numJacobians += 3;
}
