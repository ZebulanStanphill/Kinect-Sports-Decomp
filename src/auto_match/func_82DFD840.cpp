// hkpVehicleInstance::calcKMPH (vtable ??_7hkpVehicleInstance@@6B@ slot 13): the chassis'
// linear velocity length (hkVector4::length3, two refinement steps against Havok's global
// 0.5 vector) times 3.6.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __vmulfp(__vector4, __vector4);
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

class hkVector4 {
public:
    __forceinline float length3() const
    {
        const hkQuadReal zero = __vspltisw(0);
        const hkQuadReal len2 = __vmsum3fp(m_quad, m_quad);
        hkQuadReal e = __vrsqrtefp(len2);
        const hkQuadReal halfLen2 = __vmulfp(len2, lbl_82132D70);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vsel(e, zero, __vcmpeqfp(zero, len2));
        float r;
        __stvewx(__vmulfp(len2, e), &r, 0);
        return r;
    }
    hkQuadReal m_quad;
};

struct RigidBody_82DFD840 {
    char pad0[0x1b0];
    hkVector4 linearVelocity;   // 0x1b0
};

struct VehicleInstance_82DFD840 {
    char pad0[0x18];
    RigidBody_82DFD840 *chassis;   // 0x18
};

extern "C" float fn_82DFD840(const VehicleInstance_82DFD840 *self)
{
    return self->chassis->linearVelocity.length3() * 3.6f;
}
