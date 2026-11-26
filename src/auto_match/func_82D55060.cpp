// hkpShapeCollectionAgent::~hkpShapeCollectionAgent, the implicit destructor (Physics/Collide/Agent/
// CompoundAgent/ShapeCollection/hkpShapeCollectionAgent.h), emitted out of line: the deleting destructor
// (fn_82D55498) calls it; identical code also serves hkpMultiSphereAgent. It destroys the hkArray of
// key/agent pairs at +0xC. The function at the end only makes the compiler emit the vtable.
#include "havok/hkpShapeCollectionAgent.h"

// The header's constructor is out of line, so the implicit copy constructor makes the compiler emit the vtable.
void emitVtable_82D55060(void *p, const void *q) { new (p) hkpShapeCollectionAgent(*(const hkpShapeCollectionAgent *)q); }
