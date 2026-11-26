// hkpLinkedCollidable::~hkpLinkedCollidable(): only m_collisionEntries
// (hkArray<CollisionEntry>, 8-byte elements, at 0x50) has a non-trivial
// destructor; the hkpCollidable base part is left out (trivially destroyed).
#include "havok/hkBase.h"
#include "havok/hkpLinkedCollidable.h"

hkpLinkedCollidable::~hkpLinkedCollidable()
{
}
