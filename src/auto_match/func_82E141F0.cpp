// The singleton creation function for hkVersionRegistry (HK_SINGLETON_IMPLEMENTATION, static in Havok; its hkSingletonInitNode points to it): new hkVersionRegistry, whose constructor is out of line. The function name is a guess.
#include "havok/hkBase.h"
#include "havok/hkVersionRegistry.h"

hkReferencedObject *HK_CALL createhkVersionRegistry() { return new hkVersionRegistry(); }
