extern "C" void fn_8267BE38(void *p);
class GTexture { public: virtual ~GTexture() {} }; 
extern "C" GTexture *fn_8267A4F0(GTexture *self, unsigned int flags)
{
    self->GTexture::~GTexture();
    if (flags & 1)
        fn_8267BE38(self);
    return self;
}
