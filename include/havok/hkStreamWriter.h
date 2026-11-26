// hkStreamWriter (Common/Base/System/Io/Writer/hkStreamWriter.h): the
// interface of Havok's output streams.
//
// Vtable after hkReferencedObject's three slots:
//   +0xC  isOk() const
//   +0x10 write(const void *, int)
//   +0x14 flush()
//   +0x18 seekTellSupported() const
//   +0x1C seek(int, SeekWhence)
//   +0x20 tell() const
// The interface ends there: hkBufferedStreamWriter, hkCrc32StreamWriter and hkSocket::WriterAdapter have
// nine-slot vtables. The tenth slot of hkStdioStreamWriter (82CFB5B0, returns true), hkArrayStreamWriter
// and hkMemoryTrackStreamWriter (clear) is each class's own.
#ifndef HAVOK_HKSTREAMWRITER_H
#define HAVOK_HKSTREAMWRITER_H

#include "havok/hkBase.h"

#ifndef HAVOK_HKRESULT_DEFINED
#define HAVOK_HKRESULT_DEFINED
enum hkResult { HK_SUCCESS = 0, HK_FAILURE = 1 };
#endif

class hkStreamWriter : public hkReferencedObject {
public:
    enum SeekWhence { STREAM_SET = 0, STREAM_CUR = 1, STREAM_END = 2 };

    hkStreamWriter() {}
    hkStreamWriter(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}

    virtual hkBool isOk() const = 0;
    virtual int write(const void *buf, int nbytes) = 0;
    virtual void flush() {}
    virtual hkBool seekTellSupported() const;
    virtual hkResult seek(int offset, SeekWhence whence);
    virtual int tell() const;
};

#endif
