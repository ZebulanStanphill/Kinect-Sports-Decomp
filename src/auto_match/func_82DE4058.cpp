// hkpDisplayBindingData::RigidBody's scalar deleting destructor; the implicit destructor is inlined (m_displayObjectPtr, then m_rigidBody).
#include "havok/hkBase.h"
#include "havok/hkpDisplayBindingData.h"

void emitVtable_82DE4058(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpDisplayBindingData::RigidBody(f); }
