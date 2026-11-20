#include "havok/hkOstream.h"

hkOstream &hkOstream::operator<<(char c)
{
    m_writer->write(&c, 1);
    return *this;
}
