// hkMemoryTrackStreamReader::hkMemoryTrackStreamReader(const hkMemoryTrack *, MemoryType) (Common/Base/System/Io/Reader/MemoryTrack).
#include "havok/hkBase.h"

class hkMemoryTrack;

class hkStreamReader : public hkReferencedObject {
public:
    virtual hkBool isOk() const;
    virtual int read(void *buf, int nbytes);
};

class hkMemoryTrackStreamReader : public hkStreamReader {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    enum MemoryType { MEMORY_INPLACE, MEMORY_TAKE };
    hkMemoryTrackStreamReader(const hkMemoryTrack *track, MemoryType t);
    virtual ~hkMemoryTrackStreamReader();

protected:
    const hkMemoryTrack *m_track;   // +0x8
    int m_trackOffset;              // +0xC
    MemoryType m_memType;           // +0x10
};

hkMemoryTrackStreamReader::hkMemoryTrackStreamReader(const hkMemoryTrack *track, MemoryType t)
    : m_memType(t)
{
    m_track = track;
    m_trackOffset = 0;
}
