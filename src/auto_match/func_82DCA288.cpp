// hkpMoppCode scalar deleting destructor ??_GhkpMoppCode@@UAAPAXI@Z: calls the out-of-line ~hkpMoppCode below (fn_82DCA208, ??1hkpMoppCode@@UAA@XZ), then frees through the class allocator. The deleting destructor is emitted with the vtable.
// hkpMoppCode::~hkpMoppCode (Physics/Collide/Shape/Compound/Tree/Mopp/hkpMoppCode.h): an empty user-written
// destructor, so the class vtable is stored first; then the m_data array (+0x20) is destroyed.
#include "havok/hkBase.h"
#include "havok/hkpMoppCode.h"

hkpMoppCode::~hkpMoppCode()
{
}
