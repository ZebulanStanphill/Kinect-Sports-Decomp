// hkOArchive::hkOArchive(hkStreamWriter *, hkBool) (Common/Base/System/Io/OArchive/hkOArchive.cpp).
#include "havok/hkReferencedObject.h"

class hkStreamWriter : public hkReferencedObject {
};

class hkOArchive : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE_CLASS);
    hkOArchive(hkStreamWriter *sw, hkBool byteswap);
    virtual ~hkOArchive();

protected:
    hkStreamWriter *m_writer;   // +0x8, referenced while the archive lives
    hkBool m_byteSwap;          // +0xC
};

hkOArchive::hkOArchive(hkStreamWriter *sw, hkBool byteswap)
    : m_writer(sw), m_byteSwap(byteswap)
{
    m_writer->addReference();
}
