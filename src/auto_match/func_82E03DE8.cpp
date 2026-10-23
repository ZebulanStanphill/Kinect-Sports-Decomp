// hkxTextureFile's scalar deleting destructor ??_GhkxTextureFile@@UAAPAXI@Z
// (Common/SceneData/Material/hkxTextureFile.h), generated from the implicit
// destructor. The finish constructor below only makes the compiler emit the
// vtable, and with it this function.
#include "havok/hkBase.h"

class hkxTextureFile : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxTextureFile(hkFinishLoadedObjectFlag f)
        : hkReferencedObject(f), m_filename(f), m_name(f), m_originalFilename(f) {}

    hkStringPtr m_filename;          // +0x8
    hkStringPtr m_name;              // +0xC
    hkStringPtr m_originalFilename;  // +0x10
};

void emitVtable_82E03DE8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxTextureFile(f); }
