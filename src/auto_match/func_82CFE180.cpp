#include "havok/hkOArchive.h"

int hkOArchive::writeRaw(const void *buf, int nbytes)
{
    return m_writer->write(buf, nbytes);
}
