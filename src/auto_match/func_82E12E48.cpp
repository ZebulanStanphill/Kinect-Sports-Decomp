// hkPackfileReader's scalar deleting destructor (slot 0 of ??_7hkPackfileReader@@6B@): the destructor out of
// line (??1hkPackfileReader@@UAA@XZ, 82E12A48), then the class allocator's free of m_memSize bytes. The
// function at the end only makes the compiler emit the vtable.
#include "havok/hkPackfileReader.h"

inline void *operator new(unsigned int, void *p) { return p; }

void emitVtable_82E12E48(void *p, const hkPackfileReader *q) { new (p) hkPackfileReader(*q); }
