// R1::Soundscape::ReverbEntry_c: a reverb (aux bus) named by an AudioVariant_c,
// with a flag and a gain. The class name comes from RTTI (no base class); field
// names are placeholders. Allocated from the Soundscape heap (its deleting
// destructor frees there).

#ifndef R1_SOUNDSCAPE_REVERBENTRY_H
#define R1_SOUNDSCAPE_REVERBENTRY_H

#include "R1/Soundscape/AudioVariant.h"
#include "R1/Soundscape/Heap.h"

namespace R1 {
namespace Soundscape {

class ReverbEntry_c {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS

    // fn_82877938 (its caller, func_82878010, is still C).
    __forceinline ReverbEntry_c(const AudioVariant_c &v, unsigned char f, float g) : variant(v)
    {
        gain = g;
        flag = f;
    }
    virtual ~ReverbEntry_c();

    AudioVariant_c variant;
    unsigned char flag;
    float gain;
};

} // namespace Soundscape
} // namespace R1

#endif
