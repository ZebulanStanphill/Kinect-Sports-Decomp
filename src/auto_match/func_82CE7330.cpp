// hkMemorySystem::~hkMemorySystem (Common/Base/Memory/System/hkMemorySystem.h).
// hkMemorySystem is a root class (RTTI). The function keeps its fn_ name
// because a Matching C unit (fn_82CE6B40) calls it, so the destructor is
// defined inline and expanded into an extern "C" definition.
#include "havok/hkBase.h"

class hkMemorySystem {
public:
    virtual ~hkMemorySystem() {}
};

extern "C" void fn_82CE7330(hkMemorySystem *self)
{
    self->hkMemorySystem::~hkMemorySystem();
}
