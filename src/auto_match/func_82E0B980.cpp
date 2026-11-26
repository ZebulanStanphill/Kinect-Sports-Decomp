// hkBinaryPackfileReader::hkBinaryPackfileReader() (hkBinaryPackfileReader.cpp). Matching C units call it
// (func_825A54A8, func_826034A0), so it keeps its fn_ name: an extern "C" function that runs the
// constructor on the given storage (MSVC's explicit constructor call; placement new would add a null check).
// hkBinaryPackfileReader (Common/Serialize/Packfile/Binary/hkBinaryPackfileReader.h, 0x80 bytes):
// hkPackfileReader (0x18 bytes, out-of-line constructor), then m_packfileData (a new
// BinaryPackfileData, 100 bytes, whose base hkPackfileData has an out-of-line constructor,
// fn_82E16A90), m_header, m_sections, m_sectionData (hkInplaceArray<void *, 16>) and four
// zeroed words at +0x70.
#include "havok/hkPackfileData.h"
#include "havok/hkPackfileHeader.h"
#include "havok/hkPackfileReader.h"
#include "havok/hkPackfileSectionHeader.h"

class hkPackfileObjectUpdateTracker;

// hkBinaryPackfileReader (include/havok/hkBinaryPackfileReader.h) with its constructor inline: the game's
// constructor is this function, which keeps its fn_ name, so the header's out-of-line declaration cannot
// be used here.
class hkBinaryPackfileReader : public hkPackfileReader {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    class BinaryPackfileData : public hkPackfileData {
    public:
        BinaryPackfileData() {}
    };

    HK_FORCE_INLINE hkBinaryPackfileReader()
        : m_header(HK_NULL), m_sections(HK_NULL), m_streamOffset(0), m_loadedObjects(HK_NULL), m_tracker(HK_NULL)
    {
        m_packfileData = new BinaryPackfileData();
    }

    BinaryPackfileData *m_packfileData;                               // +0x18
    hkPackfileHeader *m_header;                                       // +0x1C
    hkPackfileSectionHeader *m_sections;                              // +0x20
    hkInplaceArray<void *, 16> m_sectionData;                         // +0x24
    int m_streamOffset;                                               // +0x70
    mutable hkArray<hkVariant> *m_loadedObjects;                      // +0x74
    mutable hkPackfileObjectUpdateTracker *m_tracker;                 // +0x78
    mutable hkRefPtr<hkClassNameRegistry> m_packfileClassRegistry;    // +0x7C
};

extern "C" hkBinaryPackfileReader *fn_82E0B980(hkBinaryPackfileReader *self)
{
    self->hkBinaryPackfileReader::hkBinaryPackfileReader();
    return self;
}
