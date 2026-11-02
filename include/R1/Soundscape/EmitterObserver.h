// R1::Soundscape emitter observers: they are told about changes to an
// EmitterSubject_i (see EmitterSubject.h).
//
// Class names and the inheritance come from RTTI. Method names are placeholders
// named after their vtable offset; the comments say what they appear to do.

#ifndef R1_SOUNDSCAPE_EMITTEROBSERVER_H
#define R1_SOUNDSCAPE_EMITTEROBSERVER_H

#include "R1/Soundscape/Heap.h"

namespace R1 {
namespace Soundscape {

class EmitterSubject_i;

class EmitterObserver_i {
public:
    // Called by EmitterSubject_c::vf08 with the subject.
    virtual unsigned int vf00(EmitterSubject_i *subject) = 0;
    virtual ~EmitterObserver_i() {}
};

class EmitterObserver_c : public EmitterObserver_i {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS

    EmitterObserver_c();
    // Ignores the notification.
    virtual unsigned int vf00(EmitterSubject_i *subject);
};

} // namespace Soundscape
} // namespace R1

#endif
