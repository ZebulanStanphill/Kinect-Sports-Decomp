// ScaleformMovieView::ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture constructor: ScaleformCommand base constructor
// (fn_82670F48), the vtable, then the texture pointer at +0x14.
class ScaleformMovieView {
public:
    class ScaleformCommand {
    public:
        ScaleformCommand(const void *view);
        virtual ~ScaleformCommand();
        char pad[0x10];
    };
    class ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture : public ScaleformCommand {
    public:
        virtual ~ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture();
        void *texture;
        __forceinline ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture(const void *view, void *tex) : ScaleformCommand(view), texture(tex) {}
    };
};

extern "C" ScaleformMovieView::ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture *fn_82671578(ScaleformMovieView::ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture *p, const void *view, void *tex)
{
    p->ScaleformMovieView::ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture::ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture(view, tex);
    return p;
}
