// R1::Soundscape::EmitterSubject_c destructor: frees the observers vector (inline _Tidy, freed with
// operator delete, fn_8265CA20). The deleting destructor (func_8287BF78) is generated with it.
#include <vector>

#include "R1/Soundscape/EmitterSubject.h"

extern "C" void fn_8265CA20(void *ptr);

template <>
__forceinline void std::allocator<R1::Soundscape::EmitterObserver_i *>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

namespace R1 {
namespace Soundscape {

EmitterSubject_c::~EmitterSubject_c()
{
}

} // namespace Soundscape
} // namespace R1
