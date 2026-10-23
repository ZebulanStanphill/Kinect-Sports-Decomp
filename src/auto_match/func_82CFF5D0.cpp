// hkMemoryTrackStreamReader scalar deleting destructor; it calls ~hkMemoryTrackStreamReader (not visible here). The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

extern "C" void fn_82CFF478(void *self);   // hkMemoryTrack::~hkMemoryTrack (out of line)

// hkMemoryTrack (Common/Base/Container/MemoryTrack?): a list of fixed-size
// sectors; 0x14 bytes, non-virtual class allocator.
class hkMemoryTrack {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE, hkMemoryTrack);
    HK_FORCE_INLINE ~hkMemoryTrack() { fn_82CFF478(this); }

    int m_numBytesPerSector;     // +0x0
    int m_numBytesLastSector;    // +0x4
    hkArray<hkUint8 *> m_sectors;  // +0x8
};

class hkStreamReader : public hkReferencedObject {
public:
    virtual hkBool isOk() const;
    virtual int read(void *buf, int nbytes);
};

class hkStreamWriter : public hkReferencedObject {
public:
    virtual hkBool isOk() const;
    virtual int write(const void *buf, int nbytes);
};

class hkMemoryTrackStreamReader : public hkStreamReader {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    enum MemoryType { MEMORY_INPLACE, MEMORY_TAKE };
    virtual ~hkMemoryTrackStreamReader();

protected:
    const hkMemoryTrack *m_track;   // +0x8
    int m_trackOffset;              // +0xC
    MemoryType m_memType;           // +0x10
};

class hkMemoryTrackStreamWriter : public hkStreamWriter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    enum TrackOwnership { TRACK_TAKE, TRACK_BORROW };
    virtual ~hkMemoryTrackStreamWriter();

    hkMemoryTrack *m_track;      // +0x8
    TrackOwnership m_ownerShip;  // +0xC
};

void emitVtable_82CFF5D0(void *p) { new (p) hkMemoryTrackStreamReader; }
