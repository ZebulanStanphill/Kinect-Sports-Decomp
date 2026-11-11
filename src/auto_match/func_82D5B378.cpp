// hkpConvexListAgent3::sepNormal: in gsk mode forwards to the gsk agent's sepNormal
// (fn_82D69B10); otherwise returns the first column of the identity transform
// (lbl_8323B1D0) with a distance of -1.70141e38.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __vector4 m_quad;
};

class hkTransform {
public:
    hkVector4 m_rotation[3];
    hkVector4 m_translation;
};

struct hkpGskCache {
    unsigned short m_vertices[4];
    unsigned char m_dimA;
    unsigned char m_dimB;
    unsigned char m_maxDim;
    unsigned char m_gskFlags;   // +0xb
};

struct hkpAgent3Input;
struct hkpAgentEntry;
typedef void hkpAgentData;

extern "C" {
void fn_82D69B10(const hkpAgent3Input &input, hkpAgentEntry *entry, hkpAgentData *agentData, hkVector4 &separatingNormalOut);
extern const hkTransform lbl_8323B1D0;   // hkTransform identity
extern const float lbl_82138F84;         // -1.70141e38f (0xfeffffee)
}

extern "C" void fn_82D5B378(const hkpAgent3Input &input, hkpAgentEntry *entry, hkpAgentData *agentData, hkVector4 &separatingNormalOut)
{
    hkpGskCache *gskCache = (hkpGskCache *)agentData;

    if (gskCache->m_gskFlags & 0x20) {
        fn_82D69B10(input, entry, agentData, separatingNormalOut);
    } else {
        float distance = lbl_82138F84;

        separatingNormalOut = lbl_8323B1D0.m_rotation[0];
        separatingNormalOut.m_quad.vector4_f32[3] = distance;
    }
}
