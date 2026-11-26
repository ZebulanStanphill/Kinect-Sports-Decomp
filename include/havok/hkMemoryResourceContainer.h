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
    virtual void *unknown0C() const;
    virtual const char *getName() const;
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
    hkMemoryResourceContainer(const char *name);             // fn_82E15738
    // Out of line in the game as fn_82E157A8, which keeps its fn_ name; defined
    // inline here so that the unit can expand it. When finishing, each child
    // gets this container as its parent.
    HK_FORCE_INLINE hkMemoryResourceContainer(hkFinishLoadedObjectFlag f)
        : hkResourceContainer(f), m_name(f), m_resourceHandles(f), m_children(f)
    {
        if (f.m_finishing) {
            for (int i = 0; i < m_children.getSize(); i++)
                m_children[i]->m_parent = this;
        }
    }
    virtual ~hkMemoryResourceContainer();                    // fn_82E15830
    virtual void *unknown0C() const;
    virtual const char *getName() const;
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
