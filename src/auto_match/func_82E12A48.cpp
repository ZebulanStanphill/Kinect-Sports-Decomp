// hkPackfileReader::~hkPackfileReader() (Common/Serialize/Packfile/hkPackfileReader.cpp): frees the contents
// version string; then the map member m_updateFlagFromClass is destroyed and hkBaseObject's vtable stored.
#include "havok/hkPackfileReader.h"

hkPackfileReader::~hkPackfileReader()
{
    hkDeallocate<char>(m_contentsVersion);
}
