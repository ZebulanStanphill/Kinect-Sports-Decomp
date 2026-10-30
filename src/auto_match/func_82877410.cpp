extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { class CAkFileLocationBase { public: virtual ~CAkFileLocationBase() {} }; } } 
extern "C" R1::Soundscape::CAkFileLocationBase *fn_82877410(R1::Soundscape::CAkFileLocationBase *self, unsigned int flags)
{
    self->R1::Soundscape::CAkFileLocationBase::~CAkFileLocationBase();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
