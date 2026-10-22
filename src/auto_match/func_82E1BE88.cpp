extern "C" {
void fn_82D003F0(void *p);
void fn_82E1BB60(void *p);
void fn_82E17470(void *p);
}

struct hkMemoryAllocator {
    virtual void v0();
    virtual void v4();
    virtual void blockFree(void *p, int size);
};

struct Ctx {
    char pad[0x10];
    hkMemoryAllocator *allocator;
};

extern "C" Ctx *fn_82CE5410();

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
        fn_82D003F0(m3c);
        fn_82D003F0(m2c);
        fn_82E1BB60(m20);
        fn_82E17470(this);
    }
};

extern "C" hkBindingClassNameRegistry *fn_82E1BE88(hkBindingClassNameRegistry *self, unsigned int flags)
{
    self->~hkBindingClassNameRegistry();
    if (flags & 1) {
        fn_82CE5410()->allocator->blockFree(self, self->m_memSizeAndFlags);
    }
    return self;
}
