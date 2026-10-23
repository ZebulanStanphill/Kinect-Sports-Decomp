// hkpSimpleShapePhantom::hkpSimpleShapePhantom(hkFinishLoadedObjectFlag)
// (Physics/Dynamics/Phantom/hkpSimpleShapePhantom.h). It keeps its fn_ name
// because a Matching C unit (getVtable fn_82D7FBE0) calls it, so
// the inline constructor is expanded into an
// extern "C" definition with MSVC's explicit constructor call (placement new
// would add a null check). Members not serialised (the listener and
// collision-detail arrays) are default-constructed.
#include "havok/hkBase.h"

class hkpWorldObject;
extern "C" void fn_82D93708(hkpWorldObject *self, hkFinishLoadedObjectFlag flag);   // hkpWorldObject::hkpWorldObject(hkFinishLoadedObjectFlag)

// hkpWorldObject's finish constructor is out of line under its fn_ name (a
// Matching C unit calls it) and builds the whole hkpWorldObject subobject,
// vtable included, so it is modelled as an opaque novtable class reached
// through an inline wrapper.
class __declspec(novtable) hkpWorldObject {
public:
    HK_FORCE_INLINE hkpWorldObject(hkFinishLoadedObjectFlag flag) { fn_82D93708(this, flag); }
    virtual ~hkpWorldObject();

    hkUint8 m_worldObjectData[0x88];   // +0x4: hkReferencedObject and hkpWorldObject members
};

class hkpPhantomOverlapListener;
class hkpPhantomListener;

class hkpPhantom : public hkpWorldObject {
public:
    hkpPhantom(hkFinishLoadedObjectFlag flag) : hkpWorldObject(flag) {}

    hkArray<hkpPhantomOverlapListener *> m_overlapListeners;   // +0x8C
    hkArray<hkpPhantomListener *> m_phantomListeners;          // +0x98
};

class hkpShapePhantom : public hkpPhantom {
public:
    hkpShapePhantom(hkFinishLoadedObjectFlag flag) : hkpPhantom(flag) {}

    hkUint8 m_motionState[0xBC];   // +0xA4: hkMotionState
};

struct hkpSimpleShapePhantomCollisionDetail {
    void *m_collidable;
};

class hkpSimpleShapePhantom : public hkpShapePhantom {
public:
    hkpSimpleShapePhantom(hkFinishLoadedObjectFlag flag) : hkpShapePhantom(flag) {}
    virtual ~hkpSimpleShapePhantom();

    hkArray<hkpSimpleShapePhantomCollisionDetail> m_collisionDetails;   // +0x160
};

extern "C" hkpSimpleShapePhantom *fn_82D7FC10(hkpSimpleShapePhantom *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpSimpleShapePhantom::hkpSimpleShapePhantom(flag);
    return self;
}
