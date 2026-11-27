// hkCrc32StreamWriter (Common/Base/System/Io/Writer/Crc32/hkCrc32StreamWriter.h), 0xC bytes: a stream writer that
// only keeps a running CRC-32 of what is written to it.
// The constructor is out of line (82CFEBF0; hkClassEnum::getSignature, 82CFE9C0, calls it): hkReferencedObject's
// constructor, the vtable, then the CRC starts as ~startCrc. getCrc (fn_82CFEBE0, ~m_crc) keeps its fn_ name.
// The destructor is implicit (slot 0 is the scalar deleting destructor folded with hkpShape's).
// The overrides (??_7hkCrc32StreamWriter@@6B@): isOk 82CFEC10, write 82CFEB80, seekTellSupported 82CFED30, seek
// 82CFED20 and tell 82CFED28 (the last three are folds shared with hkSocket::WriterAdapter's vtable and keep their
// fn_ names); flush is hkStreamWriter's (the empty function).
#ifndef HAVOK_HKCRC32STREAMWRITER_H
#define HAVOK_HKCRC32STREAMWRITER_H

#include "havok/hkBase.h"
#include "havok/hkStreamWriter.h"

class hkCrc32StreamWriter : public hkStreamWriter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    hkCrc32StreamWriter(hkUint32 startCrc = 0);
    virtual hkBool isOk() const;
    virtual int write(const void *buf, int nbytes);
    virtual hkBool seekTellSupported() const;
    virtual hkResult seek(int offset, SeekWhence whence);
    virtual int tell() const;

    hkUint32 m_crc;   // +0x8
};

#endif
