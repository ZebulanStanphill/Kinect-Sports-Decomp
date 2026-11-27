#ifndef HAVOK_HKRESOURCEHANDLE_H
#define HAVOK_HKRESOURCEHANDLE_H

#include "havok/hkBase.h"

class hkResourceMap;
class hkStringBuf;

// Resources (Common/Serialize/Resource): hkResourceBase, hkResourceHandle and
// hkResourceContainer are interfaces without data (RTTI and hkClass sizes:
// 8 bytes each).
//
// The virtual functions are placed by the vtables of the two implementations,
// ??_7hkMemoryResourceHandle@@6B@ (8214B37C, 14 slots) and
// ??_7hkMemoryResourceContainer@@6B@ (8214B3BC, 16 slots). The names are
// Havok's; what the game's functions do agrees with them where noted. getName takes
// an hkStringBuf, as in Havok: hkContainerResourceMap's constructor (82E15D28)
// builds one on the stack and passes it; the game's two implementations do
// not use it. The slot at +0xC is not identified: both classes have the folded
// function that returns 0 there (fn_82D7E470), so it is not Havok's getType,
// which would give 1 for a container.
class hkResourceBase : public hkReferencedObject {
public:
    hkResourceBase() {}
    hkResourceBase(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
    virtual void *unknown0C() const;                // +0xC
    virtual const char *getName(hkStringBuf &buffer) const;   // +0x10 (82E14738, 82E14760: m_name)
};

class hkResourceHandle : public hkResourceBase {
public:
    struct Link;
    hkResourceHandle() {}
    hkResourceHandle(hkFinishLoadedObjectFlag f) : hkResourceBase(f) {}
    virtual void setName(const char *name);                                           // +0x14 (82E14720: m_name = name)
    virtual void *getObject() const;                                                  // +0x18 (82E14758)
    virtual const hkClass *getClass() const;                                          // +0x1C (82E14728)
    virtual void setObject(void *object, const hkClass *klass);                       // +0x20 (82E14730)
    virtual void addExternalLink(const char *memberName, const char *externalId);     // +0x24 (82E148C0)
    virtual void removeExternalLink(const char *memberName);                          // +0x28 (82E14DE8)
    virtual void getExternalLinks(hkArray<Link> &linksOut);                           // +0x2C (82E14960)
    virtual void clearExternalLinks();                                                // +0x30 (82E14D98)
    virtual void tryToResolveLinks(hkResourceMap &map);                               // +0x34 (82E14EB0)
};

class hkResourceContainer : public hkResourceBase {
public:
    hkResourceContainer() {}
    hkResourceContainer(hkFinishLoadedObjectFlag f) : hkResourceBase(f) {}
    virtual hkResourceHandle *createResource(const char *name, void *object,
                                             const hkClass *klass);                   // +0x14 (82E15968)
    virtual void destroyResource(hkResourceHandle *handle);                           // +0x18 (82E150A0)
    virtual int getNumResources();                                                    // +0x1C (82610EF0)
    virtual hkResourceHandle *findResourceByName(const char *name, const hkClass *klass = HK_NULL,
                                                 const hkResourceHandle *prev = HK_NULL) const;   // +0x20 (82E15A60)
    // Returns the word at +0xC (hkMemoryResourceContainer's m_parent); the name is this project's.
    virtual hkResourceContainer *getParent();                                         // +0x24 (823AA970)
    virtual hkResourceContainer *createContainer(const char *name);                   // +0x28 (82E15C30)
    virtual void destroyContainer(hkResourceContainer *container);                    // +0x2C (82E15190)
    virtual int getNumContainers();                                                   // +0x30 (82E14770)
    // +0x34 (82E14808)
    virtual hkResourceContainer *findContainerByName(const char *name,
                                                     const hkResourceContainer *prev = HK_NULL) const;
    virtual hkResult parentTo(hkResourceContainer *newParent);                        // +0x38 (82E15258)
    virtual void tryToResolveLinks(hkResourceMap &map);                               // +0x3C (82E15478)
};

#endif
