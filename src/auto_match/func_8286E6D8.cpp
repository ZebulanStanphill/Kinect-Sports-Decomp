// R1::Soundscape::WwiseBankFactory_c destructor: the two vectors, then
// BankFactory_i's vtable.
#include <vector>

#include "R1/Soundscape/BankFactory.h"

// operator delete keeps the name the C units use.
template <>
__forceinline void std::allocator<void *>::deallocate(pointer p, size_type)
{
    fn_8265CA20(p);
}

R1::Soundscape::WwiseBankFactory_c::~WwiseBankFactory_c()
{
}
