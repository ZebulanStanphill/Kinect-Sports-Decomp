// hkBinaryPackfileReader's scalar deleting destructor (slot 0 of ??_7hkBinaryPackfileReader@@6B@): the
// destructor out of line (??1hkBinaryPackfileReader@@UAA@XZ, 82E0C7A0), then the class allocator's free of
// m_memSize bytes. The function at the end only makes the compiler emit the vtable.
#include "havok/hkBinaryPackfileReader.h"

inline void *operator new(unsigned int, void *p) { return p; }

void emitVtable_82E0E540(void *p, const hkBinaryPackfileReader *q) { new (p) hkBinaryPackfileReader(*q); }
