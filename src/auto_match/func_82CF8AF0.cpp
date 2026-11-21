#include "havok/hkOstream.h"

extern "C" void fn_82CF8AF0(void *self, hkOstream &os)
{
    os.printf("printStatistics is not supported on hkFreeListAllocator - use hkDebugMemory or hkPoolMemory\n");
}
