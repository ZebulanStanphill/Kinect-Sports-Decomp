// hkpSimulation's scalar deleting destructor: it calls the out-of-line destructor (fn_82DA30B8,
// ??1hkpSimulation@@UAA@XZ) and frees through the class allocator. The constructor below only
// makes the compiler emit the vtable, and with it the deleting destructor.
#include "havok/hkBase.h"

class hkpSimulation : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkpSimulation() {}
    virtual ~hkpSimulation();
};

void emitVtable_82D7FD30(void *p) { new (p) hkpSimulation; }
