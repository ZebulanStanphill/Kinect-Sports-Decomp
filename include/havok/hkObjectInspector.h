// hkObjectInspector (Common/Serialize/Util/hkObjectInspector.h): walks the pointers of a reflected object.
// Only its nested listener interface and walkPointers are used.
//
// hkObjectInspector::ObjectListener: a root interface (RTTI: no bases) with an empty user-written destructor;
// deleting one uses the global operator delete (fn_8265CA20). ??_7ObjectListener@hkObjectInspector@@6B@
// (8214A688) has the scalar deleting destructor (82E09C18) and the pure objectCallback. The listeners in the
// units declare objectCallback with an untyped third argument (Havok's is the array of contained pointers to
// fill) and an int result (hkResult).
#ifndef HAVOK_HKOBJECTINSPECTOR_H
#define HAVOK_HKOBJECTINSPECTOR_H

#include "havok/hkBase.h"

class hkObjectInspector {
public:
    class ObjectListener {
    public:
        static void operator delete(void *p) { fn_8265CA20(p); }
        virtual ~ObjectListener() {}
        virtual int objectCallback(const void *objP, const hkClass &klass, void *containedPointers) = 0;   // +0x4
    };
};

// hkObjectInspector::walkPointers (static): calls the listener for the object and, recursively, for every
// object it points to.
extern "C" void fn_82E17B38(const void *object, const hkClass *klass, hkObjectInspector::ObjectListener *listener);

#endif
