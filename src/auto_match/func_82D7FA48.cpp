// finishLoadedObjecthkpRigidBody: the finish function in hkpRigidBody's
// hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL). hkpRigidBody's finish constructor
// is inline: it runs hkpEntity's (out of line, fn_82D8ABB0) and then stores
// hkpRigidBody's vtable. fn_82D8ABB0 keeps its fn_ name because a Matching C
// unit (getVtablehkpEntity, func_82D7ED78) calls it, so it is called by name
// here and the inline part is a placement new whose base finish constructors
// only store (dead) vtables.
#include "havok/hkBase.h"

class hkpEntity;
extern "C" void fn_82D8ABB0(hkpEntity *self, hkFinishLoadedObjectFlag flag);   // hkpEntity::hkpEntity(flag)

class hkpWorldObject : public hkReferencedObject {
public:
    hkpWorldObject(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpEntity : public hkpWorldObject {
public:
    hkpEntity(hkFinishLoadedObjectFlag flag) : hkpWorldObject(flag) {}
};

class hkpRigidBody : public hkpEntity {
public:
    hkpRigidBody(hkFinishLoadedObjectFlag flag) : hkpEntity(flag) {}
};

void HK_CALL finishLoadedObjecthkpRigidBody(void *p, int finishing)
{
    if (p) {
        hkFinishLoadedObjectFlag f;
        f.m_finishing = finishing;
        fn_82D8ABB0(static_cast<hkpEntity *>(p), f);
        new (p) hkpRigidBody(f);
    }
}
