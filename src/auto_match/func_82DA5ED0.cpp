// hkpStiffSpringChainData's scalar deleting destructor ??_GhkpStiffSpringChainData@@UAAPAXI@Z
// (Physics/Dynamics/Constraint/Chain/StiffSpring/hkpStiffSpringChainData.h): calls the out-of-line
// destructor (fn_82DA5B50), then frees through the class allocator. The function at the end only makes the
// compiler emit the vtable, and with it this function.
#include "havok/hkBase.h"
#include "havok/hkpStiffSpringChainData.h"

void emitVtable_82DA5ED0(void *p, const hkpStiffSpringChainData &o) { new (p) hkpStiffSpringChainData(o); }
