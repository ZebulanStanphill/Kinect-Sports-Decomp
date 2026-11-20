// hkOArchive (Common/Base/System/Io/OArchive/hkOArchive.h), 0x10 bytes: a
// binary writer on an hkStreamWriter, swapping bytes when asked.
//
// Out-of-line members in .text order (they follow the header's order):
// writeRaw 82CFE180, isOk 82CFE1B0, getStreamWriter 82CFE1F0, the four
// constructors and the destructor, then write16 82CFE3B8, write16u 82CFE3E8,
// write32 82CFE418, write32u 82CFE448, write64, write64u, writeFloat32,
// writeDouble64 (identical code in signed/unsigned pairs, separate addresses).
#ifndef HAVOK_HKOARCHIVE_H
#define HAVOK_HKOARCHIVE_H

#include "havok/hkStreamWriter.h"

class hkOArchive : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE_CLASS);
    hkOArchive(hkStreamWriter *sw, hkBool byteswap);
    hkOArchive(const char *filename, hkBool byteswap);
    hkOArchive(void *mem, int memSize, hkBool byteswap);
    hkOArchive(hkArray<char> &buf, hkBool byteswap);
    virtual ~hkOArchive();

    void write16(hkInt16 i);
    void write32(hkInt32 i);

    int writeRaw(const void *buf, int nbytes);
    hkBool isOk() const;
    hkStreamWriter *getStreamWriter();

protected:
    hkStreamWriter *m_writer;   // +0x8, referenced while the archive lives
    hkBool m_byteSwap;          // +0xC
};

#endif
