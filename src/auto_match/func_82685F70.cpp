// StateImpl_82685620 constructor. Its caller (func_82684580) is still C, so it
// keeps its fn_ name. The unit is /O1 although configured /O2.
#include "game/StateImpl_82685620.h"

extern "C" StateImpl_82685620 *fn_82685F70(StateImpl_82685620 *self, bool flag)
{
    self->StateImpl_82685620::StateImpl_82685620(flag);
    return self;
}
