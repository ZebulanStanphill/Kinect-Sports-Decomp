// hkOstream::operator<<(const void *) (Common/Base/System/Io/OStream/hkOStream.cpp).
#include "havok/hkOstream.h"
#include "havok/hkString.h"

hkOstream &hkOstream::operator<<(const void *p)
{
    char buf[10032];
    hkString::snprintf(buf, 0x2728, "%p", p);
    hkStreamWriter *writer = m_writer;
    writer->write(buf, hkString::strLen(buf));
    return *this;
}
