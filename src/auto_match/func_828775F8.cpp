// Scalar deleting destructor of R1::Soundscape::CAkFilePackage.
extern "C" void fn_8265CA20(void *);

namespace R1 {
namespace Soundscape {
class CAkFilePackageLUT {
public:
    virtual ~CAkFilePackageLUT();
    unsigned int data[4];
};

class CAkFilePackage {
public:
    virtual __forceinline ~CAkFilePackage() {}
    void *m_4;
    CAkFilePackageLUT lut;
};

extern "C" CAkFilePackage *fn_828775F8(CAkFilePackage *self, unsigned int flags)
{
    self->CAkFilePackage::~CAkFilePackage();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
}
}
