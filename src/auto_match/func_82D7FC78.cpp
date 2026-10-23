// hkpSimpleShapePhantom's scalar deleting destructor: it calls the out-of-line destructor (fn_82DA2C10,
// ??1hkpSimpleShapePhantom@@UAA@XZ) and frees through the class allocator. The constructor below only
// makes the compiler emit the vtable, and with it the deleting destructor.
#include "havok/hkBase.h"

class hkpWorldObject : public hkReferencedObject {
};

class hkpPhantom : public hkpWorldObject {
};

class hkpShapePhantom : public hkpPhantom {
};

class hkpSimpleShapePhantom : public hkpShapePhantom {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkpSimpleShapePhantom() {}
    virtual ~hkpSimpleShapePhantom();
};

void emitVtable_82D7FC78(void *p) { new (p) hkpSimpleShapePhantom; }
