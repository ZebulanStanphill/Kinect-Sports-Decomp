#include "Scaleform/ScaleformAllocator.h"

void ScaleformAllocator::vf00(Info *info)
{
    info->unk00 = 0x10;
    info->unk04 = 0x10;
    info->unk08 = 0x20000;
    info->unk14 = false;
}
