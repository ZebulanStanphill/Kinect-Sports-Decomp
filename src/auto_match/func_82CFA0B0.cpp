// hkDefaultError::enableAll (vtable slot +0x18): empties the disabled set.
#include "havok/hkBase.h"
#include "havok/hkError.h"

extern "C" void fn_82CEA480(void *map);   // hkMapBase<hkUlong, hkUlong>::clear

void hkDefaultError::enableAll() { fn_82CEA480(&m_disabledAssertIds); }
