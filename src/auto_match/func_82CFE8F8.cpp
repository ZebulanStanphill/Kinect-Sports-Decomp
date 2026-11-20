// hkClassEnum::writeSignature(hkStreamWriter *) const
// (Common/Base/Reflection/hkClassEnum.cpp): writes through an hkOArchive on the
// stack (byte-swapping) the enum's name, each item's name then value, then the
// item count.
#include "havok/hkClass.h"

class hkOArchive : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE_CLASS);
    hkOArchive(hkStreamWriter *sw, hkBool byteswap);
    virtual ~hkOArchive();

protected:
    hkStreamWriter *m_writer;   // +0x8
    hkBool m_byteSwap;          // +0xC
};

extern "C" {
int fn_82CFBE40(const char *s);                                // hkString::strLen
void fn_82CFE180(hkOArchive *oa, const void *buf, int nbytes);  // hkOArchive::writeRaw
void fn_82CFE418(hkOArchive *oa, int v);                       // hkOArchive::write32
}

void hkClassEnum::writeSignature(hkStreamWriter *w) const
{
    hkOArchive oa(w, true);
    const char *name = m_name;
    fn_82CFE180(&oa, name, fn_82CFBE40(name));
    int n = m_numItems;
    for (int i = 0; i < n; i++) {
        const Item *item = &m_items[i];
        const char *s = item->m_name;
        fn_82CFE180(&oa, s, fn_82CFBE40(s));
        fn_82CFE418(&oa, item->m_value);
    }
    fn_82CFE418(&oa, n);
}
