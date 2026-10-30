extern "C" void fn_8265CA20(void *p);
template<class T> class GFxLogBase { public: virtual ~GFxLogBase() {} };
class GFxLog;
extern "C" GFxLogBase<GFxLog> *fn_8266C740(GFxLogBase<GFxLog> *self, unsigned int flags)
{
    self->GFxLogBase<GFxLog>::~GFxLogBase();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
