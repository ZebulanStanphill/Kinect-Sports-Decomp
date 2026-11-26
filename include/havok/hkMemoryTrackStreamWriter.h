// hkMemoryTrackStreamWriter
// (Common/Base/System/Io/Writer/Array/hkArrayStreamWriter.h), 0x10 bytes:
// writes into an hkMemoryTrack. Its vtable (ten slots) ends with clear() at
// +0x24, after the six slots of hkStreamWriter.
#ifndef HAVOK_HKMEMORYTRACKSTREAMWRITER_H
#define HAVOK_HKMEMORYTRACKSTREAMWRITER_H

#include "havok/hkStreamWriter.h"

class hkMemoryTrack;

class hkMemoryTrackStreamWriter : public hkStreamWriter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    enum TrackOwnership { TRACK_TAKE, TRACK_BORROW };
    hkMemoryTrackStreamWriter(hkMemoryTrack *track, TrackOwnership o)
        : m_track(track), m_ownerShip(o) {}
    virtual ~hkMemoryTrackStreamWriter();                 // 82CEE2D0: deletes a track it owns
    virtual hkBool isOk() const;
    virtual int write(const void *buf, int nbytes);
    virtual hkBool seekTellSupported() const;
    virtual hkResult seek(int offset, SeekWhence whence);
    virtual int tell() const;
    virtual void clear();                                 // +0x24

    hkMemoryTrack *m_track;      // +0x8
    TrackOwnership m_ownerShip;  // +0xC
};

#endif
