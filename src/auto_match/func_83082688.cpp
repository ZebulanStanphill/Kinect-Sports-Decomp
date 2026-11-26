// The singleton creation function for hkTypeInfoRegistry (HK_SINGLETON_IMPLEMENTATION, static in Havok; its hkSingletonInitNode lbl_831BCCE0 points to it): new hkTypeInfoRegistry. The function name is a guess.
#include "havok/hkBase.h"
#include "havok/hkTypeInfoRegistry.h"

hkReferencedObject *HK_CALL createhkTypeInfoRegistry() { return new hkTypeInfoRegistry(); }
