// hkpContactImpulseLimitBreachedListener (Physics/Dynamics/World/Listener/
// hkpContactImpulseLimitBreachedListener.h, the path is Havok's): told about contacts whose impulse went
// over the limit of their entity (hkpBreakOffPartsUtil listens). It has no hkBaseObject base, so its
// deleting destructor frees through the global operator delete, fn_8265CA20. Its vtable
// (??_7hkpContactImpulseLimitBreachedListener@@6B@) is the deleting destructor and one pure function; its
// name and parameters follow Havok's header.
#ifndef HAVOK_HKPCONTACTIMPULSELIMITBREACHEDLISTENER_H
#define HAVOK_HKPCONTACTIMPULSELIMITBREACHEDLISTENER_H

#include "havok/hkBase.h"

struct hkpContactImpulseLimitBreachedListenerInfo;

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpContactImpulseLimitBreachedListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpContactImpulseLimitBreachedListener() {}
    virtual void contactImpulseLimitBreachedCallback(const hkpContactImpulseLimitBreachedListenerInfo *breachedContacts,
                                                     int numBreachedContacts) = 0;
};

#endif
