// hkBindingClassNameRegistry's scalar deleting destructor. The destructor is defined in the same file
// (hkBindingClassNameRegistry.cpp, 82E1BD08), so the deleting destructor the compiler generates inlines it;
// the base destructor stays a call.
#include "havok/hkBase.h"
#include "havok/hkBindingClassNameRegistry.h"

hkBindingClassNameRegistry::~hkBindingClassNameRegistry()
{
}
