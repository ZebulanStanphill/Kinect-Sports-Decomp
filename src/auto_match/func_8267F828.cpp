// Waits until all of several objects are signalled (fn_8267E160 tests them), with a timeout in
// milliseconds (-1: forever). The waiter list is registered with every object (fn_8267ED80) and
// removed again by S::run.
#include "game/Node_8267D248.h"

struct Object_8267F828;

struct S {
    Object_8267F828 **data; // 0x0
    unsigned int size;      // 0x4
    void run(void (*callback)(void));
};

struct Waiter_8267F828 {
    S objects;                 // 0x0
    Wrapper_8267EF68 *event;   // 0x8
    Object_8267F828 **handles; // 0xc
};

extern "C" {
struct Handles_8267F828;
void fn_8267E0E0(Handles_8267F828 *handles, Object_8267F828 **objects, unsigned int count);
unsigned char fn_8267E160(Object_8267F828 **handles, unsigned int count);
void fn_8267BE38(void *p);
Wrapper_8267EF68 *fn_8267EEE0(Wrapper_8267EF68 *w, unsigned char b, unsigned int a);
unsigned char fn_8267ED80(Waiter_8267F828 *waiter, void (*callback)(void));
unsigned char fn_8267E2B0(Wrapper_8267EF68 *event, unsigned int timeout);
unsigned __int64 fn_826933E8(void);
void fn_8267F7C0(void);
}

// A copy of the object handles, kept in place up to 32 entries (fn_8267E0E0 builds it).
struct Handles_8267F828 {
    __forceinline Handles_8267F828(Object_8267F828 **objects, unsigned int count)
    {
        fn_8267E0E0(this, objects, count);
    }

    __forceinline ~Handles_8267F828()
    {
        if (data != local) {
            fn_8267BE38(data);
        }
    }

    Object_8267F828 **data;     // 0x0
    Object_8267F828 *local[32]; // 0x4
};

// A Wrapper_8267EF68 on the stack, built by its out-of-line constructor fn_8267EEE0.
struct Event_8267F828 {
    __forceinline Event_8267F828()
    {
        fn_8267EEE0(get(), 0, 0);
    }

    __forceinline ~Event_8267F828()
    {
        get()->Wrapper_8267EF68::~Wrapper_8267EF68();
    }

    __forceinline Wrapper_8267EF68 *get()
    {
        return (Wrapper_8267EF68 *)storage;
    }

    char storage[sizeof(Wrapper_8267EF68)];
};

extern "C" unsigned char fn_8267F828(Object_8267F828 **objects, unsigned int count, unsigned int timeout)
{
    unsigned char result;
    unsigned __int64 start;
    unsigned int remaining;
    unsigned int elapsed;
    Handles_8267F828 handles(objects, count);

    if (fn_8267E160(handles.data, count)) {
        return 1;
    }
    if (timeout == 0) {
        return 0;
    }
    Event_8267F828 event;
    Waiter_8267F828 waiter;

    waiter.objects.data = objects;
    waiter.event = event.get();
    waiter.objects.size = count;
    waiter.handles = handles.data;
    if (!fn_8267ED80(&waiter, fn_8267F7C0)) {
        return 0;
    }
    if (fn_8267E160(handles.data, count)) {
        waiter.objects.run(fn_8267F7C0);
        return 1;
    }
    result = 0;
    start = 0;
    remaining = timeout;
    if (timeout != -1) {
        start = fn_826933E8();
    }
    while (fn_8267E2B0(event.get(), remaining)) {
        if (fn_8267E160(handles.data, count)) {
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
    waiter.objects.run(fn_8267F7C0);
    return result;
}
