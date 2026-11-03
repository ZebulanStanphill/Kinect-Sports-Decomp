#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"

// The element of ReverbEmitterControl_c::unk10 (44 bytes: a flag, an
// AudioVariant_c at +4, a float at +0x28). Its constructor fn_828778E8 and the
// vector's push_back fn_828788D0 are still C units. fn_828778E8 also reads r4
// and f1, which this function passes through untouched from its caller
// (WwiseEmitter_c::evf58): the real signatures probably carry an
// AudioVariant_c and a float.
extern "C" {
void *fn_828778E8(void *self);
void fn_828788D0(void *vector, const void *element);
}

namespace R1 {
namespace Soundscape {

// The AudioVariant_c is kept as bytes (it has no default constructor); the
// destructor destroys it with fn_82864898 as ~AudioVariant_c() does.
struct ReverbElement_828778E8 {
    __forceinline ReverbElement_828778E8() { fn_828778E8(this); }
    __forceinline ~ReverbElement_828778E8() { fn_82864898(variant); }

    unsigned char unk00;
    int variant[9]; // AudioVariant_c (0x24 bytes)
    float unk28;
};

unsigned int ReverbEmitterControl_c::fn_82877FC0()
{
    ReverbElement_828778E8 element;
    fn_828788D0(&unk10, &element);
    unk0C = true;
    return 0x20340000;
}

} // namespace Soundscape
} // namespace R1
