// R1::Soundscape::WwiseEmitter_c, a Wwise game object that plays events, and the
// Emitter_i interface it implements.
//
// Class names and the inheritance come from RTTI: WwiseEmitter_c derives from
// Emitter_i (+0) and EmitterSubject_c (+4). Method and field names are
// placeholders named after their vtable or field offset.
//
// Members whose units still define C functions under fn_ names
// are reached through inline forwarders, so this header can be used before
// those units are converted:
//   - AudioVariant_c (copy constructor, destructor): see AudioVariant.h;
//   - ReverbEmitterControl_c's constructor is fn_82877F50.
// The parameter and return types of Emitter_i's slots 0x00-0x6C are unknown
// (declared as void placeholders); fix them when the slot functions are
// converted. Emitter_i's slots are named evfXX (not vfXX) because
// EmitterSubject_c, WwiseEmitter_c's other base, already has vf00-vf0C.

#ifndef R1_SOUNDSCAPE_WWISEEMITTER_H
#define R1_SOUNDSCAPE_WWISEEMITTER_H

#include "R1/Soundscape/AudioVariant.h"
#include "R1/Soundscape/EmitterSubject.h"
#include "R1/Soundscape/Heap.h"
#include "R1/Soundscape/WwiseEventContext.h"

extern "C" void *fn_82877F50(void *self);

namespace R1 {
namespace Soundscape {

// 28 pure virtual slots and a virtual destructor (slot 0x70; its deleting
// destructor, fn_82878AF8, frees with the global operator delete).
class Emitter_i {
public:
    virtual void evf00() = 0;
    virtual void evf04() = 0;
    virtual void evf08() = 0;
    virtual void evf0C() = 0;
    virtual void evf10() = 0;
    virtual void evf14() = 0;
    virtual void evf18() = 0;
    virtual void evf1C() = 0;
    virtual void evf20() = 0;
    virtual void evf24() = 0;
    virtual void evf28() = 0;
    virtual void evf2C() = 0;
    virtual void evf30() = 0;
    virtual void evf34() = 0;
    virtual void evf38() = 0;
    virtual void evf3C() = 0;
    virtual void evf40() = 0;
    virtual void evf44() = 0;
    virtual void evf48() = 0;
    virtual void evf4C() = 0;
    virtual void evf50() = 0;
    virtual void evf54() = 0;
    virtual void evf58() = 0;
    virtual void evf5C() = 0;
    virtual void evf60() = 0;
    virtual void evf64() = 0;
    virtual void evf68() = 0;
    virtual void evf6C() = 0;
    virtual ~Emitter_i() {}
};

class RTPCStrategy_i {
public:
    virtual void vf00() = 0; // fn_82879508 (sets an RTPC value)
    virtual void vf04() = 0; // fn_82879618
    virtual ~RTPCStrategy_i() {}
};

// Holds no data; its deleting destructor (fn_82878B40) frees through the
// Soundscape heap.
class WwiseEmitterRTPCStategy_c : public RTPCStrategy_i {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS
    virtual void vf00();
    virtual void vf04();
};

class __declspec(novtable) ReverbEmitterControl_c {
public:
    __forceinline ReverbEmitterControl_c() { fn_82877F50(this); }
    virtual ~ReverbEmitterControl_c();

    bool unk04;
    float unk08;
    bool unk0C;
    // A vector (+0x10) whose element type is unknown; kept opaque so that the
    // forwarding constructor stays the only code that initialises it.
    void *unk10[4];
};

class WwiseEmitter_c : public Emitter_i, public EmitterSubject_c {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS

    // unk is not used; the factory passes its second argument through.
    WwiseEmitter_c(const AudioVariant_c &variant, unsigned int unk);
    virtual ~WwiseEmitter_c();
    virtual void evf00();
    virtual void evf04();
    virtual void evf08();
    virtual void evf0C();
    virtual void evf10();
    virtual void evf14();
    virtual void evf18();
    virtual void evf1C();
    virtual void evf20();
    virtual void evf24();
    virtual void evf28();
    virtual void evf2C();
    virtual void evf30();
    virtual void evf34();
    virtual void evf38();
    virtual void evf3C();
    virtual void evf40();
    virtual void evf44();
    virtual void evf48();
    virtual void evf4C();
    virtual void evf50();
    virtual void evf54();
    virtual void evf58();
    virtual void evf5C();
    virtual void evf60();
    virtual void evf64();
    virtual void evf68();
    virtual void evf6C();
    virtual void evf74(); // fn_82879410
    virtual void evf78(); // fn_82878D40

    AudioVariant_c variant;
    unsigned int unk3C; // Wwise game object ID (the emitter's address)
    WwiseEmitterRTPCStategy_c rtpc;
    WwiseEventContext_c context;
    void *unk50; // handle from fn_8286CD88
    unsigned int unk54;
    ReverbEmitterControl_c reverb;
    bool unk78;
    std::vector<void *> unk7C; // element type unknown
};

} // namespace Soundscape
} // namespace R1

#endif
