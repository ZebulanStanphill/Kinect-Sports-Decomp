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
    hkMemoryResourceHandle();                                // 82E15528
    hkMemoryResourceHandle(hkFinishLoadedObjectFlag f);      // 82E15590
    virtual ~hkMemoryResourceHandle();                       // 82E155D0
    virtual void *unknown0C() const;
    virtual const char *getName(hkStringBuf &buffer) const;
    virtual void setName(const char *name);
    virtual void *getObject() const;
    virtual const hkClass *getClass() const;
    virtual void setObject(void *object, const hkClass *klass);
    virtual void addExternalLink(const char *memberName, const char *externalId);
    virtual void removeExternalLink(const char *memberName);
    virtual void getExternalLinks(hkArray<Link> &linksOut);
    virtual void clearExternalLinks();
    virtual void tryToResolveLinks(hkResourceMap &map);

    hkRefVariant m_variant;                // +0x8
    hkStringPtr m_name;                    // +0xC
    hkArray<ExternalLink> m_references;    // +0x10
};

// hkMemoryResourceContainer (0x28 bytes)
class hkMemoryResourceContainer : public hkResourceContainer {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkMemoryResourceContainer(const char *name);             // 82E15738
    // When finishing, each child gets this container as its parent.
    hkMemoryResourceContainer(hkFinishLoadedObjectFlag f);   // 82E157A8
    virtual ~hkMemoryResourceContainer();                    // 82E15830
    virtual void *unknown0C() const;
    virtual const char *getName(hkStringBuf &buffer) const;
    virtual hkResourceHandle *createResource(const char *name, void *object, const hkClass *klass);
    virtual void destroyResource(hkResourceHandle *handle);
    virtual int getNumResources();
    virtual hkResourceHandle *findResourceByName(const char *name, const hkClass *klass = HK_NULL,
                                                 const hkResourceHandle *prev = HK_NULL) const;
    virtual hkResourceContainer *getParent();
    virtual hkResourceContainer *createContainer(const char *name);
    virtual void destroyContainer(hkResourceContainer *container);
    virtual int getNumContainers();
    virtual hkResourceContainer *findContainerByName(const char *name,
                                                     const hkResourceContainer *prev = HK_NULL) const;
    virtual hkResult parentTo(hkResourceContainer *newParent);
    virtual void tryToResolveLinks(hkResourceMap &map);

    hkStringPtr m_name;                                                   // +0x8
    hkMemoryResourceContainer *m_parent;                                  // +0xC (not owned)
    hkArray<hkRefPtr<hkMemoryResourceHandle> > m_resourceHandles;         // +0x10
    hkArray<hkRefPtr<hkMemoryResourceContainer> > m_children;             // +0x1C
};

#endif
