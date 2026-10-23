// hkMonitorStreamColorTable::~hkMonitorStreamColorTable, the implicit destructor (Common/Base/Monitor/MonitorStreamAnalyzer?): destroys m_colorPairs (each element's hkStringPtr, first to last). Emitted out of line because the deleting destructor (fn_82CE49A8) calls it; the finish constructor at the end only makes the compiler emit the vtable.
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

void emitVtable_82CE4880(void *p, hkFinishLoadedObjectFlag f) { new (p) hkMonitorStreamColorTable(f); }
