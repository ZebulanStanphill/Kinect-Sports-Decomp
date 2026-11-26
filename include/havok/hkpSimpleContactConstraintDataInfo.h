// hkpSimpleContactConstraintDataInfo (its Havok path is not known from the game),
// 0x20 bytes, 16-byte aligned: the contact constraint's solver data, kept in its atom (+0x10).
// Only m_flags (+0x0) and m_index (+0x2) are named by the game's code; the seven words after them are not
// told apart (Havok keeps rolling friction and contact radius data there). The constructor, inline in
// hkpSerializedAgentNnEntry's (82DF86E0) and the contact atom utility's (82DF7640), clears m_flags, sets
// m_index to 3 and zeroes the seven words in a loop.
#ifndef HAVOK_HKPSIMPLECONTACTCONSTRAINTDATAINFO_H
#define HAVOK_HKPSIMPLECONTACTCONSTRAINTDATAINFO_H

#include "havok/hkBase.h"

class __declspec(align(16)) hkpSimpleContactConstraintDataInfo {
public:
    HK_FORCE_INLINE hkpSimpleContactConstraintDataInfo() { init(); }
    // The finish constructor leaves the loaded data alone (Havok's header).
    HK_FORCE_INLINE hkpSimpleContactConstraintDataInfo(hkFinishLoadedObjectFlag f) {}
    HK_FORCE_INLINE void init()
    {
        m_flags = 0;
        m_index = 3;
        for (int i = 0; i < 7; ++i)
            m_data[i] = 0;
    }

    hkUint16 m_flags;     // +0x0
    hkUint16 m_index;     // +0x2
    hkUint32 m_data[7];   // +0x4
};

#endif
