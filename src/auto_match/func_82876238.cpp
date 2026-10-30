extern "C" void fn_8265CA20(void *p);
namespace AK { namespace StreamMgr { class IAkLowLevelIOHook { public: virtual ~IAkLowLevelIOHook() {} }; } } 
extern "C" AK::StreamMgr::IAkLowLevelIOHook *fn_82876238(AK::StreamMgr::IAkLowLevelIOHook *self, unsigned int flags)
{
    self->AK::StreamMgr::IAkLowLevelIOHook::~IAkLowLevelIOHook();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
