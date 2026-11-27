#include "xdk/vectorintrinsics.h"

typedef struct Configuration_823DF4C8 {
    int value;             /* 0x00 */
    char reserved04[12];   /* 0x04 */
    __vector4 position;    /* 0x10 */
    char reserved20[0x70]; /* 0x20 */
} Configuration_823DF4C8;

typedef struct State_823DF4C8 {
    int mode;                      /* 0x00 */
    char reserved04[12];           /* 0x04 */
    Configuration_823DF4C8 first;  /* 0x10 */
    Configuration_823DF4C8 second; /* 0xa0 */
} State_823DF4C8;

typedef struct Player_823DF4C8 {
    char reserved00[0xd30];  /* 0x00 */
    __vector4 position;      /* 0xd30 */
    char reservedd40[0x40];  /* 0xd40 */
    int value;               /* 0xd80 */
    char reservedd84[0x60c]; /* 0xd84 */
    State_823DF4C8 state;    /* 0x1390 */
} Player_823DF4C8;

typedef struct Object_823DF4C8 {
    char reserved00[8];      /* 0x00 */
    Player_823DF4C8 *player; /* 0x08 */
} Object_823DF4C8;

extern int fn_8236B578(Player_823DF4C8 *);
extern void fn_8236B118(Player_823DF4C8 *, Configuration_823DF4C8 *);
extern void fn_823E3920(Player_823DF4C8 *, Configuration_823DF4C8 *);
extern void fn_823E4440(Player_823DF4C8 *, Configuration_823DF4C8 *);
extern void fn_82359698(Player_823DF4C8 *, int);

void fn_823DF4C8(Object_823DF4C8 *self)
{
    Player_823DF4C8 *player = self->player;
    if (fn_8236B578(player)) {
        State_823DF4C8 *state = &player->state;
        switch (state->mode) {
        case 8:
            player->value = state->first.value;
            player->position = state->first.position;
            fn_8236B118(player, &state->first);
            fn_823E3920(player, &state->first);
            fn_82359698(player, 8);
            break;
        case 4:
            player->value = state->second.value;
            player->position = state->second.position;
            fn_8236B118(player, &state->second);
            fn_823E4440(player, &state->second);
            fn_82359698(player, 4);
            break;
        }
    }
}
