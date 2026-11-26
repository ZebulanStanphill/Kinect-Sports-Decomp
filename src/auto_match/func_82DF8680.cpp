// The scalar deleting destructor of hkEntitySelectorListed, a class in an anonymous namespace of
// hkpSaveContactPointsUtil.cpp (RTTI: hkEntitySelectorListed@?A0xe0d5b647 -> hkpSaveContactPointsUtil::EntitySelector).
// Its real name contains the anonymous namespace's hash, which a recompile cannot reproduce, so it keeps its fn_
// name and is written out as the compiler generates it: the implicit destructor (the pointer map at +0x4, then
// EntitySelector's vtable store), then the global operator delete (EntitySelector has no base and no allocator).
#include "havok/hkBase.h"
#include "havok/hkpSaveContactPointsUtil.h"

namespace {
class hkEntitySelectorListed : public hkpSaveContactPointsUtil::EntitySelector {
public:
    virtual hkBool32 isEntityOk(const hkpEntity *entity);

    hkPointerMap<const hkpEntity *, int> m_entities;   // +0x4
};
}

extern "C" void *fn_82DF8680(void *p, unsigned int flags)
{
    hkEntitySelectorListed *self = static_cast<hkEntitySelectorListed *>(p);
    self->hkEntitySelectorListed::~hkEntitySelectorListed();
    if (flags & 1)
        hkEntitySelectorListed::operator delete(self);
    return self;
}
