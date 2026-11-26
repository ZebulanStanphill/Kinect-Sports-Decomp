// hkxEnum::~hkxEnum, the implicit destructor (Common/SceneData/Attributes/hkxEnum.h), emitted out of line and
// called by the deleting destructor (fn_82E02828): m_items' elements first to last (their hkStringPtr names),
// then the array. The finish constructor below only makes the compiler emit the vtable, and with it this function.
#include "havok/hkxEnum.h"

void emitVtable_82E02700(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxEnum(f); }
