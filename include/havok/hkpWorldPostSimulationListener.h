// hkpWorldPostSimulationListener (Physics/Dynamics/World/Listener/hkpWorldPostSimulationListener.h): called by
// the world after each simulation step. It has no hkBaseObject base, so its deleting destructor frees through
// the global operator delete, fn_8265CA20. Its vtable (??_7hkpWorldPostSimulationListener@@6B@) is the
// deleting destructor, the pure postSimulationCallback and inactiveEntityMovedCallback, whose empty default is
// folded into fn_82BA02A8. The names of the callbacks follow Havok's header.
#ifndef HAVOK_HKPWORLDPOSTSIMULATIONLISTENER_H
#define HAVOK_HKPWORLDPOSTSIMULATIONLISTENER_H

#include "havok/hkBase.h"

class hkpEntity;
class hkpWorld;

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpWorldPostSimulationListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpWorldPostSimulationListener() {}
    virtual void postSimulationCallback(hkpWorld *world) = 0;
    virtual void inactiveEntityMovedCallback(hkpEntity *entity) {}
};

#endif
