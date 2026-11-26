// hkpEntityListener (Physics/Dynamics/Entity/hkpEntityListener.h): the
// callbacks a world or an entity sends about entities. It has no hkBaseObject
// base, so its deleting destructor frees through the global operator delete,
// fn_8265CA20. Its vtable is the deleting destructor and five callbacks; the
// empty ones are folded into fn_82BA02A8, and entityShapeSetCallback (slot 3)
// is the out-of-line fn_82DB2F50.
#ifndef HAVOK_HKPENTITYLISTENER_H
#define HAVOK_HKPENTITYLISTENER_H

#include "havok/hkBase.h"

class hkpEntity;

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpEntityListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpEntityListener() {}
    virtual void entityAddedCallback(hkpEntity *entity) {}
    virtual void entityRemovedCallback(hkpEntity *entity) {}
    virtual void entityShapeSetCallback(hkpEntity *entity);
    virtual void entitySetMotionTypeCallback(hkpEntity *entity) {}
    virtual void entityDeletedCallback(hkpEntity *entity) {}
};

#endif
