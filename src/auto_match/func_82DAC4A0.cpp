#include "havok/hkBase.h"
class hkpWorld; class hkpRigidBody;
class hkpSimpleConstraintContactMgr : public hkReferencedObject { public:
 char pad[0x78]; hkpSimpleConstraintContactMgr(hkpWorld *,hkpRigidBody *,hkpRigidBody *);
};
struct Body {char pad[0x10]; signed char offset;};
struct Factory {char pad[8];hkpWorld *world;};
extern "C" void fn_82DAC4A0(Factory *self, Body *a, Body *b) {
 hkpRigidBody *aa=(hkpRigidBody *)((char *)a+a->offset);
 hkpRigidBody *bb=(hkpRigidBody *)((char *)b+b->offset);
 new hkpSimpleConstraintContactMgr(self->world,aa,bb);
}
