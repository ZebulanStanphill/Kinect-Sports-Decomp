typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Listener_82DF13F0 Listener_82DF13F0;

typedef struct ListenerVtable_82DF13F0 {
    void *pad[5];
    void (*Notify)(Listener_82DF13F0 *, const __vector4 *, const __vector4 *);
} ListenerVtable_82DF13F0;

struct Listener_82DF13F0 {
    ListenerVtable_82DF13F0 *vtable;
};

typedef struct State_82DF13F0 {
    char pad0[0x14];
    Listener_82DF13F0 **listeners;
    int listenerCount;
    char pad1C[8];
    int count;
    int field28;
    int capacity;
} State_82DF13F0;

typedef struct Model_82DF13F0 {
    char pad0[0x120];
    __vector4 position;
} Model_82DF13F0;

typedef struct Transform_82DF13F0 {
    __vector4 axes[3];
    __vector4 position;
} Transform_82DF13F0;

extern void fn_82DF1108(State_82DF13F0 *, Transform_82DF13F0 *, Model_82DF13F0 *, void *);
extern void fn_82DF1328(State_82DF13F0 *, Transform_82DF13F0 *, Model_82DF13F0 *, void *);
extern void *fn_82DF1050(State_82DF13F0 *, int);
extern void fn_82DF0E70(State_82DF13F0 *, float, Transform_82DF13F0 *, Model_82DF13F0 *);

void fn_82DF13F0(State_82DF13F0 *self, float step, void *context, Model_82DF13F0 *model,
                 Transform_82DF13F0 *transform, unsigned char reset, unsigned char update)
{
    int i;
    __vector4 firstPosition;
    __vector4 position;
    __vector4 previous;
    __vector4 finalPosition;

    if (reset) {
        fn_82DF1108(self, transform, model, context);
        firstPosition = model->position;
        for (i = 0; i < self->listenerCount; ++i) {
            Listener_82DF13F0 *listener = self->listeners[i];
            listener->vtable->Notify(listener, &firstPosition, 0);
        }
    } else if (update) {
        if (self->count != self->capacity) {
            fn_82DF1328(self, transform, model, context);
            previous = transform->position;
            position = model->position;
            for (i = 0; i < self->listenerCount; ++i) {
                Listener_82DF13F0 *listener = self->listeners[i];
                listener->vtable->Notify(listener, &previous, &position);
            }
        } else {
            if (self->count != 0)
                fn_82DF1050(self, 0);
            finalPosition = model->position;
            for (i = 0; i < self->listenerCount; ++i) {
                Listener_82DF13F0 *listener = self->listeners[i];
                listener->vtable->Notify(listener, &finalPosition, 0);
            }
        }
    }
    fn_82DF0E70(self, step, transform, model);
}
