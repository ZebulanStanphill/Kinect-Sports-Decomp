// hkpMoppModifier scalar deleting destructor. hkpMoppModifier is an interface with no base
// class (RTTI), so it frees through the global operator delete, fn_8265CA20.
// The function at the end only makes the compiler emit the vtable, and
// with it this function.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpMoppModifier {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpMoppModifier() {}
};

void emitVtable_82D3ACD8(hkpMoppModifier *p) { p->hkpMoppModifier::~hkpMoppModifier(); }
