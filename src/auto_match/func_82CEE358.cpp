// hkMemoryTrackStreamWriter scalar deleting destructor; it calls ~hkMemoryTrackStreamWriter (not visible here). The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkStreamReader.h"
#include "havok/hkMemoryTrackStreamWriter.h"

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

void emitVtable_82CEE358(void *p) { new (p) hkMemoryTrackStreamWriter(HK_NULL, hkMemoryTrackStreamWriter::TRACK_BORROW); }
