// hkStructureLayout (Common/Serialize/Util/hkStructureLayout.h; the game has ".\Util\hkStructureLayout.cpp"):
// computes member offsets for a target platform. Only its LayoutRules are used: 4 bytes (hkPackfileHeader
// keeps them as hkUint8[4] at +0x10), copied member by member where hkObjectCopier's constructor (82E17F40)
// copies them. The member names and their order follow Havok's header; m_littleEndian is the byte that
// constructor compares. The host's rules are lbl_83187414 (hkStructureLayout::HostLayoutRules).
//
// The copy from HostLayoutRules is out of line in one place (fn_82E19DB0, called by 82E0F818); that unit keeps
// its own form of LayoutRules.
#ifndef HAVOK_HKSTRUCTURELAYOUT_H
#define HAVOK_HKSTRUCTURELAYOUT_H

#include "havok/hkBaseTypes.h"

class hkStructureLayout {
public:
    struct LayoutRules {
        hkUint8 m_bytesInPointer;               // +0x0
        hkUint8 m_littleEndian;                 // +0x1
        hkUint8 m_reusePaddingOptimization;     // +0x2
        hkUint8 m_emptyBaseClassOptimization;   // +0x3
    };
};

#endif
