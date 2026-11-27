// Removes an object from the world as world-deletion and world-post-simulation listener, then releases it. The
// object is a referenced object with the two listener bases at +0x8 and +0xC and the world at +0x10; the
// function gets the address of the listener part. It keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"

struct ListenerA_82D8DAD0 {
    void *vt;
    int pad;
};
struct ListenerB_82D8DAD0 {
    void *vt;
};
struct Body_82D8DAD0 {
    ListenerA_82D8DAD0 a;
    ListenerB_82D8DAD0 b;
    hkpWorld *world;
};

static __forceinline hkReferencedObject *Outer(Body_82D8DAD0 *body)
{
    return (hkReferencedObject *)((char *)body - 8);
}

extern "C" void fn_82D8DAD0(Body_82D8DAD0 *self)
{
    self->world->removeWorldDeletionListener(Outer(self) != 0 ? (hkpWorldDeletionListener *)&self->a : 0);
    self->world->removeWorldPostSimulationListener(Outer(self) != 0 ? (hkpWorldPostSimulationListener *)&self->b : 0);
    fn_82CE4118(Outer(self));
}
