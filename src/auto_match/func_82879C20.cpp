// R1::Soundscape::WwiseEmitter_c destructor (bases Emitter_i at +0 and EmitterSubject_c at +4):
// stops its events (fn_82878D48(true)), releases the handle at +0x50 through the manager
// returned by fn_828681F8, unregisters (fn_82879878), then the members in reverse order: the
// vector at +0x7c (inline _Tidy, freed with operator delete fn_8265CA20), the
// ReverbEmitterControl_c at +0x58, the WwiseEventContext_c at +0x44, the inline
// WwiseEmitterRTPCStategy_c at +0x40, the AudioVariant_c at +0x18, then the bases.
// The deleting destructor (func_82879DE8) and its adjustor thunk (func_82879DE0) are generated with it.
#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"

extern "C" {
void fn_8265CA20(void *ptr);
void *fn_828681F8(void);
void fn_8286C910(void *mgr, void *handle);
void fn_82879878(void *self);
}

template <>
__forceinline void std::allocator<void *>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

namespace R1 {
namespace Soundscape {

WwiseEmitter_c::~WwiseEmitter_c()
{
    fn_82878D48(true);
    if (unk50 != 0)
        fn_8286C910(fn_828681F8(), &unk50);
    fn_82879878(this);
}

} // namespace Soundscape
} // namespace R1
