/* Starts a catch: the side (-1..1) and height (0..1) of the player relative to the catcher, the
   catch kind from the catcher's state and the player's height, and the hand from the throw
   flags. */

#include "xdk/vectorintrinsics.h"

typedef struct String_822DFE60 {
    char data[0x1c];
} String_822DFE60;

typedef struct SharedPtr_822DFE60 {
    void *px; /* 0x0 */
    int *rep; /* 0x4 */
} SharedPtr_822DFE60;

typedef struct Player_822DFE60 {
    char pad000[0x20];
    __vector4 position; /* 0x20 */
} Player_822DFE60;

typedef struct Config_822DFE60 {
    char pad000[0xa4];
    float reachScale; /* 0x0a4 */
    char pad0A8[0x274 - 0xa8];
    float scale; /* 0x274 */
    char pad278[0x8bc - 0x278];
    float reach; /* 0x8bc */
} Config_822DFE60;

typedef struct State_822DFE60 {
    char pad000[0x14];
    Config_822DFE60 *config; /* 0x014 */
    char pad018[0x274 - 0x18];
    int busy; /* 0x274 */
    char pad278[0x340 - 0x278];
    int pending; /* 0x340 */
} State_822DFE60;

typedef struct Self_822DFE60 {
    char pad00[0x14];
    State_822DFE60 *state; /* 0x14 */
} Self_822DFE60;

typedef struct Tuning_822DFE60 {
    char pad000[0xa0];
    float lowCatchMin; /* 0x0a0 */
    float lowCatchMax; /* 0x0a4 */
    char pad0A8[0x120 - 0xa8];
    float pendingCatchMin; /* 0x120 */
    float pendingCatchMax; /* 0x124 */
} Tuning_822DFE60;

extern Tuning_822DFE60 lbl_831D40A8;
extern char lbl_82196582[];

extern __vector4 *fn_822B6A58(__vector4 *out, State_822DFE60 *state, int index);
extern int fn_822CEEC8(State_822DFE60 *state);
extern int fn_822CF260(State_822DFE60 *state, int flag);
extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);
extern String_822DFE60 *fn_82230110(String_822DFE60 *s, const char *text);
extern SharedPtr_822DFE60 *fn_82365BD8(SharedPtr_822DFE60 *out, SharedPtr_822DFE60 *source);
extern void fn_822DF348(Self_822DFE60 *self, SharedPtr_822DFE60 *player, String_822DFE60 *name, int kind,
                        float side, float height, int a, int b, int c, int hand, int d);
extern void fn_822315A0(int *rep);

static __forceinline int InRange(__vector4 position, float min, float max)
{
    return position.vector4_f32[1] >= min && position.vector4_f32[1] < max;
}

void fn_822DFE60(Self_822DFE60 *self, SharedPtr_822DFE60 *player, int throwFlags)
{
    State_822DFE60 *state;
    float dx;
    float side;
    float height;
    int kind;
    int hand;

    {
        __vector4 target;
        __vector4 position;

        fn_822B6A58(&target, self->state, 0);
        position = ((Player_822DFE60 *)player->px)->position;
        state = self->state;
        if (fn_822CEEC8(state) != 0) {
            dx = position.vector4_f32[0] - target.vector4_f32[0];
        } else {
            dx = target.vector4_f32[0] - position.vector4_f32[0];
        }
        dx = dx - -1.0f >= 0.0f ? dx : -1.0f;
        side = dx - 1.0f >= 0.0f ? 1.0f : dx;
        height = fn_82539560(position.vector4_f32[1],
                             state->config->reach * state->config->scale * state->config->reachScale, 0.0f,
                             0.0f, 1.0f);
        if (state->pending != 0) {
            if (InRange(position, lbl_831D40A8.pendingCatchMin, lbl_831D40A8.pendingCatchMax)) {
                kind = 0xf;
            } else {
                kind = 0xe;
            }
        } else if (fn_822CF260(state, 0) != 0) {
            kind = self->state->busy != 0 ? 10 : 9;
        } else if (InRange(position, lbl_831D40A8.lowCatchMin, lbl_831D40A8.lowCatchMax)) {
            kind = 5;
        } else {
            kind = 3;
        }
    }
    hand = 0;
    switch (throwFlags) {
    case 1:
    case 2:
    case 8:
    case 0x10:
        hand = 2;
        break;
    case 4:
        hand = 1;
        break;
    case 0x20:
    case 0x40:
        hand = 3;
        break;
    }
    {
        SharedPtr_822DFE60 copy;
        String_822DFE60 name;

        fn_822DF348(self, fn_82365BD8(&copy, player), fn_82230110(&name, lbl_82196582), kind, side, height, 1,
                    0, 0, hand, 2);
    }
    if (player->rep != 0) {
        fn_822315A0(player->rep);
    }
}
