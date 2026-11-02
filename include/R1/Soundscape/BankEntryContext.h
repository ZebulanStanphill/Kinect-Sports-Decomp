// R1::Soundscape::BankEntryContext_c, as far as the BankEntry state classes
// need it.
//
// The class name comes from RTTI. Its layout is taken from its constructor
// (func_82875CE8) and from how the states use it; the class itself is not
// converted yet, so this only declares what the states touch.

#ifndef R1_SOUNDSCAPE_BANKENTRYCONTEXT_H
#define R1_SOUNDSCAPE_BANKENTRYCONTEXT_H

namespace R1 {
namespace Soundscape {

class BankEntryState_i;

class BankEntryContext_c {
public:
    BankEntryContext_c();
    virtual unsigned int vf00();
    virtual unsigned int vf04();
    virtual ~BankEntryContext_c();

    // Makes `next` the current state and tells it, unless it already is.
    // Inlined into every caller.
    inline void SetState(BankEntryState_i *next);

    // Whether the current state is BankEntry_LOADED_c / BankEntry_UNLOADED_c.
    bool fn_82875980();
    bool fn_828759C0();

    char unk04[0x24]; // Constructed by fn_82292780
    unsigned char unk28;
    unsigned char unk29;
    unsigned char unk2A;
    unsigned char unk2B;
    unsigned char unk2C;
    BankEntryState_i *state;
};

} // namespace Soundscape
} // namespace R1

#endif
