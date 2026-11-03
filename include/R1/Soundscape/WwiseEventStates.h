// The states of a Wwise event (see WwiseEventState.h). Each is a singleton
// allocated from the Soundscape heap that holds no data; they share the base's
// slots 0x00 to 0x18 and differ only in their vtable and deleting destructor.

#ifndef R1_SOUNDSCAPE_WWISEEVENTSTATES_H
#define R1_SOUNDSCAPE_WWISEEVENTSTATES_H

#include "R1/Soundscape/Heap.h"
#include "R1/Soundscape/Singleton.h"
#include "R1/Soundscape/WwiseEventState.h"

namespace R1 {
namespace Soundscape {

class WwiseEventInitialising_c : public WwiseEventState_c, public Singleton_c<WwiseEventInitialising_c> {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS
    virtual ~WwiseEventInitialising_c() {}
};

class WwiseEventRunning_c : public WwiseEventState_c, public Singleton_c<WwiseEventRunning_c> {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS
    virtual ~WwiseEventRunning_c() {}
};

class WwiseEventPendingDestruction_c : public WwiseEventState_c, public Singleton_c<WwiseEventPendingDestruction_c> {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS
    virtual ~WwiseEventPendingDestruction_c() {}
};

class WwiseEventPausedAndInitialised_c : public WwiseEventState_c, public Singleton_c<WwiseEventPausedAndInitialised_c> {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS
    virtual ~WwiseEventPausedAndInitialised_c() {}
};

class WwiseEventPausedAndRunning_c : public WwiseEventState_c, public Singleton_c<WwiseEventPausedAndRunning_c> {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS
    virtual ~WwiseEventPausedAndRunning_c() {}
};

} // namespace Soundscape
} // namespace R1

#endif
