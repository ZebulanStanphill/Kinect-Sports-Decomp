// R1::Soundscape::ListenerBiasContext_c constructor (listener, state): stores
// the state, then registers it with the listener through fn_8286C730 unless the
// listener is -1.
#include "R1/Soundscape/ListenerBias.h"

extern "C" void fn_8286C730(void *self, int listener);

namespace R1 {
namespace Soundscape {

ListenerBiasContext_c::ListenerBiasContext_c(int listener, int value)
    : state((ListenerBiasState_c *)value)
{
    if (listener != -1) {
        state = (ListenerBiasState_c *)value;
        fn_8286C730(this, listener);
    }
}

} // namespace Soundscape
} // namespace R1
