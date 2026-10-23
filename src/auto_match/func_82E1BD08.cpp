// hkBindingClassNameRegistry::~hkBindingClassNameRegistry()
// (Common/Serialize/Util/hkBindingClassNameRegistry.h): stores the class's
// vtable, destroys the two string maps (+0x3C, +0x2C; hkCachedHashMap's
// destructor fn_82D003F0) and the list at +0x20 (fn_82E1BB60), then runs the
// base destructor ~hkChainedClassNameRegistry, which is out of line
// (fn_82E17470). All three keep their fn_ names (Matching units call them,
// among them the deleting destructor fn_82E1BE88, which inlines this one), so
// the base and the members are opaque here and the destructor calls them by
// name in destruction order. Layout as in func_82E1BC40.cpp.
#include "havok/hkBase.h"

extern "C" {
void fn_82E17470(void *self);   // hkChainedClassNameRegistry::~hkChainedClassNameRegistry
void fn_82E1BB60(void *self);   // destructor of the list at +0x20
}

// hkChainedClassNameRegistry (0x20 bytes): vtable, then its members.
class hkChainedClassNameRegistry {
public:
    virtual const hkClass *getClassByName(const char *className) const;
    hkUint8 m_chained[0x1C];
};

class hkBindingClassNameRegistry : public hkChainedClassNameRegistry {
public:
    HK_FORCE_INLINE virtual ~hkBindingClassNameRegistry()
    {
        fn_82D003F0(&m_secondToFirst);
        fn_82D003F0(&m_firstToSecond);
        fn_82E1BB60(&m_list);
        fn_82E17470(this);
    }

    hkUint32 m_list[3];             // +0x20
    hkUint32 m_firstToSecond[4];    // +0x2C
    hkUint32 m_secondToFirst[4];    // +0x3C
};

extern "C" void fn_82E1BD08(hkBindingClassNameRegistry *self)
{
    self->hkBindingClassNameRegistry::~hkBindingClassNameRegistry();
}
