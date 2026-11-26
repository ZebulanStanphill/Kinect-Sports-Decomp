// The singleton creation function for hkDefaultClassNameRegistry (HK_SINGLETON_IMPLEMENTATION, static in Havok; its hkSingletonInitNode points to it): new hkDefaultClassNameRegistry, whose constructor is out of line. The function name is a guess.
#include "havok/hkBase.h"
#include "havok/hkDefaultClassNameRegistry.h"

hkReferencedObject *HK_CALL createhkDefaultClassNameRegistry() { return new hkDefaultClassNameRegistry(); }
