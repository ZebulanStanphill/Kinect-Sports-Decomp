// hkpPhantomListener (Physics/Dynamics/Phantom/hkpPhantomListener.h): the callbacks a world or a phantom sends
// about phantoms. It has no hkBaseObject base, so its deleting destructor (82DB08E0) frees through the global
// operator delete, fn_8265CA20. Its vtable (??_7hkpPhantomListener@@6B@, 5 slots) is the deleting destructor and
// four callbacks; the empty ones are folded into fn_82BA02A8, and phantomShapeSetCallback (slot 3) is the
// out-of-line fn_82DB2F50 (the function hkpEntityListener's entityShapeSetCallback is folded with). The names
// and parameters follow Havok's header.
#ifndef HAVOK_HKPPHANTOMLISTENER_H
#define HAVOK_HKPPHANTOMLISTENER_H

#include "havok/hkBase.h"

class hkpPhantom;

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpPhantomListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpPhantomListener() {}
    virtual void phantomAddedCallback(hkpPhantom *phantom) {}      // +0x4
    virtual void phantomRemovedCallback(hkpPhantom *phantom) {}    // +0x8
    virtual void phantomShapeSetCallback(hkpPhantom *phantom);     // +0xC
    virtual void phantomDeletedCallback(hkpPhantom *phantom) {}    // +0x10
};

#endif
