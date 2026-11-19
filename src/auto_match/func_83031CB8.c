typedef struct Message_83031CB8 Message_83031CB8;

typedef struct State_83031CB8 {
    int a;        /* 0x00 */
    int b;        /* 0x04 */
    void *handle; /* 0x08 */
    int c;        /* 0x0c */
    void *ref;    /* 0x10 */
} State_83031CB8;

typedef struct Source_83031CB8 {
    char pad00[0x10];
    unsigned int id; /* 0x10 */
} Source_83031CB8;

struct Message_83031CB8 {
    int type; /* 0x00 */
    char pad04[0x78 - 0x04];
    Source_83031CB8 *source; /* 0x78 */
    char pad7c[0x88 - 0x7c];
};

typedef struct Handler_83031CB8 Handler_83031CB8;

typedef struct HandlerVtbl_83031CB8 {
    void *slots[6];
    int (*Handle)(Handler_83031CB8 *self, Message_83031CB8 *message); /* 0x18 */
} HandlerVtbl_83031CB8;

struct Handler_83031CB8 {
    HandlerVtbl_83031CB8 *vtbl;
};

typedef struct Entry_83031CB8 {
    int key;                   /* 0x00 */
    Handler_83031CB8 *handler; /* 0x04 */
} Entry_83031CB8;

typedef struct Guard_83031CB8 {
    void *ref; /* 0x00 */
} Guard_83031CB8;

typedef struct Dispatcher_83031CB8 {
    char pad00[0x7c];
    Entry_83031CB8 *begin; /* 0x7c */
    Entry_83031CB8 *end;   /* 0x80 */
} Dispatcher_83031CB8;

extern Guard_83031CB8 *fn_83033C00(Guard_83031CB8 *guard, Message_83031CB8 *message,
                                   Dispatcher_83031CB8 *self);
extern State_83031CB8 *fn_830339D8(State_83031CB8 *state, Source_83031CB8 *source);
extern void *fn_83033C70(Dispatcher_83031CB8 *self, unsigned int id);
extern void fn_83032B08(void *ref);
extern void fn_83032D88(void *ref);
extern void *fn_83032B40(void);
extern int fn_83033B60(Dispatcher_83031CB8 *self, State_83031CB8 *state, Message_83031CB8 *message,
                       Guard_83031CB8 *guard);
extern void fn_83033910(State_83031CB8 *state);
extern int fn_83033DC8(Dispatcher_83031CB8 *self, Message_83031CB8 *message);
extern int fn_83033D28(Dispatcher_83031CB8 *self, void *ref);

int fn_83031CB8(Dispatcher_83031CB8 *self, Message_83031CB8 *message)
{
    unsigned char first = message->type == 1;
    int result = 1;
    Guard_83031CB8 guard;
    State_83031CB8 state;
    Message_83031CB8 copy;
    Entry_83031CB8 *entry;
    Entry_83031CB8 *end;
    void *ref;
    void *old;
    unsigned int count;
    unsigned int index;

    fn_83033C00(&guard, message, self);
    /* Read but never used: the original loads self->end here before the loop (presumably for a
       check compiled out of this build). */
    end = self->end;
    entry = self->begin;
    index = 0;
    count = self->end - self->begin;
    if (entry != self->end) {
        do {
            Handler_83031CB8 *handler = entry->handler;

            copy = *message;
            if (first == 0) {
                result = handler->vtbl->Handle(handler, &copy);
            } else {
                fn_830339D8(&state, copy.source);
                if (count == 1) {
                    ref = fn_83033C70(self, copy.source->id);
                    if (ref != 0)
                        fn_83032B08(ref);
                    old = state.ref;
                    state.ref = ref;
                    if (old != 0)
                        fn_83032D88(old);
                    copy.source = (Source_83031CB8 *)&state;
                    result = handler->vtbl->Handle(handler, &copy);
                } else {
                    ref = fn_83032B40();
                    old = state.ref;
                    state.ref = ref;
                    if (old != 0)
                        fn_83032D88(old);
                    result = state.ref != 0 ? fn_83033B60(self, &state, &copy, &guard) : 0x34;
                    if (result == 1) {
                        copy.source = (Source_83031CB8 *)&state;
                        result = handler->vtbl->Handle(handler, &copy);
                    }
                }
                fn_83033910(&state);
            }
            if (result != 1)
                break;
            entry++;
            index++;
        } while (entry != self->end);
    }
    if (first) {
        if (index == 0)
            result = fn_83033DC8(self, message);
        else if (guard.ref != 0)
            result = fn_83033D28(self, guard.ref);
        else
            return result;
    }
    if (guard.ref != 0)
        fn_83032D88(guard.ref);
    return result;
}
