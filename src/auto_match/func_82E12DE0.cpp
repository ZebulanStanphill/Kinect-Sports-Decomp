// hkPackfileReader::hkPackfileReader() (hkPackfileReader.cpp).
// hkPackfileReader (Common/Serialize/Packfile/hkPackfileReader.h, 0x18 bytes).
// m_contentsVersion is returned by getContentsVersion (82E12A00) and
// replaced by setContentsVersion (82E12CC8: easyFree, then hkString::strDup);
// the user-written destructor (82E12A48) frees it before the map.
#include "havok/hkPackfileReader.h"

hkPackfileReader::hkPackfileReader() : m_contentsVersion(HK_NULL) {}
