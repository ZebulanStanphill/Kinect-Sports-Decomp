extern "C" void fn_8265CA20(void *p);
namespace AK { namespace StreamMgr { class IAkFileLocationResolver { public: virtual ~IAkFileLocationResolver() {} }; } } 
extern "C" AK::StreamMgr::IAkFileLocationResolver *fn_82876280(AK::StreamMgr::IAkFileLocationResolver *self, unsigned int flags)
{
    self->AK::StreamMgr::IAkFileLocationResolver::~IAkFileLocationResolver();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
