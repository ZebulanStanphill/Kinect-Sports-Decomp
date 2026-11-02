// R1::Soundscape::WwiseEmitter_c's deleting destructor (??_G; it keeps its name because the adjustor
// thunk for the EmitterSubject_c vtable, func_82879DE0, can't be written in source and jumps to it).
// Runs the destructor (func_82879C20) and frees through the Soundscape heap.
#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"

extern "C" R1::Soundscape::WwiseEmitter_c *fn_82879DE8(R1::Soundscape::WwiseEmitter_c *self, unsigned int flags)
{
    self->R1::Soundscape::WwiseEmitter_c::~WwiseEmitter_c();
    if (flags & 1)
        R1::Soundscape::WwiseEmitter_c::operator delete(self);
    return self;
}
