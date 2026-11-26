// The singleton creation function for hkVtableClassRegistry (HK_SINGLETON_IMPLEMENTATION, static in Havok; its hkSingletonInitNode points to it): new hkVtableClassRegistry, whose constructor is out of line. The function name is a guess.
#include "havok/hkBase.h"
#include "havok/hkVtableClassRegistry.h"

hkReferencedObject *HK_CALL createhkVtableClassRegistry() { return new hkVtableClassRegistry(); }
