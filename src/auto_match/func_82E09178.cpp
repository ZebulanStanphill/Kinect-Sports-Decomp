// The singleton creation function for hkBuiltinTypeRegistry (its hkSingletonInitNode lbl_83186F2C points to it): a hkDefaultBuiltinTypeRegistry once the other three registries exist. The function name is a guess.
#include "havok/hkBase.h"
#include "havok/hkDefaultBuiltinTypeRegistry.h"
#include "havok/hkVtableClassRegistry.h"
#include "havok/hkTypeInfoRegistry.h"
#include "havok/hkDefaultClassNameRegistry.h"

hkReferencedObject *HK_CALL createhkBuiltinTypeRegistry()
{
    if (hkVtableClassRegistry::getInstancePtr() && hkDefaultClassNameRegistry::getInstancePtr() &&
        hkTypeInfoRegistry::getInstancePtr())
        return new hkDefaultBuiltinTypeRegistry();
    return HK_NULL;
}
