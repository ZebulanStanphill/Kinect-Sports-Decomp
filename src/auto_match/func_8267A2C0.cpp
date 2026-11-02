#include "Scaleform/ScaleformAllocator.h"

extern "C" void fn_82522ED8(void *block);

bool ScaleformAllocator::vf08(void *block, unsigned int, unsigned int)
{
    fn_82522ED8(block);
    return true;
}
