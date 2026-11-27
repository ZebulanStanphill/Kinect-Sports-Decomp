// hkCrc32StreamWriter::write (vtable slot +0x10): runs every byte through the CRC-32 (fn_82CFEAC8 looks up the
// table entry of the low byte) and consumes it all.
#include "havok/hkBase.h"
#include "havok/hkCrc32StreamWriter.h"

extern "C" unsigned int fn_82CFEAC8(unsigned int index);

int hkCrc32StreamWriter::write(const void *buf, int nbytes)
{
    const unsigned char *p = static_cast<const unsigned char *>(buf);
    unsigned int c = m_crc;
    for (int i = 0; i < nbytes; i++)
        c = fn_82CFEAC8((p[i] ^ c) & 0xff) ^ (c >> 8);
    m_crc = c;
    return nbytes;
}
