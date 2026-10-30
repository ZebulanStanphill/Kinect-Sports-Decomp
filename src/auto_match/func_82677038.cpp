// GRareTextureXbox360ImplYUV scalar deleting destructor
extern "C" {
void fn_82676E40(void *self);
void fn_82676D78(void *self);
void fn_8267BE38(void *p);
}

class __declspec(novtable) GRareTextureXbox360Impl {
public:
    virtual __forceinline ~GRareTextureXbox360Impl() { fn_82676D78(this); }
    char pad[0x38];
};

class GRareTextureXbox360ImplYUV : public GRareTextureXbox360Impl {
public:
    virtual __forceinline ~GRareTextureXbox360ImplYUV() { fn_82676E40(this); }
};

extern "C" GRareTextureXbox360ImplYUV *fn_82677038(GRareTextureXbox360ImplYUV *self, unsigned int flags)
{
    self->GRareTextureXbox360ImplYUV::~GRareTextureXbox360ImplYUV();
    if (flags & 1)
        fn_8267BE38(self);
    return self;
}
