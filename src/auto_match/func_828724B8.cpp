// R1::Soundscape::WwiseEmitterFactory_c destructor: the vector (the folded vector destructor
// fn_82872C80), then the three trees in reverse order (erase everything with the folded
// fn_82834D68, free the head). The deleting destructor (func_82873990) is generated with it.
#include <vector>

#include "R1/Soundscape/WwiseEmitterFactory.h"

template <>
__forceinline std::vector<Element_82872CE8>::~vector()
{
    fn_82872C80(this);
}

namespace R1 {
namespace Soundscape {

WwiseEmitterFactory_c::~WwiseEmitterFactory_c()
{
}

} // namespace Soundscape
} // namespace R1
