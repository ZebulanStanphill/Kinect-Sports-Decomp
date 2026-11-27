// hkFileSystem (Common/Base/System/Io/FileSystem/hkFileSystem.h): opens the
// streams that the archives and hkOstream write through.
// hkSingleton<hkFileSystem>::s_instance is lbl_8323B4A4.
// hkNativeFileSystem's vtable has six slots: listDirectory (82CE7DE8 there)
// follows the two open functions.
#ifndef HAVOK_HKFILESYSTEM_H
#define HAVOK_HKFILESYSTEM_H

#include "havok/hkStreamReader.h"
#include "havok/hkStreamWriter.h"

class hkFileSystem : public hkReferencedObject {
public:
    virtual hkStreamReader *openReader(const char *name) = 0;   // +0xC
    virtual hkStreamWriter *openWriter(const char *name) = 0;   // +0x10
    struct DirectoryListing;
    virtual hkResult listDirectory(const char *basePath, DirectoryListing &listingOut) = 0;   // +0x14
    static hkFileSystem &getInstance();
};
extern "C" hkFileSystem *lbl_8323B4A4;
inline hkFileSystem &hkFileSystem::getInstance() { return *lbl_8323B4A4; }

#endif
