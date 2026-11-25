// hkxAttributeHolder::~hkxAttributeHolder (user-written: it stores the class vtable on entry). It keeps its fn_ name because a Matching C unit calls it, so the inline definition is expanded here.
#include "havok/hkSceneData.h"
#include "havok/hkMemoryResourceContainer.h"

extern "C" void fn_82E04A30(hkxAttributeHolder *self)
{
    self->hkxAttributeHolder::~hkxAttributeHolder();
}
