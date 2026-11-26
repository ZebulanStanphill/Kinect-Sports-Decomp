// hkPackfileSectionHeader (Common/Serialize/Packfile/Binary/hkPackfileSectionHeader.h), 0x30 bytes, no vtable:
// one section's header in a binary packfile; the offsets are relative to the section's data. The layout is
// the game's reflection data: hkPackfileSectionHeaderClass (fn_83138470, lbl_8323FD0C: size 0x30, member list
// lbl_8214A3F0). The size accessors are inline: the units' code computes them from neighbouring offsets
// (the data ends where the local fixups begin, each fixup table where the next begins); their names follow
// Havok's header.
#ifndef HAVOK_HKPACKFILESECTIONHEADER_H
#define HAVOK_HKPACKFILESECTIONHEADER_H

#include "havok/hkBaseTypes.h"

struct hkPackfileSectionHeader {
    HK_FORCE_INLINE int getDataSize() const { return m_localFixupsOffset; }
    HK_FORCE_INLINE int getLocalSize() const { return m_globalFixupsOffset - m_localFixupsOffset; }
    HK_FORCE_INLINE int getGlobalSize() const { return m_virtualFixupsOffset - m_globalFixupsOffset; }
    HK_FORCE_INLINE int getFinishSize() const { return m_exportsOffset - m_virtualFixupsOffset; }
    HK_FORCE_INLINE int getExportsSize() const { return m_importsOffset - m_exportsOffset; }
    HK_FORCE_INLINE int getImportsSize() const { return m_endOffset - m_importsOffset; }

    char m_sectionTag[19];          // +0x0
    char m_nullByte;                // +0x13
    hkInt32 m_absoluteDataStart;    // +0x14
    hkInt32 m_localFixupsOffset;    // +0x18
    hkInt32 m_globalFixupsOffset;   // +0x1C
    hkInt32 m_virtualFixupsOffset;  // +0x20
    hkInt32 m_exportsOffset;        // +0x24
    hkInt32 m_importsOffset;        // +0x28
    hkInt32 m_endOffset;            // +0x2C
};

#endif
