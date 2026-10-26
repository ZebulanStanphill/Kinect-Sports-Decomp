#include <new>
// Destroys the deque member of a tree value and frees its iterator proxy.
#include "game/Allocator_825089A0.h"
struct Value_82892428 { int key; void *proxy; };
extern "C" void fn_8288C358(void *);
extern "C" void fn_82892428(void *, Value_82892428 *value)
{
    fn_8288C358(&value->proxy);
    void *proxy = value->proxy;
    fn_825089A0()->vf28(proxy);
    value->proxy = 0;
}
