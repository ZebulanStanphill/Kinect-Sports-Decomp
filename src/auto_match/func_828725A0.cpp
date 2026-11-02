// R1::Soundscape::WwiseEmitterFactory_c default constructor: vtable, three tree containers (out-of-line
// constructor fn_82828AE8 taking the empty comparator and allocator temporaries), then a
// vector of Element_82872CE8 that reserves 30 entries.
#include <vector>

#include "R1/Soundscape/WwiseEmitterFactory.h"

// Called out of line.
template <> void std::vector<Element_82872CE8>::reserve(size_type count);

namespace R1 {
namespace Soundscape {

WwiseEmitterFactory_c::WwiseEmitterFactory_c()
{
    unk34.reserve(30);
}

} // namespace Soundscape
} // namespace R1
