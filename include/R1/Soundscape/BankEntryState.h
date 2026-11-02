// States of an R1::Soundscape bank entry (a Wwise sound bank being loaded or
// unloaded).
//
// Class names and the inheritance come from RTTI. Method names are
// placeholders named after their vtable offset; parameters and return types are
// inferred from the code. BankEntryContext_c forwards to its current state and
// the states move it to the next one (see BankEntryContext_c::SetState).

#ifndef R1_SOUNDSCAPE_BANKENTRYSTATE_H
#define R1_SOUNDSCAPE_BANKENTRYSTATE_H

#include "R1/Soundscape/BankEntryContext.h"
#include "R1/Soundscape/Singleton.h"

extern "C" {
void *fn_8265C9E0(unsigned int size);
void fn_8265CA20(void *block);
}

namespace std {
template <class T> struct char_traits;
template <class T> class allocator;
template <class C, class Tr, class A> class basic_string;
typedef basic_string<char, char_traits<char>, allocator<char> > string;
} // namespace std

namespace R1 {
namespace Soundscape {

class BankEntryState_i {
public:
    // The states are allocated from the global heap. Which class declares these
    // operators is unknown; GetInstance and the deleting destructors use them.
    static void *operator new(unsigned int size) { return fn_8265C9E0(size); }
    static void operator delete(void *block) { fn_8265CA20(block); }

    // Reactions to a request to load (0x00), to unload (0x04) and to entering
    // the state or updating it (0x08).
    virtual void vf00(BankEntryContext_c *context) = 0;
    virtual void vf04(BankEntryContext_c *context) = 0;
    virtual void vf08(BankEntryContext_c *context) = 0;
    // The state's name, a function-local static string.
    virtual const std::string &vf0C() = 0;
    // No virtual destructor here: each state declares its own, in slot 0x10
    // (the states' deleting destructors store only their own vtable).
};

inline void BankEntryContext_c::SetState(BankEntryState_i *next)
{
    if (state != next) {
        state = next;
        next->vf08(this);
    }
}

// Each state is a singleton that holds no data.
class BankEntry_TRIGGER_LOAD_c : public BankEntryState_i, public Singleton_c<BankEntry_TRIGGER_LOAD_c> {
public:
    virtual void vf00(BankEntryContext_c *context);
    virtual void vf04(BankEntryContext_c *context);
    virtual void vf08(BankEntryContext_c *context);
    virtual const std::string &vf0C();
    virtual ~BankEntry_TRIGGER_LOAD_c() {}
};

class BankEntry_WAITING_FOR_LOAD_TO_COMPLETE_c : public BankEntryState_i, public Singleton_c<BankEntry_WAITING_FOR_LOAD_TO_COMPLETE_c> {
public:
    virtual void vf00(BankEntryContext_c *context);
    virtual void vf04(BankEntryContext_c *context);
    virtual void vf08(BankEntryContext_c *context);
    virtual const std::string &vf0C();
    virtual ~BankEntry_WAITING_FOR_LOAD_TO_COMPLETE_c() {}
};

class BankEntry_LOADED_c : public BankEntryState_i, public Singleton_c<BankEntry_LOADED_c> {
public:
    virtual void vf00(BankEntryContext_c *context);
    virtual void vf04(BankEntryContext_c *context);
    virtual void vf08(BankEntryContext_c *context);
    virtual const std::string &vf0C();
    virtual ~BankEntry_LOADED_c() {}
};

class BankEntry_LOAD_FAILED_c : public BankEntryState_i, public Singleton_c<BankEntry_LOAD_FAILED_c> {
public:
    virtual void vf00(BankEntryContext_c *context);
    virtual void vf04(BankEntryContext_c *context);
    virtual void vf08(BankEntryContext_c *context);
    virtual const std::string &vf0C();
    virtual ~BankEntry_LOAD_FAILED_c() {}
};

class BankEntry_TRIGGER_UNLOAD_c : public BankEntryState_i, public Singleton_c<BankEntry_TRIGGER_UNLOAD_c> {
public:
    virtual void vf00(BankEntryContext_c *context);
    virtual void vf04(BankEntryContext_c *context);
    virtual void vf08(BankEntryContext_c *context);
    virtual const std::string &vf0C();
    virtual ~BankEntry_TRIGGER_UNLOAD_c() {}
};

class BankEntry_WAITING_FOR_UNLOAD_TO_COMPLETE_c : public BankEntryState_i, public Singleton_c<BankEntry_WAITING_FOR_UNLOAD_TO_COMPLETE_c> {
public:
    virtual void vf00(BankEntryContext_c *context);
    virtual void vf04(BankEntryContext_c *context);
    virtual void vf08(BankEntryContext_c *context);
    virtual const std::string &vf0C();
    virtual ~BankEntry_WAITING_FOR_UNLOAD_TO_COMPLETE_c() {}
};

class BankEntry_UNLOADED_c : public BankEntryState_i, public Singleton_c<BankEntry_UNLOADED_c> {
public:
    virtual void vf00(BankEntryContext_c *context);
    virtual void vf04(BankEntryContext_c *context);
    virtual void vf08(BankEntryContext_c *context);
    virtual const std::string &vf0C();
    virtual ~BankEntry_UNLOADED_c() {}
};

class BankEntry_UNLOAD_FAILED_c : public BankEntryState_i, public Singleton_c<BankEntry_UNLOAD_FAILED_c> {
public:
    virtual void vf00(BankEntryContext_c *context);
    virtual void vf04(BankEntryContext_c *context);
    virtual void vf08(BankEntryContext_c *context);
    virtual const std::string &vf0C();
    virtual ~BankEntry_UNLOAD_FAILED_c() {}
};

} // namespace Soundscape
} // namespace R1

#endif
