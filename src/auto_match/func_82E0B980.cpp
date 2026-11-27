// hkBinaryPackfileReader::hkBinaryPackfileReader() (Common/Serialize/Packfile/Binary/hkBinaryPackfileReader.cpp):
// hkPackfileReader's out-of-line constructor, then a new BinaryPackfileData (100 bytes; hkPackfileData's
// constructor is out of line, 82E16A90), the null header and sections, the empty m_sectionData
// (hkInplaceArray<void *, 16>) and the four zeroed words at +0x70.
#include "havok/hkBinaryPackfileReader.h"

hkBinaryPackfileReader::hkBinaryPackfileReader()
    : m_header(HK_NULL), m_sections(HK_NULL), m_streamOffset(0), m_loadedObjects(HK_NULL), m_tracker(HK_NULL)
{
    m_packfileData = new BinaryPackfileData();
}
