// Creates the critical section at +0x10 on first use (new with hkCriticalSection's class allocator and the given
// spin count), then calls fn_82CEFB30 on the member at +0x8.
#include "havok/hkBase.h"
#include "havok/hkCriticalSection.h"

typedef struct { int pad[4]; hkCriticalSection *p10; } S_83095FB8;

extern "C" {
void fn_82CEFB30(void *);

void fn_83095FB8(S_83095FB8 *self, int param_2)
{
    if (self->p10 == 0) {
        self->p10 = new hkCriticalSection(param_2);
        fn_82CEFB30((char *)self + 8);
    }
}
}
