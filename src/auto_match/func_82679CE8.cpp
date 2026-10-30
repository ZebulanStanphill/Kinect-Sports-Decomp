// GRareTextureXbox360ImplYUV constructor: GRareTextureXbox360Impl base constructor
// (fn_82675A98, which takes the renderer), vtable, then three cleared entries.
struct Renderer_82675A98;

struct Entry_82679CE8 {
    int a;
    int b;
    int c;
};

class GRareTextureXbox360Impl {
public:
    GRareTextureXbox360Impl(Renderer_82675A98 *renderer);
    virtual void f0();
    char pad[0x38];
};

class GRareTextureXbox360ImplYUV : public GRareTextureXbox360Impl {
public:
    virtual void f0();
    Entry_82679CE8 e[3];
    __forceinline GRareTextureXbox360ImplYUV(Renderer_82675A98 *renderer)
        : GRareTextureXbox360Impl(renderer)
    {
        for (int i = 0; i < 3; i++) {
            e[i].a = 0;
            e[i].b = 0;
            e[i].c = 0;
        }
    }
};

extern "C" GRareTextureXbox360ImplYUV *fn_82679CE8(GRareTextureXbox360ImplYUV *p, Renderer_82675A98 *renderer)
{
    p->GRareTextureXbox360ImplYUV::GRareTextureXbox360ImplYUV(renderer);
    return p;
}
