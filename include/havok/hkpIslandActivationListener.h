// hkpIslandActivationListener (Physics/Dynamics/World/Listener/hkpIslandActivationListener.h): told when a
// simulation island is activated or deactivated. It has no hkBaseObject base, so its deleting destructor
// frees through the global operator delete, fn_8265CA20. Its vtable (??_7hkpIslandActivationListener@@6B@)
// is the deleting destructor and two pure functions; their names follow Havok's header.
#ifndef HAVOK_HKPISLANDACTIVATIONLISTENER_H
#define HAVOK_HKPISLANDACTIVATIONLISTENER_H

#include "havok/hkBase.h"

class hkpSimulationIsland;

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpIslandActivationListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpIslandActivationListener() {}
    virtual void islandActivatedCallback(hkpSimulationIsland *island) = 0;     // +0x4
    virtual void islandDeactivatedCallback(hkpSimulationIsland *island) = 0;   // +0x8
};

#endif
