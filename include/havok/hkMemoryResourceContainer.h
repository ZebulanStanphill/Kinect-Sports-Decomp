#ifndef HAVOK_HKMEMORYRESOURCECONTAINER_H
#define HAVOK_HKMEMORYRESOURCECONTAINER_H

#include "havok/hkResourceHandle.h"
#include "havok/hkRefVariant.h"

// hkMemoryResourceHandle (0x1C bytes)
class hkMemoryResourceHandle : public hkResourceHandle {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    struct ExternalLink {
        hkStringPtr m_memberName;   // +0x0
        hkStringPtr m_externalId;   // +0x4
    };
    hkMemoryResourceHandle();                                // fn_82E15528
    hkMemoryResourceHandle(hkFinishLoadedObjectFlag f)       // fn_82E15590
        : hkResourceHandle(f), m_variant(f), m_name(f), m_references(f) {}
    virtual ~hkMemoryResourceHandle();                       // fn_82E155D0

    hkRefVariant m_variant;                // +0x8
    hkStringPtr m_name;                    // +0xC
    hkArray<ExternalLink> m_references;    // +0x10
};

// hkMemoryResourceContainer (0x28 bytes)
class hkMemoryResourceContainer : public hkResourceContainer {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkMemoryResourceContainer(const char *name);             // fn_82E15738
    hkMemoryResourceContainer(hkFinishLoadedObjectFlag f)
        : hkResourceContainer(f), m_name(f), m_resourceHandles(f), m_children(f) {}
    virtual ~hkMemoryResourceContainer();                    // fn_82E15830

    hkStringPtr m_name;                                                   // +0x8
    hkMemoryResourceContainer *m_parent;                                  // +0xC (not owned)
    hkArray<hkRefPtr<hkMemoryResourceHandle> > m_resourceHandles;         // +0x10
    hkArray<hkRefPtr<hkMemoryResourceContainer> > m_children;             // +0x1C
};

#endif
