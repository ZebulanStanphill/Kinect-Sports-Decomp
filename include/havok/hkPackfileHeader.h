// hkPackfileHeader (Common/Serialize/Packfile/Binary/hkPackfileHeader.h), 0x40 bytes, no vtable: the header
// at the start of a binary packfile. The layout is the game's reflection data: hkPackfileHeaderClass
// (fn_83138400, lbl_8323FCDC: size 0x40, member list lbl_8214A240) gives the members' names, types and
// offsets.
#ifndef HAVOK_HKPACKFILEHEADER_H
#define HAVOK_HKPACKFILEHEADER_H

#include "havok/hkBaseTypes.h"

struct hkPackfileHeader {
    hkInt32 m_magic[2];                         // +0x0
    hkInt32 m_userTag;                          // +0x8
    hkInt32 m_fileVersion;                      // +0xC
    hkUint8 m_layoutRules[4];                   // +0x10 hkStructureLayout::LayoutRules
    hkInt32 m_numSections;                      // +0x14
    hkInt32 m_contentsSectionIndex;             // +0x18
    hkInt32 m_contentsSectionOffset;            // +0x1C
    hkInt32 m_contentsClassNameSectionIndex;    // +0x20
    hkInt32 m_contentsClassNameSectionOffset;   // +0x24
    char m_contentsVersion[16];                 // +0x28
    hkInt32 m_pad[2];                           // +0x38
};

#endif
