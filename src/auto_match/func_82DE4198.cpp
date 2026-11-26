// hkpDisplayBindingData::~hkpDisplayBindingData, the implicit destructor (m_physicsSystemBindings, then m_rigidBodyBindings), emitted out of line and called by the deleting destructor (fn_82DE4320).
#include "havok/hkBase.h"
#include "havok/hkpDisplayBindingData.h"

void emitVtable_82DE4198(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpDisplayBindingData(f); }
