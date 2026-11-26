// hkStackTracer (Common/Base/System/StackTracer/hkStackTracer.h), 8 bytes: hkReferencedObject and the empty
// hkSingleton<hkStackTracer> (RTTI); no members of its own on the Xbox 360. The constructor (82D00DB0) and the
// destructor (82D00DC8) are out of line and empty; the vtable (??_7hkStackTracer@@6B@) has hkReferencedObject's
// three slots. The singleton's storage is lbl_8323B510; its creation function (82D00DD8) has the constructor
// inlined (link-time code generation), so it keeps a local copy with an inline constructor.
#ifndef HAVOK_HKSTACKTRACER_H
#define HAVOK_HKSTACKTRACER_H

#include "havok/hkBase.h"
#include "havok/hkSingleton.h"

class hkStackTracer : public hkReferencedObject, public hkSingleton<hkStackTracer> {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkStackTracer();
    virtual ~hkStackTracer();
};

#endif
