#include "havok/hkBase.h"

extern "C" {
void fn_82E1BB60(void *p);
void fn_82E17470(void *p);
}

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

struct hkBindingClassNameRegistry {
    virtual void v0();
    unsigned short m_memSizeAndFlags;
    short m_referenceCount;
    char pad08[0x18];
    char m20[0xc];
    char m2c[0x10];
    char m3c[0x10];

    ~hkBindingClassNameRegistry()
    {
        reinterpret_cast<StringHashMap *>(m3c)->~StringHashMap();
        reinterpret_cast<StringHashMap *>(m2c)->~StringHashMap();
        fn_82E1BB60(m20);
        fn_82E17470(this);
    }
};

extern "C" hkBindingClassNameRegistry *fn_82E1BE88(hkBindingClassNameRegistry *self, unsigned int flags)
{
    self->~hkBindingClassNameRegistry();
    if (flags & 1) {
        hkMemoryRouter::getInstance().heap().blockFree(self, self->m_memSizeAndFlags);
    }
    return self;
}
