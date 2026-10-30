extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { class CAkFilePackageLUT { public: virtual ~CAkFilePackageLUT() {} }; } } 
extern "C" R1::Soundscape::CAkFilePackageLUT *fn_82876BF0(R1::Soundscape::CAkFilePackageLUT *self, unsigned int flags)
{
    self->R1::Soundscape::CAkFilePackageLUT::~CAkFilePackageLUT();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
