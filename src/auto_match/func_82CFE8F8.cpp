// hkClassEnum::writeSignature(hkStreamWriter *) const
// (Common/Base/Reflection/hkClassEnum.cpp): writes through an hkOArchive on the
// stack (byte-swapping) the enum's name, each item's name then value, then the
// item count.
#include "havok/hkClass.h"
#include "havok/hkString.h"

#include "havok/hkOArchive.h"

extern "C" {
}

void hkClassEnum::writeSignature(hkStreamWriter *w) const
{
    hkOArchive oa(w, true);
    const char *name = m_name;
    oa.writeRaw(name, hkString::strLen(name));
    int n = m_numItems;
    for (int i = 0; i < n; i++) {
        const Item *item = &m_items[i];
        const char *s = item->m_name;
        oa.writeRaw(s, hkString::strLen(s));
        oa.write32(item->m_value);
    }
    oa.write32(n);
}
