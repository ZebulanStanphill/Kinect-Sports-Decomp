// hkMeshShape (Common/GeometryUtilities/Mesh/hkMeshShape.h), 8 bytes: the interface of a renderable mesh made of
// sections. The size, the parent (hkReferencedObject) and the absence of members are the game's hkClass
// (initialiser 8312CBC0); the game has no vtable of its own for it (??_R3hkMeshShape@@8 only).
//
// Its five virtual functions are placed by ??_7hkMemoryMeshShape@@6B@ (8 slots): +0xC returns the section count
// (82D070C0), +0x10 locks a section (82D070C8), +0x14 unlocks it (empty, 82D070B8), +0x18 returns the name
// (82D07010), +0x1C is the shared empty function (82BA02A8, not overridden). The names and parameter types follow
// Havok's header; the first three are pure there and are declared as plain virtuals here, so that a unit can
// build a subclass without declaring them (this changes only the unit's own copy of the vtable).
#ifndef HAVOK_HKMESHSHAPE_H
#define HAVOK_HKMESHSHAPE_H

#include "havok/hkBase.h"

struct hkMeshSection;

class hkMeshShape : public hkReferencedObject {
public:
    hkMeshShape(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}

    virtual int getNumSections() const;                                                         // +0xC
    virtual void lockSection(int sectionIndex, hkUint8 accessFlags, hkMeshSection &sectionOut) const;   // +0x10
    virtual void unlockSection(const hkMeshSection &section) const;                             // +0x14
    virtual const char *getName() const;                                                        // +0x18
    virtual void setName(const char *name);                                                     // +0x1C
};

#endif
