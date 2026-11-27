// hkNativeFileSystem::listDirectory (Common/Base/System/Io/FileSystem/Native/hkNativeFileSystem.cpp; vtable slot
// +0x14): tail-calls the platform's directory lister lbl_8317F4E0 with the path and the listing.
#include "havok/hkBase.h"
#include "havok/hkNativeFileSystem.h"

extern "C" hkResult (*lbl_8317F4E0)(const char *basePath, hkFileSystem::DirectoryListing &listingOut);

hkResult hkNativeFileSystem::listDirectory(const char *basePath, DirectoryListing &listingOut)
{
    return lbl_8317F4E0(basePath, listingOut);
}
