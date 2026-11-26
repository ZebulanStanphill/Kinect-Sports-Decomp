// hkMonitorStream (Common/Base/Monitor/hkMonitorStream.h): the per-thread stream of timer commands. Each thread's
// stream is in the TLS slot lbl_8323B4A0 (82DC39A0 and the agents' timer code read it with KeTlsGetValue).
// The four buffer pointers are the members the timer code is seen to use: a timer writes a command at m_end
// when m_end is below m_capacityMinus16 and moves m_end past it (12 bytes for a TimerCommand, 16 for a
// TimerBeginListCommand, whose split name is at +0xC; 82D5B3B0, 82DB0C38). The command struct names and the
// member names follow Havok's header; members after +0x10 are not known. Havok derives the command structs from
// each other; here they are separate structs, because a derived TimerCommand changes the code 82DC39A0's timer
// macro compiles to.
#ifndef HAVOK_HKMONITORSTREAM_H
#define HAVOK_HKMONITORSTREAM_H

#include "havok/hkBaseTypes.h"

extern "C" {
void *KeTlsGetValue(unsigned int index);
extern unsigned int lbl_8323B4A0;   // hkMonitorStream's TLS slot
}

class hkMonitorStream {
public:
    struct Command {
        const char *m_commandAndMonitor;   // +0x0
    };
    struct TimerCommand {
        const char *m_commandAndMonitor;   // +0x0
        hkUint32 m_time0;                  // +0x4: the time base's low word
        hkUint32 m_time1;                  // +0x8
    };
    struct TimerBeginListCommand {
        const char *m_commandAndMonitor;   // +0x0
        hkUint32 m_time0;                  // +0x4
        hkUint32 m_time1;                  // +0x8
        const char *m_nameOfFirstSplit;    // +0xC
    };

    static HK_FORCE_INLINE hkMonitorStream &HK_CALL getInstance()
    {
        return *static_cast<hkMonitorStream *>(KeTlsGetValue(lbl_8323B4A0));
    }

    char *m_start;              // +0x0
    char *m_end;                // +0x4: where the next command goes
    char *m_capacity;           // +0x8
    char *m_capacityMinus16;    // +0xC: a command fits while m_end is below it
};

#endif
