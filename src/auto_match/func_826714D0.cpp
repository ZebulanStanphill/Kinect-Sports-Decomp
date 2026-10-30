// ScaleformMovieView::ScaleformCommandSetDrawModelTexturesSetDynamicTexture constructor: ScaleformCommand base constructor
// (fn_82670F48), the vtable, then the texture pointer at +0x14.
class ScaleformMovieView {
public:
    class ScaleformCommand {
    public:
        ScaleformCommand(const void *view);
        virtual ~ScaleformCommand();
        char pad[0x10];
    };
    class ScaleformCommandSetDrawModelTexturesSetDynamicTexture : public ScaleformCommand {
    public:
        virtual ~ScaleformCommandSetDrawModelTexturesSetDynamicTexture();
        void *texture;
        __forceinline ScaleformCommandSetDrawModelTexturesSetDynamicTexture(const void *view, void *tex) : ScaleformCommand(view), texture(tex) {}
    };
};

extern "C" ScaleformMovieView::ScaleformCommandSetDrawModelTexturesSetDynamicTexture *fn_826714D0(ScaleformMovieView::ScaleformCommandSetDrawModelTexturesSetDynamicTexture *p, const void *view, void *tex)
{
    p->ScaleformMovieView::ScaleformCommandSetDrawModelTexturesSetDynamicTexture::ScaleformCommandSetDrawModelTexturesSetDynamicTexture(view, tex);
    return p;
}
