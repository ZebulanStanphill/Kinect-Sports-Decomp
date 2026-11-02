#include <vector>

#include "R1/Soundscape/EmitterSubject.h"

using R1::Soundscape::EmitterObserver_i;

// std::vector<T *>::push_back; the linker folded the identical instantiations
// for pointer elements into fn_8257A9F0, which keeps its name. The original passes
// a local copy of the pointer (an lvalue, so the const T & overload).
extern "C" void fn_8257A9F0(std::vector<EmitterObserver_i *> *self, EmitterObserver_i *const *value);

template <>
__forceinline void std::vector<EmitterObserver_i *>::push_back(EmitterObserver_i *const &value)
{
    fn_8257A9F0(this, &value);
}

namespace R1 {
namespace Soundscape {

unsigned int EmitterSubject_c::vf00(EmitterObserver_i &observer)
{
    EmitterObserver_i *p = &observer;
    observers.push_back(p);
    return 0;
}

} // namespace Soundscape
} // namespace R1
