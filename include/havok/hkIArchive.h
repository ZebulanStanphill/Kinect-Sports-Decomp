// hkIArchive, Common/Base/System/Io.
#ifndef HAVOK_HKIARCHIVE_H
#define HAVOK_HKIARCHIVE_H

#include "havok/hkStreamReader.h"

class hkIArchive : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE_CLASS);
    hkIArchive(hkStreamReader *sb, hkBool byteswap);
    hkIArchive(const char *filename, hkBool byteswap);
    hkIArchive(const void *mem, int memSize, hkBool byteswap);
    virtual ~hkIArchive();

    hkStreamReader *getStreamReader();

protected:
    hkStreamReader *m_streamReader;   // +0x8
    hkBool m_byteSwap;                // +0xC
};

#endif
