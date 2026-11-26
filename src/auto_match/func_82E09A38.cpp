// hkDefaultBuiltinTypeRegistry::reinitialize (vtable slot 7): replaces the three registry singletons with new ones, then init(). The registry constructors called are fn_82E095E0 and fn_82E09800.
#include "havok/hkBase.h"
#include "havok/hkDefaultBuiltinTypeRegistry.h"
#include "havok/hkVtableClassRegistry.h"
#include "havok/hkTypeInfoRegistry.h"
#include "havok/hkDefaultClassNameRegistry.h"

void hkDefaultBuiltinTypeRegistry::reinitialize()
{
    hkDefaultClassNameRegistry::replaceInstance(new hkDefaultClassNameRegistry());
    hkTypeInfoRegistry::replaceInstance(new hkTypeInfoRegistry());
    hkVtableClassRegistry::replaceInstance(new hkVtableClassRegistry());
    init();
}
