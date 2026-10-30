extern "C" {
void fn_82670A50(void *self);
void fn_8265CA20(void *p);
}

namespace ScaleformMovieView {
class ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture {
public:
    virtual __forceinline ~ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture() { fn_82670A50(this); }
};
}

extern "C" ScaleformMovieView::ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture *fn_826715C8(ScaleformMovieView::ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture *self, unsigned int flags)
{
    self->ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture::~ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture();
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
