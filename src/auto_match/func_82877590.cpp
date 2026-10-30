extern "C" unsigned int lbl_8321188C;

namespace R1 {
namespace Soundscape {
class CAkFilePackageLUT {
public:
    CAkFilePackageLUT();
    virtual ~CAkFilePackageLUT();
    unsigned int data[4];
};

class CAkFilePackage {
public:
    CAkFilePackage(const unsigned int *id, unsigned int b, unsigned int c);
    virtual ~CAkFilePackage();

    void *m_4;
    CAkFilePackageLUT lut;
    unsigned int m_1C;
    unsigned int m_20;
    unsigned int m_24;
    unsigned int m_28;
};

CAkFilePackage::CAkFilePackage(const unsigned int *id, unsigned int b, unsigned int c)
    : m_4(0), m_1C(*id), m_24(b), m_28(c)
{
    m_20 = ++lbl_8321188C;
}
}
}
