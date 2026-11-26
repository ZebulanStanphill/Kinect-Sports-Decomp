#ifndef HAVOK_HKMULTITHREADCHECK_H
#define HAVOK_HKMULTITHREADCHECK_H

#include "havok/hkBaseTypes.h"

// hkMultiThreadCheck (Common/Base/DebugUtil/MultiThreadCheck/hkMultiThreadCheck.h),
// 8 bytes. This constructor stores the thread id before the mark count; some
// units keep a copy of the class whose constructor stores them the other way
// round, so both orders occur in the game.
struct hkMultiThreadCheck;
extern "C" void fn_82CEFB20(hkMultiThreadCheck *self);   // hkMultiThreadCheck::disableChecks

struct hkMultiThreadCheck {
    enum { UNMARKED = 0xffffffd1 };
    hkMultiThreadCheck() : m_threadId(UNMARKED), m_markCount(0) {}
    void disableChecks() { fn_82CEFB20(this); }   // sets m_threadId to UNMARKED

    hkUint32 m_threadId;       // +0x0
    hkUint16 m_markCount;      // +0x4
    hkUint16 m_markBitStack;   // +0x6
};

#endif
