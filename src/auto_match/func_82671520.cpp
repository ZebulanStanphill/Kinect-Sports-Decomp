extern "C" {
void fn_82670A50(void *self);
void fn_8265CA20(void *p);
}

namespace ScaleformMovieView {
class ScaleformCommandSetDrawModelTexturesSetDynamicTexture {
public:
    virtual __forceinline ~ScaleformCommandSetDrawModelTexturesSetDynamicTexture() { fn_82670A50(this); }
};
}

extern "C" ScaleformMovieView::ScaleformCommandSetDrawModelTexturesSetDynamicTexture *fn_82671520(ScaleformMovieView::ScaleformCommandSetDrawModelTexturesSetDynamicTexture *self, unsigned int flags)
{
    self->ScaleformCommandSetDrawModelTexturesSetDynamicTexture::~ScaleformCommandSetDrawModelTexturesSetDynamicTexture();
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
