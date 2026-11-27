// hkBinaryPackfileReader::getSectionIndex(const char *sectionTag) const (slot +0x38 of
// ??_7hkBinaryPackfileReader@@6B@): the index of the section header whose tag is sectionTag, or -1.
#include "havok/hkBinaryPackfileReader.h"
#include "havok/hkString.h"

int hkBinaryPackfileReader::getSectionIndex(const char *sectionTag) const
{
    for (int i = 0; i < m_header->m_numSections; i++) {
        if (hkString::strCmp(m_sections[i].m_sectionTag, sectionTag) == 0)
            return i;
    }
    return -1;
}
