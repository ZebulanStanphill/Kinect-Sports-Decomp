// hkDefaultError::~hkDefaultError, the implicit destructor (Common/Base/System/Error/hkDefaultError.h): the array,
// then the pointer map. Emitted out of line because the deleting destructor (fn_82CFA4C0) calls it; the function
// at the end only makes the compiler emit the vtable; it copies an object because the header declares no inline
// constructor.
#include "havok/hkBase.h"
#include "havok/hkError.h"

void emitVtable_82CFA430(void *p, const void *q) { new (p) hkDefaultError(*(const hkDefaultError *)q); }
