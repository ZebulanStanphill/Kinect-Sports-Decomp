// Singleton_c<ListenerBias_FULL_c>::GetInstance. It keeps its fn_ name for now
// because the NonMatching WwiseListener_c constructor (func_8287B990) still
// calls it by that name; the inline GetInstance is the same code.
#include "R1/Soundscape/ListenerBias.h"

using namespace R1::Soundscape;

extern "C" ListenerBias_FULL_c *fn_82869448()
{
    return Singleton_c<ListenerBias_FULL_c>::GetInstance();
}
