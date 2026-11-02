// R1::Soundscape emitter observers and subjects: an EmitterSubject_c keeps a
// vector of observers and notifies them. WwiseEmitter_c derives from
// EmitterSubject_c (at +4, after Emitter_i) and inherits its slots 0x00 to 0x0C.
//
// Class names and the inheritance come from RTTI. Method names are placeholders
// named after their vtable offset; the comments say what they appear to do.
// Uses the Visual C++ 2010 standard library (units including it are marked
// "vc_include").

#ifndef R1_SOUNDSCAPE_EMITTERSUBJECT_H
#define R1_SOUNDSCAPE_EMITTERSUBJECT_H

#include <vector>

#include "R1/Soundscape/EmitterObserver.h"
#include "R1/Soundscape/Heap.h"

namespace R1 {
namespace Soundscape {

class EmitterSubject_i;

class EmitterSubject_i {
public:
    virtual unsigned int vf00(EmitterObserver_i &observer) = 0;
    virtual unsigned int vf04(EmitterObserver_i &observer) = 0;
    virtual unsigned int vf08() = 0;
    virtual bool vf0C() = 0;
    virtual ~EmitterSubject_i() {}
};

class EmitterSubject_c : public EmitterSubject_i {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS

    EmitterSubject_c();
    virtual ~EmitterSubject_c();
    virtual unsigned int vf00(EmitterObserver_i &observer); // adds an observer
    virtual unsigned int vf04(EmitterObserver_i &observer); // removes an observer
    virtual unsigned int vf08();                             // notifies every observer
    virtual bool vf0C();                                     // has observers

    std::vector<EmitterObserver_i *> observers;
};

} // namespace Soundscape
} // namespace R1

#endif
