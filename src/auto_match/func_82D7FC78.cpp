// hkpSimpleShapePhantom's scalar deleting destructor: it calls the out-of-line destructor (fn_82DA2C10,
// ??1hkpSimpleShapePhantom@@UAA@XZ) and frees through the class allocator. The copy below only makes the
// compiler emit the vtable, and with it the deleting destructor (the header declares no inline constructor).
#include "havok/hkBase.h"
#include "havok/hkpSimpleShapePhantom.h"

void emitVtable_82D7FC78(void *p, const void *q) { new (p) hkpSimpleShapePhantom(*(const hkpSimpleShapePhantom *)q); }
