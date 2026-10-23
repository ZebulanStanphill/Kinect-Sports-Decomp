// hkBinaryPackfileReader::hkBinaryPackfileReader() (hkBinaryPackfileReader.cpp). Matching C units call it
// (func_825A54A8, func_826034A0), so it keeps its fn_ name: an extern "C" function that runs the
// constructor on the given storage (MSVC's explicit constructor call; placement new would add a null check).
// hkBinaryPackfileReader (Common/Serialize/Packfile/Binary/hkBinaryPackfileReader.h, 0x80 bytes):
// hkPackfileReader (0x18 bytes, out-of-line constructor), then m_packfileData (a new
// BinaryPackfileData, 100 bytes, whose base hkPackfileData has an out-of-line constructor,
// fn_82E16A90), m_header, m_sections, m_sectionData (hkInplaceArray<void *, 16>) and four
// zeroed words at +0x70.
#include "havok/hkBase.h"

class hkPackfileReader : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    hkPackfileReader();

    hkPointerMap<const hkClass *, hkInt32> m_updateFlagFromClass;   // +0x8
    char *m_contentsVersion;                                       // +0x14
};

class hkResource : public hkReferencedObject {
};

class hkPackfileData : public hkResource {
public:
    hkPackfileData();
    char m_data[100 - 8];
};

struct hkPackfileHeader;
struct hkPackfileSectionHeader;

class hkBinaryPackfileReader : public hkPackfileReader {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    HK_FORCE_INLINE hkBinaryPackfileReader()
        : m_header(HK_NULL), m_sections(HK_NULL), m_tracker(HK_NULL), m_loadedVersion(0), m_unk78(HK_NULL), m_unk7c(HK_NULL)
    {
        m_packfileData = new BinaryPackfileData();
    }

    class BinaryPackfileData : public hkPackfileData {
    public:
        BinaryPackfileData() {}
    };

    BinaryPackfileData *m_packfileData;            // +0x18
    hkPackfileHeader *m_header;                    // +0x1c
    hkPackfileSectionHeader *m_sections;           // +0x20
    hkInplaceArray<void *, 16> m_sectionData;      // +0x24
    void *m_tracker;                               // +0x70
    int m_loadedVersion;                           // +0x74
    void *m_unk78;                                 // +0x78
    void *m_unk7c;                                 // +0x7c
};

extern "C" hkBinaryPackfileReader *fn_82E0B980(hkBinaryPackfileReader *self)
{
    self->hkBinaryPackfileReader::hkBinaryPackfileReader();
    return self;
}
