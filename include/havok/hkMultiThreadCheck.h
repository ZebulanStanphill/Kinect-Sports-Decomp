#ifndef HAVOK_HKMULTITHREADCHECK_H
#define HAVOK_HKMULTITHREADCHECK_H

#include "havok/hkBaseTypes.h"

// hkMultiThreadCheck (Common/Base/DebugUtil/MultiThreadCheck/hkMultiThreadCheck.h).
struct hkMultiThreadCheck {
    enum { UNMARKED = 0xffffffd1 };
    hkMultiThreadCheck() : m_threadId(UNMARKED), m_stackTraceId(0) {}
    hkUint32 m_threadId;      // +0x0
    hkUint16 m_stackTraceId;  // +0x4
    hkUint16 m_markCount;     // +0x6
};

#endif
