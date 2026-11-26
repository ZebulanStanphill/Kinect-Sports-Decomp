// hkpConstraintListener (Physics/Dynamics/Constraint/hkpConstraintListener.h):
// the callbacks a world or a constraint owner sends about its constraints.
// Like the collision filter interfaces it has no hkBaseObject base, so its
// deleting destructor frees through the global operator delete, fn_8265CA20.
// Its vtable is the deleting destructor and five callbacks whose empty default
// implementations are folded into fn_82BA02A8.
#ifndef HAVOK_HKPCONSTRAINTLISTENER_H
#define HAVOK_HKPCONSTRAINTLISTENER_H

#include "havok/hkBase.h"

class hkpConstraintInstance;
struct hkpConstraintBrokenEvent;
struct hkpConstraintRepairedEvent;

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpConstraintListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpConstraintListener() {}
    virtual void constraintAddedCallback(hkpConstraintInstance *constraint) {}
    virtual void constraintRemovedCallback(hkpConstraintInstance *constraint) {}
    virtual void constraintDeletedCallback(hkpConstraintInstance *constraint) {}
    virtual void constraintBreakingCallback(const hkpConstraintBrokenEvent &event) {}
    virtual void constraintRepairedCallback(const hkpConstraintRepairedEvent &event) {}
};

#endif
