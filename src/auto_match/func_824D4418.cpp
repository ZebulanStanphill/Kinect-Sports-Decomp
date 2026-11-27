#include <deque>
#include "xdk/vectorintrinsics.h"

struct Vec_824D4418 { __vector4 v; };

struct Frame_824D4418 {
    __vector4 header[4];
    __vector4 joints[1];  /* count unknown */
};

struct Tracker_824D4418 {
    char pad0[0x110];
    std::deque<Frame_824D4418> frames;
};

extern "C" Vec_824D4418 fn_824D4418(Tracker_824D4418 *self, int joint)
{
    Vec_824D4418 r;
    __vector4 zero;
    const __vector4 *p;
    if (!self->frames.empty()) {
        p = &self->frames.begin()->joints[joint];
    } else {
        zero = __VMXGetReg(77);
        p = &zero;
    }
    r.v = *p;
    return r;
}
