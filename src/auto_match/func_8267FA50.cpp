// Waits until one of several objects is signalled (fn_8267E228 returns its
// index), with a timeout in milliseconds (-1: forever). The waiter list is
// registered with every object (fn_8267ED80) and removed again by S::run.
#include "game/Node_8267D248.h"

struct Object_8267FA50;

struct S {
    Object_8267FA50 **data; // 0x0
    unsigned int size;      // 0x4
    void run(void (*callback)(void));
};

struct Waiter_8267FA50 {
    S objects;               // 0x0
    Wrapper_8267EF68 *event; // 0x8
    unsigned int unk0C;      // 0xc
};

extern "C" {
int fn_8267E228(Object_8267FA50 **objects, unsigned int count);
Wrapper_8267EF68 *fn_8267EEE0(Wrapper_8267EF68 *w, unsigned char b, unsigned int a);
unsigned char fn_8267ED80(Waiter_8267FA50 *waiter, void (*callback)(void));
unsigned char fn_8267E2B0(Wrapper_8267EF68 *event, unsigned int timeout);
unsigned __int64 fn_826933E8(void);
void fn_8267F9D0(void);
}

// A Wrapper_8267EF68 on the stack, built by its out-of-line constructor
// fn_8267EEE0 (the class's own constructor is an inline one).
struct Event_8267FA50 {
    __forceinline Event_8267FA50()
    {
        fn_8267EEE0(get(), 0, 0);
    }

    __forceinline ~Event_8267FA50()
    {
        get()->Wrapper_8267EF68::~Wrapper_8267EF68();
    }

    __forceinline Wrapper_8267EF68 *get()
    {
        return (Wrapper_8267EF68 *)storage;
    }

    char storage[sizeof(Wrapper_8267EF68)];
};

extern "C" int fn_8267FA50(Object_8267FA50 **objects, unsigned int count, unsigned int timeout)
{
    int result;
    unsigned __int64 start;
    unsigned int remaining;
    unsigned int elapsed;

    result = fn_8267E228(objects, count);
    if (result != -1) {
        return result;
    }
    if (timeout == 0) {
        return result;
    }
    Event_8267FA50 event;
    Waiter_8267FA50 waiter;

    waiter.objects.data = objects;
    waiter.objects.size = count;
    waiter.event = event.get();
    waiter.unk0C = 0;
    if (!fn_8267ED80(&waiter, fn_8267F9D0)) {
        return 0;
    }
    result = fn_8267E228(objects, count);
    if (result != -1) {
        waiter.objects.run(fn_8267F9D0);
        return result;
    }
    {
        start = 0;
        remaining = timeout;
        if (timeout != -1) {
            start = fn_826933E8();
        }
        result = fn_8267E228(objects, count);
        if (result == -1) {
            while (fn_8267E2B0(event.get(), remaining)) {
                result = fn_8267E228(objects, count);
                if (result != -1) {
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
        }
    }
    waiter.objects.run(fn_8267F9D0);
    return result;
}
