// hkpPhantomCallbackShape (Physics/Collide/Shape/Misc/PhantomCallback/hkpPhantomCallbackShape.h), 0x10 bytes: a
// shape that reports the collidables entering and leaving it instead of colliding. The size and the absence of
// members are the game's hkClass (initialiser 8312F678); the game has no vtable or RTTI for the class itself (it
// is abstract), and its type is HK_SHAPE_PHANTOM_CALLBACK.
//
// hkpPhantomAgent's creation function (82D6A888) calls phantomEnterEvent at +0x2C, the first slot after
// hkpShape's; phantomLeaveEvent (+0x30) follows Havok's header and is not checked. Both are pure in Havok and
// declared as plain virtuals here.
#ifndef HAVOK_HKPPHANTOMCALLBACKSHAPE_H
#define HAVOK_HKPPHANTOMCALLBACKSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkpShape.h"

class hkpCollidable;
struct hkpCollisionInput;

class hkpPhantomCallbackShape : public hkpShape {
public:
    virtual void phantomEnterEvent(const hkpCollidable *collidableA, const hkpCollidable *collidableB,
                                   const hkpCollisionInput &env);   // +0x2C
    virtual void phantomLeaveEvent(const hkpCollidable *collidableA, const hkpCollidable *collidableB);   // +0x30
};

#endif
