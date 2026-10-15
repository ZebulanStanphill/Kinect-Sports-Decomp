// R1::Soundscape event handles.
//
// Class names and the inheritance come from RTTI. Method and field names are
// placeholders named after their vtable or field offset; parameters and return
// types are inferred from the code.

#ifndef R1_SOUNDSCAPE_EVENTHANDLECONTEXT_H
#define R1_SOUNDSCAPE_EVENTHANDLECONTEXT_H

#include "R1/Soundscape/Heap.h"

namespace R1 {
namespace Soundscape {

class EventHandleState_i;

class EventHandle_i {
public:
    virtual unsigned int vf00() = 0;
    virtual bool vf04() = 0;
    virtual float vf08() = 0;
    virtual bool vf0C() = 0;
    // The only definition of slot 0x10 is shared with unrelated classes that
    // return 0, so whether EventHandle_i or EventHandleContext_i defines it is
    // unknown.
    virtual unsigned int vf10() { return 0; }
    // Returns an object by value; its type is unknown.
    virtual void vf14() = 0;
    virtual unsigned int vf18() = 0;
    virtual unsigned int vf1C() = 0;
};

class EventHandleContext_i : public EventHandle_i {
public:
    virtual ~EventHandleContext_i() {}
    virtual unsigned int vf24(EventHandleState_i *state) = 0;
};

// Forwards slots 0x00 to 0x0C to its current EventHandleState_i.
class EventHandleContext_c : public EventHandleContext_i {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS

    EventHandleContext_c();
    virtual ~EventHandleContext_c();
    virtual unsigned int vf00();
    virtual bool vf04();
    virtual float vf08();
    virtual bool vf0C();
    virtual void vf14();
    virtual unsigned int vf18();
    virtual unsigned int vf1C();
    virtual unsigned int vf24(EventHandleState_i *state);

    unsigned int fn_82870D90();

    unsigned int unk04[4]; // 0xDEADBEEF until set
    EventHandleState_i *state;
    char unk18[0x24]; // Constructed by fn_82864988 from the name "NOT_FINALISED"
    bool unk3C;
    bool unk3D;
    unsigned int unk40; // Wwise playing ID
    bool unk44;
    bool unk45;
    unsigned int unk48[7]; // Critical section
    float unk64;      // Last play position read by EventHandle_PLAYING_c::vf08
    bool unk68;
    float unk6C;
    float unk70;
    bool unk74;
    bool unk75;
};

} // namespace Soundscape
} // namespace R1

#endif
