#include "xdk/vectorintrinsics.h"

typedef struct State_82F50D88 {
    char pad[0x7e0];
    __vector4 value;
} State_82F50D88;

typedef struct Obj_82F50D88 {
    int f0;
    State_82F50D88 *state;
} Obj_82F50D88;

void fn_82F50D88(Obj_82F50D88 *self, __vector4 value)
{
    self->state->value = value;
}
