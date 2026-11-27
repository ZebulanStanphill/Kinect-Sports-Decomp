// hkNativeFileSystem (Common/Base/System/Io/FileSystem/Native/hkNativeFileSystem.h), 8 bytes: the file system
// that hkBaseSystem::init (82CE7B00) installs, constructing it inline. ??_7hkNativeFileSystem@@6B@ (82132B84):
// openReader (82CE7F80), openWriter
// (82CE8088) and listDirectory (82CE7DE8).
#ifndef HAVOK_HKNATIVEFILESYSTEM_H
#define HAVOK_HKNATIVEFILESYSTEM_H

#include "havok/hkFileSystem.h"

class hkNativeFileSystem : public hkFileSystem {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkNativeFileSystem() {}
    virtual hkStreamReader *openReader(const char *name);
    virtual hkStreamWriter *openWriter(const char *name);
    virtual hkResult listDirectory(const char *basePath, DirectoryListing &listingOut);
};

#endif
