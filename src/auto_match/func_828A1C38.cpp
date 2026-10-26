// Destroy an owned polymorphic object, then release its system allocation.
#include <new>
#include "game/Allocator_825089A0.h"
struct Object_828A1C38 { virtual void destroy(unsigned int flags); };
extern "C" void fn_828A1C38(Object_828A1C38 **self) {
    Object_828A1C38 *object = *self;
    if (object) {
        object->destroy(0);
        fn_825089A0()->vf28(object);
    }
}
