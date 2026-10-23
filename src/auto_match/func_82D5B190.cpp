// hkConvexListAgent3's statistics function (Physics/Collide/Agent3/ConvexList/hkpConvexListAgent3.cpp), the
// eighth entry of its Agent3Funcs table (stored by fn_82D5B820, so it keeps its fn_ name): unless the agent
// is in its convex (non-list) mode, it reports the child agent track (fn_82D71668) inside a
// "hkConvexListAgent3" directory of the hkStatisticsCollector. The collector calls are C++ virtual calls
// (vtable loaded before the arguments are set up).
#include "havok/hkBase.h"

class hkStatisticsCollector {
public:
    virtual ~hkStatisticsCollector();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void pushDir(const char *dirName);   // +0x18
    virtual void popDir();                       // +0x1c
};

struct hkpAgentEntry;
struct hkpAgent1nTrack;

struct hkConvexListAgent3Data {
    hkUint8 m_pad0[0xb];
    hkUint8 m_flags;            // +0xb (0x20: in convex mode)
    hkUint8 m_pad0c[0x10 - 0xc];
    hkUint8 m_agentTrack[1];    // +0x10
};

extern "C" {
void fn_82D71668(void *track, const void *dispatcher, hkStatisticsCollector *collector);   // hkAgent1nMachine statistics
}

extern "C" void fn_82D5B190(hkpAgentEntry *entry, hkConvexListAgent3Data *data, const void *dispatcher,
                            hkStatisticsCollector *collector)
{
    if ((data->m_flags & 0x20) == 0) {
        collector->pushDir("hkConvexListAgent3");
        fn_82D71668(data->m_agentTrack, dispatcher, collector);
        collector->popDir();
    }
}
