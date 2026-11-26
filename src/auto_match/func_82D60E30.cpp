// hkpMultiRayConvexAgent::~hkpMultiRayConvexAgent, the implicit destructor, emitted out of line
// (??1hkpMultiRayConvexAgent@@UAA@XZ): it destroys the contact info array. The function at the end only makes
// the compiler emit the vtable (and with it the destructor).
#include "havok/hkpMultiRayConvexAgent.h"

// The header's constructor is out of line, so the implicit copy constructor makes the compiler emit the vtable.
void emitVtable_82D60E30(void *p, const void *q) { new (p) hkpMultiRayConvexAgent(*(const hkpMultiRayConvexAgent *)q); }
