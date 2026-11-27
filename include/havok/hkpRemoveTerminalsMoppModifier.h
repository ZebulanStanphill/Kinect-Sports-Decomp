// hkpRemoveTerminalsMoppModifier (Physics/Collide/Shape/Compound/Tree/Mopp/Modifiers/
// hkpRemoveTerminalsMoppModifier.h), 0x1C bytes: removes the terminals of a set of shape keys from a MOPP code.
// An hkReferencedObject with hkpMoppModifier as second base (at +0x8). The size and members are the game's
// hkClass (initialiser 8312E2C8; m_tempShapesToRemove is not serialised).
//
// - The two constructors are out of line (82D4D370 from a shape container, 82D4D4F0 from an AABB), and so is the
//   destructor (82D4D580; deleting destructor 82D4D6F0).
// - The finish constructor is inline (finishLoadedObject 82D3AD48).
// - applyRemoveTerminals is out of line (82D4D1C0).
// Vtables ??_7hkpRemoveTerminalsMoppModifier@@6BhkReferencedObject@@@ and ...@@6BhkpMoppModifier@@@
// (shouldTerminalBeRemoved 82D4D268, ModifierFinished 82D4D2E0).
#ifndef HAVOK_HKPREMOVETERMINALSMOPPMODIFIER_H
#define HAVOK_HKPREMOVETERMINALSMOPPMODIFIER_H

#include "havok/hkBase.h"
#include "havok/hkpMoppModifier.h"
#include "havok/hkpShape.h"

class hkAabb;
class hkpMoppCode;

class hkpRemoveTerminalsMoppModifier : public hkReferencedObject, public hkpMoppModifier {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpRemoveTerminalsMoppModifier(const hkpMoppCode *moppCode, const hkpShapeContainer *shapeContainer,
                                   const hkArray<hkpShapeKey> &shapesToRemove);   // out of line (82D4D370)
    hkpRemoveTerminalsMoppModifier(const hkpMoppCode *moppCode, const hkAabb &aabb,
                                   const hkArray<hkpShapeKey> &shapesToRemove);   // out of line (82D4D4F0)
    hkpRemoveTerminalsMoppModifier(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag), m_removeInfo(flag) {}
    virtual ~hkpRemoveTerminalsMoppModifier();   // out of line (82D4D580)

    virtual hkBool shouldTerminalBeRemoved(unsigned int id, const hkpShapeKey *properties);
    virtual void ModifierFinished();

    void applyRemoveTerminals(hkpMoppCode *code);   // out of line (82D4D1C0)

    hkArray<hkUint32> m_removeInfo;                      // +0xC
    const hkArray<hkpShapeKey> *m_tempShapesToRemove;    // +0x18
};

#endif
