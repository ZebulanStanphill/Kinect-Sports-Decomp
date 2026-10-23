#include "havok/hkBase.h"
class hkpConstraintInstance : public hkReferencedObject {
public:
    hkpConstraintInstance(hkFinishLoadedObjectFlag f):hkReferencedObject(f) {}
};
class hkpConstraintChainInstance : public hkpConstraintInstance {
public:
    hkpConstraintChainInstance(hkFinishLoadedObjectFlag f):hkpConstraintInstance(f) {}
};
template <class T> static const void *getVtable()
{
    union { const void *vtable; char storage[sizeof(T)]; } u;
    hkFinishLoadedObjectFlag f;
    new (u.storage) T(f);
    return u.vtable;
}
struct SmallArray { void *data; short size,capacity; };
struct ConstraintLayout {
    const void *vtable;
    char pad[0x1C];
    SmallArray array;
    hkStringPtr name;
    int userData;
    void *chainData;
    int capacityAndFlags;
};
extern "C" ConstraintLayout *fn_82D7E9A8(ConstraintLayout *self,hkFinishLoadedObjectFlag f)
{
    self->vtable=getVtable<hkpConstraintInstance>();
    SmallArray *a=&self->array;
    a->data=0;
    a->size=0;
    a->capacity=-32768;
    fn_82CED308(&self->name,f);
    self->capacityAndFlags=-16;
    self->vtable=getVtable<hkpConstraintChainInstance>();
    return self;
}
