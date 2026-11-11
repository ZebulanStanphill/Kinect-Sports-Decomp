// hkpLinkedCollidable::~hkpLinkedCollidable(): only m_collisionEntries
// (hkArray<CollisionEntry>, 8-byte elements, at 0x50) has a non-trivial
// destructor; the hkpCollidable base part is left out (trivially destroyed).
#include "havok/hkBase.h"

class hkpLinkedCollidable {
public:
    struct CollisionEntry {
        void *m_agentEntry;
        hkpLinkedCollidable *m_partner;
    };

    ~hkpLinkedCollidable();

    char m_collidable[0x50];   // hkpCollidable base
    hkArray<CollisionEntry> m_collisionEntries;
};

hkpLinkedCollidable::~hkpLinkedCollidable()
{
}
