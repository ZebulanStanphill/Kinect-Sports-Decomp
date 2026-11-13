// Collidable-added callback on the listener interface at +0xC of an hkReferencedObject subclass:
// for a broadphase entity owner, either push it onto the pending array (+addReference) or hand it
// to the object's own first virtual. Havok code, /O2.
#include "havok/hkBase.h"
#include "havok/hkReferencedObject.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *, void *, int);

template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }

class Entities_82D8DCF0 : public hkArrayBase<hkReferencedObject *> {
public:
    HK_FORCE_INLINE void pushBack(hkReferencedObject *const &v)
    {
        hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
        if (m_size == getCapacity()) fn_82CE63B0(&alloc, this, sizeof(hkReferencedObject *));
        constructWithCopy(m_data + m_size, 1, v);
        m_size++;
    }
};

struct Collidable_82D8DCF0 {
    char pad0[0x10];
    hkInt8 m_ownerOffset;     // +0x10
    char pad11[7];
    hkUint8 m_type;           // +0x18 broadphase handle type (1 = entity)
    HK_FORCE_INLINE void *getOwner() const { return (char *)this + m_ownerOffset; }
};

struct Event_82D8DCF0 {
    int pad0;
    Collidable_82D8DCF0 *m_collidable;   // +0x4
};

class ListenerA_82D8DCF0 { public: virtual void a0(); };
class ListenerB_82D8DCF0 { public: virtual void b0(); };

class Owner_82D8DCF0 : public hkReferencedObject, public ListenerA_82D8DCF0 {
public:
    virtual void v0c(hkReferencedObject *entity);
};

// The owner seen from its listener interface at +0xC (the callback's this).
struct Listener_82D8DCF0 : public ListenerB_82D8DCF0 {
    char pad4[0x24];
    hkBool m_deferred;                   // +0x28 (owner +0x34)
    Entities_82D8DCF0 m_pending;         // +0x2C (owner +0x38)
    HK_FORCE_INLINE Owner_82D8DCF0 *getOwner() { return (Owner_82D8DCF0 *)((char *)this - 0xc); }
};

static HK_FORCE_INLINE hkReferencedObject *getEntity(const Collidable_82D8DCF0 *c)
{
    if (c->m_type == 1) return (hkReferencedObject *)c->getOwner();
    return HK_NULL;
}

extern "C" void fn_82D8DCF0(Listener_82D8DCF0 *self, const Event_82D8DCF0 &event)
{
    hkReferencedObject *entity = getEntity(event.m_collidable);
    if (entity) {
        if (self->m_deferred) {
            self->m_pending.pushBack(entity);
            entity->addReference();
        } else {
            self->getOwner()->v0c(entity);
        }
    }
}
