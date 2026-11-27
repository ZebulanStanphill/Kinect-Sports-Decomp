// The box-box agent3's data initialiser: constructs an hkpBoxBoxManifold in the agent entry's data and returns
// the end of it. It keeps its fn_ name.
#include "havok/hkpBoxBoxManifold.h"

// Placement new (declared throw(), so the result is tested before the constructor runs).
inline void *operator new(hk_size_t, void *p) throw() { return p; }

extern "C" char *fn_82D67E30(int param_1, int param_2, char *data)
{
    new (data) hkpBoxBoxManifold();
    return data + sizeof(hkpBoxBoxManifold);
}
