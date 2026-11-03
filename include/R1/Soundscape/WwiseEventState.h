// R1::Soundscape::WwiseEventState_c, the base of the states of a Wwise event
// (WwiseEventInitialising_c, WwiseEventRunning_c, WwiseEventPendingDestruction_c,
// WwiseEventPausedAndInitialised_c and WwiseEventPausedAndRunning_c, each also a
// Singleton_c of itself).
//
// The class name and the inheritance come from RTTI. Method names are
// placeholders named after their vtable offset. WwiseEventContext_c forwards
// its slots 0x04 to 0x1C to slots 0x00 to 0x18 here, passing itself first; the
// states return 0x200F0000 on success and 0xA00F0000 on failure. Parameter
// types are unknown unless noted.

#ifndef R1_SOUNDSCAPE_WWISEEVENTSTATE_H
#define R1_SOUNDSCAPE_WWISEEVENTSTATE_H

namespace R1 {
namespace Soundscape {

class WwiseEventContext_c;

// No vtable of its own exists in the game (novtable); the destructor is inline
// and empty (the states' deleting destructors store only their own vtable).
class __declspec(novtable) WwiseEventState_c {
public:
    virtual int vf00(WwiseEventContext_c *context, unsigned int unk1, unsigned int unk2,
                     unsigned int unk3);
    virtual int vf04(WwiseEventContext_c *context, unsigned int unk1, unsigned int unk2);
    virtual int vf08(WwiseEventContext_c *context, unsigned int unk1, unsigned int unk2);
    virtual int vf0C(WwiseEventContext_c *context, unsigned int unk1, unsigned int unk2);
    virtual int vf10(WwiseEventContext_c *context, unsigned int unk1, unsigned int unk2,
                     unsigned int unk3);
    virtual int vf14(WwiseEventContext_c *context, unsigned int unk1, unsigned int unk2);
    virtual int vf18(WwiseEventContext_c *context, unsigned int unk1);
    virtual ~WwiseEventState_c() {}
};

} // namespace Soundscape
} // namespace R1

#endif
