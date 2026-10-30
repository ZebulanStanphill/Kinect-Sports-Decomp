extern "C" {
void fn_8267C488(void *self);
void fn_8267BE38(void *p);
}


class GRenderer {
public:
    virtual __forceinline ~GRenderer() { fn_8267C488(this); }
};


extern "C" GRenderer *fn_82676870(GRenderer *self, unsigned int flags)
{
    self->GRenderer::~GRenderer();
    if (flags & 1) {
        fn_8267BE38(self);
    }
    return self;
}
