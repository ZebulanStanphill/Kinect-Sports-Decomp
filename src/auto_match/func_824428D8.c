#include "xdk/vectorintrinsics.h"

extern void fn_82573868(int owner, void *state);

typedef struct Child_824428D8 {
    char padding[0x1d0];
    int count;
} Child_824428D8;

typedef struct Wrapper_824428D8 {
    int child;
    char padding[0x28];
    int state;
} Wrapper_824428D8;

typedef struct Handle_824428D8 {
    int reserved;
    Wrapper_824428D8 *wrapper;
} Handle_824428D8;

typedef struct State_824428D8 {
    __vector4 position;
    char padding10[0x1c];
    unsigned char active;
    char padding2d[0xf];
    float time;
    char padding40[0x74];
    int first;
    char paddingb8[0x14];
    int second;
    char paddingd0[0xc];
    Handle_824428D8 handle;
    char paddinge4[0x58];
    char reset[4];
} State_824428D8;

typedef struct Object_824428D8 {
    int reserved;
    int *owner;
    char padding[0xc];
    State_824428D8 *state;
} Object_824428D8;

static __forceinline void Increment(int *count)
{
    *count += 1;
}

static __forceinline void ResetHandle(Handle_824428D8 *handle)
{
    int child = handle->wrapper->child;
    if (child != 0 && ((Child_824428D8 *)child)->count == 0) {
        Increment(&((Child_824428D8 *)child)->count);
    }
    handle->wrapper->state = 0;
}

void fn_824428D8(Object_824428D8 *self)
{
    self->state->active = 0;
    self->state->position = __VMXGetReg(77);
    self->state->time = 0.0f;
    self->state->first = 0;
    self->state->second = 0;
    ResetHandle(&self->state->handle);
    if (*self->owner != 0) {
        fn_82573868(*self->owner, self->state->reset);
    }
}
