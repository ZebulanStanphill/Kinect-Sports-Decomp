// hkPackfileReader::setContentsVersion(const char *version) (slot +0x2C of ??_7hkPackfileReader@@6B@, inherited
// by hkBinaryPackfileReader): frees m_contentsVersion and keeps a copy of version.
#include "havok/hkPackfileReader.h"
#include "havok/hkString.h"
#include "havok/hkMemoryRouter.h"

void hkPackfileReader::setContentsVersion(const char *version)
{
    char *old = m_contentsVersion;
    hkMemoryRouter::easyFree(hkMemoryRouter::getInstance().heap(), old);
    m_contentsVersion = hkString::strDup(version);
}
