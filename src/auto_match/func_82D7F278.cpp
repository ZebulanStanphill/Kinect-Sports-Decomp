// getVtablehkpLinearParametricCurve, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpLinearParametricCurve (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpLinearParametricCurve -> hkpParametricCurve -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpParametricCurve : public hkReferencedObject {
public:
    hkpParametricCurve(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpLinearParametricCurve : public hkpParametricCurve {
public:
    hkpLinearParametricCurve(hkFinishLoadedObjectFlag flag) : hkpParametricCurve(flag) {}
};

const void *HK_CALL getVtablehkpLinearParametricCurve()
{
    union {
        void *ptr;
        char buf[sizeof(hkpLinearParametricCurve)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpLinearParametricCurve(f);
    return u.ptr;
}
