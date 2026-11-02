// Node_8267D248's Base_8267EE90 slot 0x04: true while the inner object has no handle.
#include "game/Node_8267D248.h"

unsigned char Node_8267D248::vf04()
{
    return inner->unk08 == 0;
}
