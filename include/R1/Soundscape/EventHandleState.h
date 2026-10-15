// States of an R1::Soundscape event handle.
//
// Class names and the inheritance come from RTTI. Method names are placeholders
// named after their vtable offset; parameters and return types are inferred
// from the code.

#ifndef R1_SOUNDSCAPE_EVENTHANDLESTATE_H
#define R1_SOUNDSCAPE_EVENTHANDLESTATE_H

#include "R1/Soundscape/Heap.h"
#include "R1/Soundscape/Singleton.h"

namespace R1 {
namespace Soundscape {

class EventHandleContext_c;

// EventHandleContext_c forwards slots 0x00 to 0x0C of EventHandle_i to these.
class EventHandleState_i {
public:
    virtual unsigned int vf00(EventHandleContext_c *context) = 0;
    virtual bool vf04(EventHandleContext_c *context) = 0;
    // Play position; EventHandle_PLAYING_c reads it from Wwise.
    virtual float vf08(EventHandleContext_c *context) = 0;
    virtual bool vf0C(EventHandleContext_c *context) = 0;
    virtual ~EventHandleState_i() {}
    virtual unsigned int vf14() = 0;
};

class EventHandleState_c : public EventHandleState_i {
public:
    // GetInstance and the states' deleting destructor use these operators, but
    // which class declares them is unknown.
    R1_SOUNDSCAPE_HEAP_OPERATORS
    virtual unsigned int vf14();
};

// Each state is a singleton that holds no data.
class EventHandle_PLAYING_c : public EventHandleState_c,
                              public Singleton_c<EventHandle_PLAYING_c> {
public:
    virtual unsigned int vf00(EventHandleContext_c *context);
    virtual bool vf04(EventHandleContext_c *context);
    virtual float vf08(EventHandleContext_c *context);
    virtual bool vf0C(EventHandleContext_c *context);
};

class EventHandle_STOPPED_c : public EventHandleState_c,
                              public Singleton_c<EventHandle_STOPPED_c> {
public:
    virtual unsigned int vf00(EventHandleContext_c *context);
    virtual bool vf04(EventHandleContext_c *context);
    virtual float vf08(EventHandleContext_c *context);
    virtual bool vf0C(EventHandleContext_c *context);
};

class EventHandle_FAILED_TO_PLAY_c : public EventHandleState_c,
                                     public Singleton_c<EventHandle_FAILED_TO_PLAY_c> {
public:
    virtual unsigned int vf00(EventHandleContext_c *context);
    virtual bool vf04(EventHandleContext_c *context);
    virtual float vf08(EventHandleContext_c *context);
    virtual bool vf0C(EventHandleContext_c *context);
};

class EventHandle_EMITTER_INVALIDATED_c
    : public EventHandleState_c,
      public Singleton_c<EventHandle_EMITTER_INVALIDATED_c> {
public:
    virtual unsigned int vf00(EventHandleContext_c *context);
    virtual bool vf04(EventHandleContext_c *context);
    virtual float vf08(EventHandleContext_c *context);
    virtual bool vf0C(EventHandleContext_c *context);
};

} // namespace Soundscape
} // namespace R1

#endif
