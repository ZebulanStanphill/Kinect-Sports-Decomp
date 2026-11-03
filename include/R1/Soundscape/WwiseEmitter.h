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
//   - ReverbEmitterControl_c's constructor is fn_82877F50; its members
//     fn_82877DD8 (NonMatching) and fn_828788D0 (the vector's push_back) are
//     called through extern "C" declarations.
// Emitter_i's slots are named evfXX (not vfXX) because EmitterSubject_c,
// WwiseEmitter_c's other base, already has vf00-vf0C. Their parameter types
// come from the slot functions that were converted (the context and RTPC
// forwarders, the reverb control members) and are guesses where only a
// NonMatching function (slots 0x00, 0x30, 0x34, 0x38, 0x40 and WwiseEmitter_c's
// 0x74) or a forwarder shows them; the return type is the result code (int)
// unless a function returns something else.

#ifndef R1_SOUNDSCAPE_WWISEEMITTER_H
#define R1_SOUNDSCAPE_WWISEEMITTER_H

#include "R1/Soundscape/AudioVariant.h"
#include "game/String_82230110.h"
#include "R1/Soundscape/EmitterSubject.h"
#include "R1/Soundscape/Heap.h"
#include "R1/Soundscape/WwiseEventContext.h"

extern "C" {
void *fn_82877F50(void *self);
// ReverbEmitterControl_c's member, still a C unit (it takes the control).
int fn_82877DD8(void *reverb, const void *variant);
int fn_82878E10(void *emitter, unsigned int id); // removes id from the vector at +0x7C
}

// Emitter_i's slots 0x00-0x6C, redeclared by WwiseEmitter_c and
// WwiseEmitterPositionable_c (which forwards them to its embedded emitter).
#define R1_SOUNDSCAPE_EMITTER_SLOTS \
    virtual int evf00(); \
    virtual bool evf04(); \
    virtual bool evf08(); \
    virtual int evf0C(unsigned int a); \
    virtual int evf10(unsigned int a, unsigned int b); \
    virtual int evf14(unsigned int *a); \
    virtual int evf18(unsigned int a); \
    virtual int evf1C(unsigned int a, unsigned int b); \
    virtual int evf20(); \
    virtual int evf24(unsigned int a); \
    virtual int evf28(unsigned int a, unsigned int b); \
    virtual int evf2C(unsigned int a, unsigned int b); \
    virtual int evf30(const AudioVariant_c & a, const AudioVariant_c & b); \
    virtual int evf34(const AudioVariant_c & a, AudioVariant_c *b); \
    virtual int evf38(); \
    virtual int evf3C(); \
    virtual int evf40(); \
    virtual AudioVariant_c evf44(); \
    virtual int evf48(unsigned int a); \
    virtual unsigned int evf4C(); \
    virtual int evf50(unsigned int *a); \
    virtual int evf54(unsigned char a); \
    virtual unsigned int evf58(); \
    virtual int evf5C(const AudioVariant_c & a); \
    virtual int evf60(float a); \
    virtual float evf64(); \
    virtual String_82230110 evf68(); \
    virtual int evf6C();

namespace R1 {
namespace Soundscape {

// 28 pure virtual slots and a virtual destructor (slot 0x70; its deleting
// destructor, fn_82878AF8, frees with the global operator delete).
class Emitter_i {
public:
    virtual int evf00() = 0; // registered with Wwise? (NonMatching fn_82878C80)
    virtual bool evf04() = 0;
    virtual bool evf08() = 0;
    virtual int evf0C(unsigned int a) = 0; // context vf08(a, emitter)
    virtual int evf10(unsigned int a, unsigned int b) = 0; // context vf04
    virtual int evf14(unsigned int *a) = 0; // removes *a from the vector at +0x7C, then context vf0C
    virtual int evf18(unsigned int a) = 0; // context vf10
    virtual int evf1C(unsigned int a, unsigned int b) = 0; // context vf14
    virtual int evf20() = 0; // context vf1C
    virtual int evf24(unsigned int a) = 0; // context vf18
    virtual int evf28(unsigned int a, unsigned int b) = 0; // rtpc vf00
    virtual int evf2C(unsigned int a, unsigned int b) = 0; // rtpc vf04
    virtual int evf30(const AudioVariant_c & a, const AudioVariant_c & b) = 0; // NonMatching fn_828791E8
    virtual int evf34(const AudioVariant_c & a, AudioVariant_c *b) = 0; // NonMatching fn_828792E0
    virtual int evf38() = 0; // NonMatching fn_82879100
    virtual int evf3C() = 0; // returns 0x20200000
    virtual int evf40() = 0; // NonMatching fn_82879CD8
    virtual AudioVariant_c evf44() = 0; // copy of the variant
    virtual int evf48(unsigned int a) = 0; // sets the handle at +0x54 once
    virtual unsigned int evf4C() = 0; // the handle at +0x54
    virtual int evf50(unsigned int *a) = 0; // takes the handle at +0x54
    virtual int evf54(unsigned char a) = 0; // reverb control
    virtual unsigned int evf58() = 0; // reverb control
    virtual int evf5C(const AudioVariant_c & a) = 0; // reverb control
    virtual int evf60(float a) = 0; // reverb control
    virtual float evf64() = 0; // reverb control
    virtual String_82230110 evf68() = 0; // a name
    virtual int evf6C() = 0; // returns 0x20200000
    virtual ~Emitter_i() {}
};

class __declspec(novtable) RTPCStrategy_i {
public:
    virtual int vf00(unsigned int a, unsigned int b, Emitter_i *emitter) = 0; // fn_82879508 (sets an RTPC value)
    virtual int vf04(unsigned int a, unsigned int b, Emitter_i *emitter) = 0; // fn_82879618
    virtual ~RTPCStrategy_i() {}
};

// Holds no data; its deleting destructor (fn_82878B40) frees through the
// Soundscape heap.
class WwiseEmitterRTPCStategy_c : public RTPCStrategy_i {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS
    virtual ~WwiseEmitterRTPCStategy_c() {}
    virtual int vf00(unsigned int a, unsigned int b, Emitter_i *emitter);
    virtual int vf04(unsigned int a, unsigned int b, Emitter_i *emitter);
};

// Non-virtual members are named after their addresses; unk0C is set whenever
// a setting changes (a "dirty" flag). The members return a result code.
class __declspec(novtable) ReverbEmitterControl_c {
public:
    __forceinline ReverbEmitterControl_c() { fn_82877F50(this); }
    virtual ~ReverbEmitterControl_c();

    int fn_828776A0(unsigned char a);   // sets unk04
    int fn_828776C8(float a);           // sets unk08
    float fn_828776E8();                // returns unk08
    unsigned int fn_82877FC0();         // appends an element to unk10

    unsigned char unk04;
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
    R1_SOUNDSCAPE_EMITTER_SLOTS
    virtual int evf74(float a, float b); // fn_82879410 (NonMatching): AK::SoundEngine::SetObjectObstructionAndOcclusion
    virtual int evf78();                 // returns 0x20200000

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
