// hkMonitorStreamColorTable (Common/Base/Monitor/MonitorStreamAnalyzer/hkMonitorStreamAnalyzer.h), 0x18 bytes, and
// its ColorPair (8 bytes): the colours the monitor viewer gives named timers. The sizes are the reflection's
// (8312B048 registers "hkMonitorStreamColorTable" with 0x18 bytes and two members, 8312AFD8
// "hkMonitorStreamColorTableColorPair" with 8). The destructor is the implicit one, out of line in the game
// (82CE4880 destroys m_colorPairs) because the deleting destructor (82CE49A8) calls it. The member names follow
// Havok's header.
#ifndef HAVOK_HKMONITORSTREAMCOLORTABLE_H
#define HAVOK_HKMONITORSTREAMCOLORTABLE_H

#include "havok/hkBase.h"

class hkMonitorStreamColorTable : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    struct ColorPair {
        hkStringPtr m_colorName;   // +0x0
        hkUint32 m_color;          // +0x4
    };
    hkMonitorStreamColorTable(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag), m_colorPairs(flag) {}

    hkArray<ColorPair> m_colorPairs;   // +0x8
    hkUint32 m_defaultColor;           // +0x14
};

#endif
