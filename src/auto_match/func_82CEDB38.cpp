// hkOstream::operator<<(const char *) (Common/Base/System/Io/OStream/hkOStream.cpp).
#include "havok/hkOstream.h"
#include "havok/hkString.h"

hkOstream &hkOstream::operator<<(const char *str)
{
    hkStreamWriter *writer = m_writer;
    if (str)
        writer->write(str, hkString::strLen(str));
    else
        writer->write("(null)", 6);
    return *this;
}
