// hkpWorldPostSimulationListener scalar deleting destructor. hkpWorldPostSimulationListener is an interface with no base
// class (RTTI), so it frees through the global operator delete, fn_8265CA20.
// The function at the end only makes the compiler emit the vtable, and
// with it this function.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpWorldPostSimulationListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpWorldPostSimulationListener() {}
};

void emitVtable_82D8DA80(hkpWorldPostSimulationListener *p) { p->hkpWorldPostSimulationListener::~hkpWorldPostSimulationListener(); }
