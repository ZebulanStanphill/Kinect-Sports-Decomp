// R1::Soundscape::WwiseErrorDecoder_c default constructor: vtable, empty
// std::string at +4, the tree at +0x20 (its constructor takes the empty
// comparator and allocator temporaries) and the flag byte at +0x30.
#include <string>

#include "R1/Soundscape/WwiseErrorDecoder.h"

R1::Soundscape::WwiseErrorDecoder_c::WwiseErrorDecoder_c()
    : m_flag(0)
{
}
