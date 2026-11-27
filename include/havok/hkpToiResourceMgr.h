// hkpToiResourceMgr (Physics/Dynamics/World/Simulation/Continuous/ToiResourceMgr/hkpToiResourceMgr.h): the
// interface that hands the continuous simulation the memory and the limits for solving a time of impact.
// hkpDefaultToiResourceMgr (0x10 bytes, constructor fn_82DDE130) is the only implementation the game has; its
// vtable (??_7hkpDefaultToiResourceMgr@@6B@, 82142D08) places the four functions:
//   +0x0C beginToiAndSetupResources  82DDE150: allocates the scratchpad from the solver allocator and fills
//                                    the eight words of its third argument (the limits, the scratchpad and
//                                    its size); returns 0
//   +0x10 cannotSolve                82DDE128 returns 0
//   +0x14 resourcesDepleted          82DDE120 returns 1
//   +0x18 endToiAndFreeResources     82DDE1E0: frees the scratchpad (the seventh word of its third argument)
// The first and last are identified by what they do. The two between only return a constant; Havok's header
// has cannotSolve and resourcesDepleted there, in this order, both returning an hkpToiResourceMgrResponse.
// Which of the two is which is not checked against a caller, and the response's enumerators are not known,
// so they return an int here. The names and the parameter types are Havok's (the game shows three arguments
// for the first and the last); which are pure is from Havok's header.
#ifndef HAVOK_HKPTOIRESOURCEMGR_H
#define HAVOK_HKPTOIRESOURCEMGR_H

#include "havok/hkBase.h"

struct hkpToiEvent;
struct hkpToiResources;

class hkpToiResourceMgr : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    struct ConstraintViolationInfo;

    hkpToiResourceMgr() {}

    virtual hkResult beginToiAndSetupResources(const hkpToiEvent &event, const hkArray<hkpToiEvent> &otherEvents,
                                               hkpToiResources &resourcesOut) = 0;                   // +0xC
    virtual int cannotSolve(hkArray<ConstraintViolationInfo> &violatedConstraints) = 0;              // +0x10
    virtual int resourcesDepleted() = 0;                                                             // +0x14
    virtual void endToiAndFreeResources(const hkpToiEvent &event, const hkArray<hkpToiEvent> &otherEvents,
                                        const hkpToiResources &resources) = 0;                       // +0x18
};

#endif
