// hkBinaryPackfileReader::getContentsClassName() const (slot +0x18 of ??_7hkBinaryPackfileReader@@6B@): the
// class name the update tracker recorded for the top-level object (82E16E28: m_finish's value for
// m_topLevelObject) once the tracker exists; otherwise the string the header points to through
// getSectionDataByIndex, or null.
#include "havok/hkBinaryPackfileReader.h"

extern "C" const char *fn_82E16E28(hkPackfileObjectUpdateTracker *tracker);

const char *hkBinaryPackfileReader::getContentsClassName() const
{
    if (m_tracker)
        return fn_82E16E28(m_tracker);
    int section = m_header->m_contentsClassNameSectionIndex;
    int offset = m_header->m_contentsClassNameSectionOffset;
    if (section >= 0 && offset >= 0)
        return static_cast<const char *>(getSectionDataByIndex(section, offset));
    return HK_NULL;
}
