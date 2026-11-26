// hkpSampledHeightFieldBaseCinfo (Physics/Collide/Shape/HeightField/SampledHeightField/
// hkpSampledHeightFieldBaseCinfo.h), 0x30 bytes: the construction info of a sampled height field.
// The layout is from hkpSampledHeightFieldShape's constructor (82D465A8), which reads every member; the
// names follow Havok's header, and the bytes after m_useProjectionBasedHeight are not read by the game.
#ifndef HAVOK_HKPSAMPLEDHEIGHTFIELDBASECINFO_H
#define HAVOK_HKPSAMPLEDHEIGHTFIELDBASECINFO_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"

struct hkpSampledHeightFieldBaseCinfo {
    hkVector4 m_scale;                    // +0x00
    int m_xRes;                           // +0x10
    int m_zRes;                           // +0x14
    hkReal m_minHeight;                   // +0x18
    hkReal m_maxHeight;                   // +0x1C
    hkBool m_useProjectionBasedHeight;    // +0x20
};

#endif
