typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vxor(__vector4 a, __vector4 b);

typedef struct Event_82D7BF58 {
    unsigned char type; /* 0x00 */
    unsigned char id;   /* 0x01 */
    char pad02[0x16];
    float time; /* 0x18 */
    char pad1c[0x4];
    __vector4 value; /* 0x20 */
    char data[0x10]; /* 0x30 */
} Event_82D7BF58;

typedef struct Dispatcher_82D7BF58 Dispatcher_82D7BF58;

typedef struct Handler_82D7BF58 {
    void (*callback)(Event_82D7BF58 *event, void *data, Dispatcher_82D7BF58 *dispatcher); /* 0x00 */
    char pad04[0x4c];
} Handler_82D7BF58;

struct Dispatcher_82D7BF58 {
    Handler_82D7BF58 *handlers; /* 0x00 */
};

static __forceinline void SetZero(__vector4 *v)
{
    *v = __vxor(*v, *v);
}

static __forceinline void Fire(Dispatcher_82D7BF58 *dispatcher, Event_82D7BF58 *event, void *data)
{
    void (*callback)(Event_82D7BF58 *, void *, Dispatcher_82D7BF58 *) =
        dispatcher->handlers[event->id + 0x49].callback;
    if (callback != 0) {
        callback(event, data, dispatcher);
    }
}

void fn_82D7BF58(Event_82D7BF58 *event, Dispatcher_82D7BF58 *dispatcher)
{
    switch (event->type) {
    case 2:
    case 6:
    case 10:
    case 14:
        Fire(dispatcher, event, &event->value);
        break;
    case 4:
    case 12:
        event->time = -1.0f;
        SetZero(&event->value);
        Fire(dispatcher, event, event->data);
        break;
    }
}
