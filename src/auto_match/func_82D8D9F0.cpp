// hkpPhantomOverlapListener scalar deleting destructor. hkpPhantomOverlapListener is an interface with no base class (RTTI) whose two callbacks come first in the vtable (slots 0-1, pure), so the destructor is slot 2; it frees through the global operator delete, fn_8265CA20. The function at the end only makes the compiler emit the vtable, and with it this function.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

struct hkpCollidableAddedEvent;
struct hkpCollidableRemovedEvent;

class hkpPhantomOverlapListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual void collidableAddedCallback(const hkpCollidableAddedEvent &event) = 0;
    virtual void collidableRemovedCallback(const hkpCollidableRemovedEvent &event) = 0;
    virtual ~hkpPhantomOverlapListener() {}
};

void emitVtable_82D8D9F0(hkpPhantomOverlapListener *p) { p->hkpPhantomOverlapListener::~hkpPhantomOverlapListener(); }
