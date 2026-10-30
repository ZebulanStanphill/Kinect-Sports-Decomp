// GRareTextureXbox360Impl constructor: the GTextureImplNode base (fn_8267A760) links the
// texture into the list at renderer+0x154, then the renderer is kept at +0x1c and three
// words are cleared. The renderer's class is not named anywhere.
struct Node_8267A760;
struct Renderer_82675A98 {
    char pad[0x154];
    Node_8267A760 *textures;
};

struct Words_82675A98 {
    int a, b, c;
    __forceinline Words_82675A98() { a = 0; b = 0; c = 0; }
};

extern "C" void *fn_8267A760(void *self, void *list);

class __declspec(novtable) GTextureImplNode {
public:
    virtual void f0();
    char pad[0x18];
    __forceinline GTextureImplNode(void *list) { fn_8267A760(this, list); }
};

class GRareTextureXbox360Impl : public GTextureImplNode {
public:
    GRareTextureXbox360Impl(Renderer_82675A98 *renderer);
    virtual void f0();
    Renderer_82675A98 *m_renderer;
    int pad20[2];
    Words_82675A98 m_28;
};

GRareTextureXbox360Impl::GRareTextureXbox360Impl(Renderer_82675A98 *renderer)
    : GTextureImplNode(&renderer->textures), m_renderer(renderer)
{
}
