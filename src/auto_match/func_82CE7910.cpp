// hkDummySingletoncreate (HK_SINGLETON_IMPLEMENTATION(hkDummySingleton)):
// the singleton registration's create function, `return new hkDummySingleton();`.
// It keeps its fn_ name (a static function in the original).
#include "havok/hkBase.h"

class hkDummySingleton : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkDummySingleton() {}
};

extern "C" hkReferencedObject *fn_82CE7910(void)
{
    return new hkDummySingleton();
}
