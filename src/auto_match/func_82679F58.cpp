extern "C" void fn_8267BE38(void *p);
class GRareRendererXbox360Impl {
public:
    virtual ~GRareRendererXbox360Impl();
};
extern "C" GRareRendererXbox360Impl *fn_82679F58(GRareRendererXbox360Impl *self, unsigned int flags)
{
    self->GRareRendererXbox360Impl::~GRareRendererXbox360Impl();
    if (flags & 1)
        fn_8267BE38(self);
    return self;
}
