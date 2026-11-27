// hkPackfileReader (Common/Serialize/Packfile/hkPackfileReader.h), 0x18 bytes: the interface of the packfile
// loaders. The constructor is out of line (??0hkPackfileReader@@QAA@XZ, 82E12DE0); the destructor too
// (82E12A48: it frees m_contentsVersion, then the map), which hkBinaryPackfileReader's destructor and the scalar
// deleting destructor (82E12E48) call.
// ??_7hkPackfileReader@@6B@ (8214B140, 13 slots) has eight pure slots; the names are Havok's, placed with
// hkBinaryPackfileReader's implementations, whose code agrees with them: getContents (82E12AC8, here) calls
// getContentsWithRegistry with the builtin type registry's hkTypeInfoRegistry; getContentsVersion (82E12A00)
// returns m_contentsVersion and setContentsVersion (82E12CC8) replaces it with a copy.
#ifndef HAVOK_HKPACKFILEREADER_H
#define HAVOK_HKPACKFILEREADER_H

#include "havok/hkBase.h"
#include "havok/hkStreamReader.h"
#include "havok/hkVariant.h"

class hkObjectUpdateTracker;
class hkPackfileData;
class hkTypeInfoRegistry;

class hkPackfileReader : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    hkPackfileReader();
    virtual ~hkPackfileReader();

    virtual hkResult loadEntireFile(hkStreamReader *reader);                                       // +0xC
    virtual void *getContentsWithRegistry(const char *className, const hkTypeInfoRegistry *finish);   // +0x10
    virtual void *getContents(const char *className);                                              // +0x14
    virtual const char *getContentsClassName() const;                                              // +0x18
    virtual const hkArray<hkVariant> &getLoadedObjects() const;                                    // +0x1C
    virtual hkVariant getTopLevelObject() const;                                                   // +0x20
    virtual hkObjectUpdateTracker &getUpdateTracker() const;                                       // +0x24
    virtual const char *getContentsVersion() const;                                                // +0x28
    virtual void setContentsVersion(const char *version);                                          // +0x2C
    virtual hkPackfileData *getPackfileData() const;                                               // +0x30

    hkPointerMap<const hkClass *, hkInt32> m_updateFlagFromClass;   // +0x8
    char *m_contentsVersion;                                       // +0x14
};

#endif
