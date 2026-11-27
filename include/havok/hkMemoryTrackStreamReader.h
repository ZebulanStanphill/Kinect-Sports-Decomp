// hkMemoryTrackStreamReader (Common/Base/System/Io/Reader/MemoryTrack/hkMemoryTrackStreamReader.h), 0x14 bytes: a
// stream reader over an hkMemoryTrack, which it deletes in its destructor when it owns it (MEMORY_TAKE).
// The constructor (82CFEDF8, ??0hkMemoryTrackStreamReader@@QAA@PBVhkMemoryTrack@@W4MemoryType@0@@Z) stores the
// type in its initialiser list, then the track and a zero offset; the destructor is 82CFF4F8. The vtable
// (??_7hkMemoryTrackStreamReader@@6B@) overrides isOk (82CFF598: the offset is still inside the track), read
// (82CFEE20) and skip (82CFF580 moves the offset); the other slots are hkStreamReader's. read keeps its fn_ name
// (its unit is NonMatching). hkMemoryTrack is in hkMemoryTrack.h.
#ifndef HAVOK_HKMEMORYTRACKSTREAMREADER_H
#define HAVOK_HKMEMORYTRACKSTREAMREADER_H

#include "havok/hkStreamReader.h"

class hkMemoryTrack;

class hkMemoryTrackStreamReader : public hkStreamReader {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    enum MemoryType { MEMORY_INPLACE, MEMORY_TAKE };
    hkMemoryTrackStreamReader(const hkMemoryTrack *track, MemoryType t);
    virtual ~hkMemoryTrackStreamReader();
    virtual hkBool isOk() const;
    virtual int read(void *buf, int nbytes);
    virtual int skip(int nbytes);

protected:
    const hkMemoryTrack *m_track;   // +0x8
    int m_trackOffset;              // +0xC: the read position
    MemoryType m_memType;           // +0x10
};

#endif
