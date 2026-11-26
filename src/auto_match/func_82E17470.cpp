// hkChainedClassNameRegistry::~hkChainedClassNameRegistry (user-written). It keeps its fn_ name because a Matching C unit calls it, so the inline definition is expanded here.
#include "havok/hkBase.h"
#include "havok/hkBindingClassNameRegistry.h"

extern "C" void fn_82E17470(hkChainedClassNameRegistry *self)
{
    self->hkChainedClassNameRegistry::~hkChainedClassNameRegistry();
}
