// R1::Soundscape::ListenerBiasContext_c default constructor: starts in the
// ListenerBias_FULL_c state.
#include "R1/Soundscape/ListenerBias.h"

// Singleton_c<ListenerBias_FULL_c>::GetInstance (see func_82869448.cpp).
extern "C" R1::Soundscape::ListenerBias_FULL_c *fn_82869448();

namespace R1 {
namespace Soundscape {

ListenerBiasContext_c::ListenerBiasContext_c()
    : state(fn_82869448())
{
}

} // namespace Soundscape
} // namespace R1
