// Waits until an object is signalled (its slot 1 returns true), with a timeout in
// milliseconds (-1: forever). The waiter is registered with the object (fn_8267EAB8)
// and removed again by fn_8267EBA0.
#include "game/Node_8267D248.h"

class Object_8267F658
{
  public:
    virtual void vf00();
    virtual unsigned char IsSignalled();
};

struct Waiter_8267F658 {
    Object_8267F658 *object; // 0x0
    Wrapper_8267EF68 *event; // 0x4
};

extern "C" {
Wrapper_8267EF68 *fn_8267EEE0(Wrapper_8267EF68 *w, unsigned char b, unsigned int a);
unsigned char fn_8267EAB8(Object_8267F658 *object, void (*callback)(Waiter_8267F658 *),
                          Waiter_8267F658 *waiter);
void fn_8267EBA0(Object_8267F658 *object, void (*callback)(Waiter_8267F658 *), Waiter_8267F658 *waiter);
unsigned char fn_8267E2B0(Wrapper_8267EF68 *event, unsigned int timeout);
unsigned __int64 fn_826933E8(void);
void fn_8267F608(Waiter_8267F658 *waiter);
}

// A Wrapper_8267EF68 on the stack, built by its out-of-line constructor fn_8267EEE0.
struct Event_8267F658 {
    __forceinline Event_8267F658()
    {
        fn_8267EEE0(get(), 0, 0);
    }

    __forceinline ~Event_8267F658()
    {
        get()->Wrapper_8267EF68::~Wrapper_8267EF68();
    }

    __forceinline Wrapper_8267EF68 *get()
    {
        return (Wrapper_8267EF68 *)storage;
    }

    char storage[sizeof(Wrapper_8267EF68)];
};

extern "C" unsigned char fn_8267F658(Object_8267F658 *object, unsigned int timeout)
{
    unsigned char result;
    unsigned __int64 start;
    unsigned int remaining;
    unsigned int elapsed;

    if (object->IsSignalled()) {
        return 1;
    }
    if (timeout == 0) {
        return 0;
    }
    Event_8267F658 event;
    Waiter_8267F658 waiter;

    waiter.object = object;
    waiter.event = event.get();
    if (!fn_8267EAB8(object, fn_8267F608, &waiter)) {
        return 0;
    }
    if (object->IsSignalled()) {
        fn_8267EBA0(object, fn_8267F608, &waiter);
        return 1;
    }
    result = 0;
    start = 0;
    remaining = timeout;
    if (timeout != -1) {
        start = fn_826933E8();
    }
    while (fn_8267E2B0(event.get(), remaining)) {
        if (object->IsSignalled()) {
            result = 1;
            break;
        }
        if (timeout != -1) {
            elapsed = (unsigned int)fn_826933E8() - (unsigned int)start;
            if (elapsed >= timeout) {
                break;
            }
            remaining = timeout - elapsed;
        }
    }
    fn_8267EBA0(object, fn_8267F608, &waiter);
    return result;
}
