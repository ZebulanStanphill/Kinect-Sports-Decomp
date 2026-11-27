// hkDefaultError::isEnabled (vtable slot +0x14): the id is not in the disabled set.
#include "havok/hkBase.h"
#include "havok/hkError.h"

extern "C" int fn_82CEA280(void *map, int key, int def);   // hkMapBase<hkUlong, hkUlong>::getWithDefault

hkBool hkDefaultError::isEnabled(int id) { return fn_82CEA280(&m_disabledAssertIds, id, 0) == 0; }
