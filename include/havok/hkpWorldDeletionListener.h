// hkpWorldDeletionListener (Physics/Dynamics/World/Listener/hkpWorldDeletionListener.h).
// It has no hkBaseObject base: its deleting destructor frees through the
// global operator delete, fn_8265CA20.
#ifndef HAVOK_HKPWORLDDELETIONLISTENER_H
#define HAVOK_HKPWORLDDELETIONLISTENER_H

#include "havok/hkBase.h"

class hkpWorld;

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpWorldDeletionListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpWorldDeletionListener() {}
    virtual void worldDeletedCallback(hkpWorld *world) = 0;
    virtual void worldRemovedCallback(hkpWorld *world) {}
};

#endif
