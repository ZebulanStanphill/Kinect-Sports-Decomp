// R1::Soundscape listener bias: how a listener's output is spread over the
// channels. ListenerBiasContext_c holds the current state; the states
// (ListenerBias_FULL_c, _LEFT_c, _RIGHT_c, _TOP_c, _BOTTOM_c) are singletons
// allocated from the Soundscape heap that fill in a constant bias.
//
// Class names and the inheritance come from RTTI. Method and field names are
// placeholders; vf00 is called by fn_8286C730 as (context, listener, &bias, 1).

#ifndef R1_SOUNDSCAPE_LISTENERBIAS_H
#define R1_SOUNDSCAPE_LISTENERBIAS_H

#include "R1/Soundscape/Heap.h"
#include "R1/Soundscape/Singleton.h"

namespace R1 {
namespace Soundscape {

class ListenerBiasContext_c;

// Six channel gains.
struct ListenerBias_t {
    float channels[6];
};

// No vtable of its own exists in the game (novtable).
class __declspec(novtable) ListenerBiasState_c {
public:
    virtual unsigned int vf00(ListenerBiasContext_c *context, unsigned int listener,
                              ListenerBias_t *output, unsigned int count) = 0;
    virtual ~ListenerBiasState_c() {}
};

class ListenerBias_FULL_c : public ListenerBiasState_c, public Singleton_c<ListenerBias_FULL_c> {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS
    virtual unsigned int vf00(ListenerBiasContext_c *context, unsigned int listener,
                              ListenerBias_t *output, unsigned int count);
    virtual ~ListenerBias_FULL_c() {}
};

class ListenerBias_LEFT_c : public ListenerBiasState_c, public Singleton_c<ListenerBias_LEFT_c> {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS
    virtual unsigned int vf00(ListenerBiasContext_c *context, unsigned int listener,
                              ListenerBias_t *output, unsigned int count);
    virtual ~ListenerBias_LEFT_c() {}
};

class ListenerBias_RIGHT_c : public ListenerBiasState_c, public Singleton_c<ListenerBias_RIGHT_c> {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS
    virtual unsigned int vf00(ListenerBiasContext_c *context, unsigned int listener,
                              ListenerBias_t *output, unsigned int count);
    virtual ~ListenerBias_RIGHT_c() {}
};

class ListenerBias_TOP_c : public ListenerBiasState_c, public Singleton_c<ListenerBias_TOP_c> {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS
    virtual unsigned int vf00(ListenerBiasContext_c *context, unsigned int listener,
                              ListenerBias_t *output, unsigned int count);
    virtual ~ListenerBias_TOP_c() {}
};

class ListenerBias_BOTTOM_c : public ListenerBiasState_c, public Singleton_c<ListenerBias_BOTTOM_c> {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS
    virtual unsigned int vf00(ListenerBiasContext_c *context, unsigned int listener,
                              ListenerBias_t *output, unsigned int count);
    virtual ~ListenerBias_BOTTOM_c() {}
};

class ListenerBiasContext_c {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS
    // Starts in ListenerBias_FULL_c.
    ListenerBiasContext_c();
    // Sets the state and registers it with the listener (fn_8286C730) unless
    // the listener is -1. The state is passed as an int (the mangled name of
    // this constructor says HH).
    ListenerBiasContext_c(int listener, int value);
    virtual ~ListenerBiasContext_c();

    ListenerBiasState_c *state;
    unsigned int unk08;
};

} // namespace Soundscape
} // namespace R1

#endif
