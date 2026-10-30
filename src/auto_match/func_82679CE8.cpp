// GRareTextureXbox360ImplYUV constructor: GRareTextureXbox360Impl base constructor
// (fn_82675A98), vtable, then three cleared entries.
struct Entry_82679CE8 {
    int a;
    int b;
    int c;
};

class GRareTextureXbox360Impl {
public:
    GRareTextureXbox360Impl();
    virtual void f0();
    char pad[0x38];
};

class GRareTextureXbox360ImplYUV : public GRareTextureXbox360Impl {
public:
    virtual void f0();
    Entry_82679CE8 e[3];
    __forceinline GRareTextureXbox360ImplYUV()
    {
        for (int i = 0; i < 3; i++) {
            e[i].a = 0;
            e[i].b = 0;
            e[i].c = 0;
        }
    }
};

extern "C" GRareTextureXbox360ImplYUV *fn_82679CE8(GRareTextureXbox360ImplYUV *p)
{
    p->GRareTextureXbox360ImplYUV::GRareTextureXbox360ImplYUV();
    return p;
}
