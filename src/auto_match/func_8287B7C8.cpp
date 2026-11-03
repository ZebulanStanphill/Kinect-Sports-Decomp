// R1::Soundscape::WwiseListener_c slot 0x14: sets the listener's bias (0 full,
// 1 left, 2 right, 3 top, 4 bottom) through its ListenerBiasContext_c at +0x60.
// WwiseListener_c is not declared yet, so this keeps its fn_ name.
#include "R1/Soundscape/ListenerBias.h"

// Singleton_c<ListenerBias_FULL_c>::GetInstance (see func_82869448.cpp).
extern "C" R1::Soundscape::ListenerBias_FULL_c *fn_82869448();

using namespace R1::Soundscape;

extern "C" unsigned int fn_8286C828(ListenerBiasContext_c *context, unsigned int listener,
                                    ListenerBiasState_c *state);

struct WwiseListener_8287B7C8 {
    char unk00[0x2C];
    unsigned int listener;
    char unk30[0x30];
    ListenerBiasContext_c bias;
};

extern "C" unsigned int fn_8287B7C8(WwiseListener_8287B7C8 *self, unsigned int bias)
{
    ListenerBiasState_c *state;
    switch (bias) {
    case 0:
        state = fn_82869448();
        break;
    case 1:
        state = Singleton_c<ListenerBias_LEFT_c>::GetInstance();
        break;
    case 2:
        state = Singleton_c<ListenerBias_RIGHT_c>::GetInstance();
        break;
    case 3:
        state = Singleton_c<ListenerBias_TOP_c>::GetInstance();
        break;
    case 4:
        state = Singleton_c<ListenerBias_BOTTOM_c>::GetInstance();
        break;
    default:
        return 0xA0250000;
    }
    return fn_8286C828(&self->bias, self->listener, state);
}
