// hkCriticalSection and hkCriticalSectionLock (Common/Base/Thread/CriticalSection/hkCriticalSection.h).
// hkCriticalSection is 0x1C bytes: on Xbox 360 it is one RTL_CRITICAL_SECTION. The constructor is out of
// line and keeps its fn_ name (fn_82CEFBD0, a C unit: it calls RtlInitializeCriticalSectionAndSpinCount and
// returns the section); enter and leave are inline calls of RtlEnterCriticalSection and
// RtlLeaveCriticalSection. The game imports no RtlDeleteCriticalSection: the destructor is inline and empty, but
// it is user-declared, so a delete of a section checks for null first (82DEA960). Members embed it at their real offsets (hkLargeBlockAllocator +0x4, hkpContinuousSimulation
// +0x100); others hold it by pointer and create it with new (82DEA840 news one with spin count 1). The class
// allocator is the non-virtual one (82DEA840, 82DE3A68).
#ifndef HAVOK_HKCRITICALSECTION_H
#define HAVOK_HKCRITICALSECTION_H

#include "havok/hkBase.h"

class hkCriticalSection;

extern "C" {
hkCriticalSection *fn_82CEFBD0(void *self, int spinCount);   // hkCriticalSection::hkCriticalSection(int)
void RtlEnterCriticalSection(void *cs);
void RtlLeaveCriticalSection(void *cs);
}

class hkCriticalSection {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE, hkCriticalSection);
    HK_FORCE_INLINE hkCriticalSection(int spinCount = 0) { fn_82CEFBD0(this, spinCount); }
    HK_FORCE_INLINE ~hkCriticalSection() {}
    HK_FORCE_INLINE void enter() { RtlEnterCriticalSection(this); }
    HK_FORCE_INLINE void leave() { RtlLeaveCriticalSection(this); }

    hkUint8 m_section[0x1C];   // +0x0: the RTL_CRITICAL_SECTION
};

// Enters the section in its constructor and leaves it in its destructor (82CF9730's setMemorySoftLimit,
// 82DC39A0's TOI queue).
class hkCriticalSectionLock {
public:
    HK_FORCE_INLINE hkCriticalSectionLock(hkCriticalSection *section) : m_section(section) { m_section->enter(); }
    HK_FORCE_INLINE ~hkCriticalSectionLock() { m_section->leave(); }

    hkCriticalSection *m_section;   // +0x0
};

#endif
