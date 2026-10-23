// hkBaseObject (Common/Base/Object/hkBaseObject.h): root of Havok's virtual
// classes. Its vtable ??_7hkBaseObject@@6B@ has a single slot, the scalar
// deleting destructor ??_GhkBaseObject@@UAAPAXI@Z (fn_8253C5E8).
//
// Every inlined Havok destructor ends by storing this vtable (the derived
// classes' own vtable stores in between are dead and removed).
#ifndef HAVOK_HKBASEOBJECT_H
#define HAVOK_HKBASEOBJECT_H
#include "havok/hkBaseTypes.h"

// The game's global operator delete; it keeps its fn_ name because Matching C
// units call it.
extern "C" void fn_8265CA20(void *p);

class hkBaseObject {
public:
    virtual ~hkBaseObject() {}

    // hkBaseObject has no class allocator, so deleting one goes to the global
    // operator delete. Declaring it here as an inline forward to fn_8265CA20
    // makes the compiler-generated deleting destructors call fn_8265CA20
    // instead of ??3@YAXPAX@Z. Classes that declare a Havok class allocator
    // (hkReferencedObject and its subclasses) hide it with their own.
    static void operator delete(void *p) { fn_8265CA20(p); }
};

#endif
