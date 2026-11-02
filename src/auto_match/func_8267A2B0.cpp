#include "Scaleform/ScaleformAllocator.h"

extern "C" void *fn_82522E60(unsigned int size, unsigned int align);

void *ScaleformAllocator::vf04(unsigned int size, unsigned int align)
{
    return fn_82522E60(size, align);
}
