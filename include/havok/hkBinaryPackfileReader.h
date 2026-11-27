// hkBinaryPackfileReader (Common/Serialize/Packfile/Binary/hkBinaryPackfileReader.h), 0x80 bytes: loads a
// binary packfile in place. The members and their order are those the constructor (82E0B980) fills in; the
// destructor (82E0C7A0) and getUpdateTracker (82E0CA00) confirm the types. The names follow Havok's header
// where it has them; m_streamOffset (+0x70) is named after its use: the stream position when the header is
// read (82E0B0D0), which section offsets are relative to (82E0C288).
//
// The constructor (82E0B980) and the destructor (82E0C7A0) are out of line; the scalar deleting destructor
// (82E0E540) calls the destructor. Game code reads packfiles with a local hkBinaryPackfileReader, so its calls
// of loadEntireFile, getContents, getContentsClassName and getPackfileData are direct (825A51B8, 825A54A8).
// ??_7hkBinaryPackfileReader@@6B@ (8214A854, 16 slots): hkPackfileReader's (see there), then
// loadEntireFileInplace (82E0D890: checks the magic, then fixes up the sections in place), getSectionIndex
// (82E0A080: compares the section tags) and getSectionDataByIndex (82E0A550: m_sectionData[i] + offset, or
// null). The other slots: loadEntireFile 82E0D7E8, getContentsWithRegistry 82E0CF68, getContentsClassName
// 82E0A1C0, getLoadedObjects 82E0BC78 (its mangled name), getTopLevelObject 82E0CEB8, getUpdateTracker
// 82E0CA00, getPackfileData 82E0C868.
#ifndef HAVOK_HKBINARYPACKFILEREADER_H
#define HAVOK_HKBINARYPACKFILEREADER_H

#include "havok/hkClassNameRegistry.h"
#include "havok/hkPackfileData.h"
#include "havok/hkPackfileHeader.h"
#include "havok/hkPackfileReader.h"
#include "havok/hkPackfileSectionHeader.h"

class hkPackfileObjectUpdateTracker;

class hkBinaryPackfileReader : public hkPackfileReader {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    // The packfile data the reader creates (100 bytes, allocated by the constructor); it adds nothing to
    // hkPackfileData, and its vtable has hkPackfileData's functions.
    class BinaryPackfileData : public hkPackfileData {
    public:
        BinaryPackfileData() {}
    };

    hkBinaryPackfileReader();
    virtual ~hkBinaryPackfileReader();

    virtual hkResult loadEntireFile(hkStreamReader *reader);
    virtual void *getContentsWithRegistry(const char *className, const hkTypeInfoRegistry *finish);
    virtual const char *getContentsClassName() const;
    virtual const hkArray<hkVariant> &getLoadedObjects() const;
    virtual hkVariant getTopLevelObject() const;
    virtual hkObjectUpdateTracker &getUpdateTracker() const;
    virtual hkPackfileData *getPackfileData() const;
    virtual hkResult loadEntireFileInplace(void *data, int dataSize);                   // +0x34
    virtual int getSectionIndex(const char *sectionTag) const;                         // +0x38
    virtual void *getSectionDataByIndex(int sectionIndex, int offset) const;           // +0x3C

    BinaryPackfileData *m_packfileData;                               // +0x18 (a reference is held)
    hkPackfileHeader *m_header;                                       // +0x1C
    hkPackfileSectionHeader *m_sections;                              // +0x20
    hkInplaceArray<void *, 16> m_sectionData;                         // +0x24
    int m_streamOffset;                                               // +0x70
    mutable hkArray<hkVariant> *m_loadedObjects;                      // +0x74 built by getLoadedObjects
    mutable hkPackfileObjectUpdateTracker *m_tracker;                 // +0x78 built by getUpdateTracker
    mutable hkRefPtr<hkClassNameRegistry> m_packfileClassRegistry;    // +0x7C built by fn_82E0BA38
};

#endif
