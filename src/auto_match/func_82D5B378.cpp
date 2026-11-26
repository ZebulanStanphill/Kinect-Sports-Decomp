#include "havok/hkpGskCache.h"

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

        separatingNormalOut = lbl_8323B1D0.m_rotation.m_col0;
        separatingNormalOut.m_quad.vector4_f32[3] = distance;
    }
}
