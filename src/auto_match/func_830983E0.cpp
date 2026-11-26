// hkpFixedBufferRayHitCollector's scalar deleting destructor (vtable slot 1): the implicit destructor leaves hkpRayHitCollector's vtable store, then the non-virtual class allocator frees 0x1C bytes. The function at the end only makes the compiler emit the vtable.
// hkpRayHitCollector (a root interface, RTTI; its destructor is in vtable slot
// 1) and hkpFixedBufferRayHitCollector (0x1C bytes, Havok's non-virtual class
// allocator: its deleting destructor frees 0x1C bytes). The members follow the
// constructor inlined in fn_83098750/fn_8309BF18 (buffer at +0x8 and +0xC,
// capacity at +0x10, two words cleared).
#include "havok/hkBase.h"
#include "havok/hkpFixedBufferRayHitCollector.h"

void emitVtable_830983E0(void *p) { new (p) hkpFixedBufferRayHitCollector(HK_NULL, 0); }
