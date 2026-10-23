// hkBaseSystem::init (Common/Base/System/hkBaseSystem.cpp): on the first call,
// installs the memory router, the native file system and the default error
// handler singletons, initialises the other singletons, and marks the base
// system initialised. It keeps its fn_ name (a static function, called from C).
#include "havok/hkBase.h"

typedef void (HK_CALL *hkErrorReportFunction)(const char *s, void *errorReportObject);

class hkStreamReader;
class hkStreamWriter;

extern "C" {
void fn_82CE5400(hkMemoryRouter *router);   // hkMemoryRouter::replaceInstance
void fn_82CF9A90(void);
void fn_82CE7968(void);                      // hkBaseSystem::initSingletons
extern hkUint8 lbl_8323B21C;                 // hkBaseSystem's "initialised" flag
}

class hkFileSystem : public hkReferencedObject {
public:
    virtual hkStreamReader *openReader(const char *name);
    virtual hkStreamWriter *openWriter(const char *name);
};

class hkNativeFileSystem : public hkFileSystem {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkNativeFileSystem() {}
    virtual hkStreamReader *openReader(const char *name);
    virtual hkStreamWriter *openWriter(const char *name);
};

class hkError : public hkReferencedObject {
public:
    hkError() {}
};

class hkDefaultError : public hkError {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkDefaultError(hkErrorReportFunction errorReportFunction, void *errorReportObject);
    hkUint8 m_members[0x20];   // +0x8 (not needed here)
};

// The singletons' instances (hkSingleton<T>::s_instance).
extern "C" hkFileSystem *lbl_8323B4A4;
extern "C" hkError *lbl_8323B464;

class hkMonitorStreamFrameInfo;
class hkSingletonInitialiser : public hkReferencedObject {
public:
    virtual void init();   // +0xC
};
extern "C" hkSingletonInitialiser *lbl_8323B218;

template <typename T>
static HK_FORCE_INLINE void replaceInstance(T *&instance, T *p)
{
    if (instance)
        instance->removeReferenceLockUnchecked();
    instance = p;
}

extern "C" int fn_82CE7B00(hkMemoryRouter *memoryRouter, hkErrorReportFunction errorReportFunction,
                           void *errorReportObject)
{
    if (!lbl_8323B21C) {
        fn_82CE5400(memoryRouter);
        fn_82CF9A90();
        replaceInstance(lbl_8323B4A4, static_cast<hkFileSystem *>(new hkNativeFileSystem()));
        replaceInstance(lbl_8323B464, static_cast<hkError *>(new hkDefaultError(errorReportFunction, errorReportObject)));
        fn_82CE7968();
        lbl_8323B218->init();
        lbl_8323B21C = 1;
    }
    return 0;   // HK_SUCCESS
}
