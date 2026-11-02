#include <algorithm>
#include <vector>

#include "R1/Soundscape/EmitterSubject.h"

using R1::Soundscape::EmitterObserver_i;
typedef std::vector<EmitterObserver_i *> ObserverVector;

// std::vector<T *>::erase(first, last). The linker folded the identical
// instantiations for pointer elements into fn_8233EB88, which keeps its name;
// C linkage cannot return the iterator class, so its hidden result pointer is
// spelled out.
struct ObserverIterator_8233EB88 {
    EmitterObserver_i **ptr;
};
extern "C" ObserverIterator_8233EB88 *fn_8233EB88(ObserverIterator_8233EB88 *result, ObserverVector *self,
                                                  ObserverVector::const_iterator first,
                                                  ObserverVector::const_iterator last);

template <>
__forceinline ObserverVector::iterator ObserverVector::erase(const_iterator first, const_iterator last)
{
    ObserverIterator_8233EB88 result;
    return iterator(fn_8233EB88(&result, this, first, last)->ptr, this);
}

namespace R1 {
namespace Soundscape {

unsigned int EmitterSubject_c::vf04(EmitterObserver_i &observer)
{
    observers.erase(std::remove(observers.begin(), observers.end(), &observer), observers.end());
    return 0;
}

} // namespace Soundscape
} // namespace R1
