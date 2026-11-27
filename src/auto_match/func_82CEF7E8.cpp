// Creates the global critical section lbl_8323B46C with a spin count of 1000 (new with hkCriticalSection's
// class allocator: the heap's blockAlloc(0x1C), then the constructor 82CEFBD0 when the block is not null).
#include "havok/hkBase.h"
#include "havok/hkCriticalSection.h"

extern "C" {
extern hkCriticalSection *lbl_8323B46C;

void fn_82CEF7E8(void)
{
    lbl_8323B46C = new hkCriticalSection(1000);
}
}
