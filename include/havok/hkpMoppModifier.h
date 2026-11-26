// hkpMoppModifier (Physics/Collide/Shape/Compound/Tree/Mopp/Modifiers/hkpMoppModifier.h? 4 bytes): the interface
// of the objects that hkpMoppCode's modifier visits with each terminal. It has its own vtable and no
// hkBaseObject base, so deleting one uses the global operator delete (its deleting destructor 82D3ACD8).
// ??_7hkpMoppModifier@@6B@ has three slots, the last two pure; their names follow Havok's header.
// They are declared as plain (undefined) virtuals, so that a unit can construct a subclass without overriding
// them; this changes nothing in the generated code except the unit's own copy of the vtable.
#ifndef HAVOK_HKPMOPPMODIFIER_H
#define HAVOK_HKPMOPPMODIFIER_H

#include "havok/hkBase.h"
#include "havok/hkpShape.h"

class hkpMoppModifier {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpMoppModifier() {}
    virtual hkBool shouldTerminalBeRemoved(unsigned int id, const hkpShapeKey *properties);   // pure in Havok; +0x4
    virtual void ModifierFinished();                                                          // pure in Havok; +0x8
};

#endif
