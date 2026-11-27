// Removes an object from its world (the pointer at interior+8) as contact-impulse-limit-breached listener (the
// listener base at interior-8 of an object starting at interior-16), clears the world pointer and releases the
// object. It keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"

extern "C" void fn_82DEA708(char *interior)
{
    unsigned address = (unsigned)interior;
    hkpContactImpulseLimitBreachedListener *listener =
        address - 16 ? (hkpContactImpulseLimitBreachedListener *)(address - 8) : 0;
    (*(hkpWorld **)(interior + 8))->removeContactImpulseLimitBreachedListener(listener);
    *(void **)(interior + 8) = 0;
    fn_82CE4118((hkReferencedObject *)(address - 16));
}
