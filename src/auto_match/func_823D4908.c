
/* v77 is the game's reserved zero vector, read with __VMXGetReg (/QVMXReserve). */

#include "xdk/vectorintrinsics.h"

typedef struct State_823D4908 {
    char pad0[0x10];
    int f10; /* 0x10 */
    char pad14[0x20 - 0x14];
    __vector4 v[2]; /* 0x20 */
    char pad40[0x54 - 0x40];
    int f54;   /* 0x54 */
    int f58;   /* 0x58 */
    float f5c; /* 0x5c */
    char pad60[4];
    float f64; /* 0x64 */
} State_823D4908;

typedef struct Holder_823D4908 {
    char pad0[0xf4];
    State_823D4908 *state; /* 0xf4 */
} Holder_823D4908;

typedef struct Entity_823D4908 {
    char pad0[0x24];
    Holder_823D4908 *holder; /* 0x24 */
} Entity_823D4908;

typedef struct Slot_823D4908 {
    void **items; /* 0x0 */
    int pad4[3];
    int current; /* 0x10 */
} Slot_823D4908;

typedef struct Slots_823D4908 {
    Slot_823D4908 **entries; /* 0x0 */
} Slots_823D4908;

typedef struct Inner_823D4908 {
    char pad0[0xd4];

    struct {
        int pad0[3];
        void *target; /* 0xc */
    } *view;          /* 0xd4 */
} Inner_823D4908;

typedef struct Game_823D4908 {
    char pad0[0x8];
    Slots_823D4908 *slots; /* 0x8 */
    char padc[0x4b0 - 0xc];
    Inner_823D4908 **inner; /* 0x4b0 */
    char pad4b4[0x4b8 - 0x4b4];
    void *sound; /* 0x4b8 */
    char pad4bc[0x1024 - 0x4bc];
    float f1024; /* 0x1024 */
    int f1028;   /* 0x1028 */
} Game_823D4908;

typedef struct Self_823D4908 {
    Game_823D4908 *game; /* 0x0 */
    char pad4[0xb0 - 0x4];
    int slot;  /* 0xb0 */
    int which; /* 0xb4 */
} Self_823D4908;

extern const float lbl_821954B0[0xa28 / 4];
extern void fn_8229F5A8(void *target);
extern void fn_823C4DD0(Game_823D4908 *game);
extern Entity_823D4908 *fn_822ABA88(void *item, int which);
extern void fn_823CC298(void *sound, int id);

void fn_823D4908(Self_823D4908 *self)
{
    Game_823D4908 *game;
    Slot_823D4908 *slot;
    State_823D4908 *s;
    int i;

    fn_8229F5A8((*self->game->inner)->view->target);
    game = self->game;
    game->f1028 = 2;
    game->f1024 = 0.0f;
    fn_823C4DD0(game);
    slot = self->game->slots->entries[self->slot];
    s = fn_822ABA88(slot->items[slot->current], self->which)->holder->state;
    s->f10 = 0;
    for (i = 0; i < 2; i++)
        s->v[i] = __VMXGetReg(77);
    s->f64 = 0.0f;
    s->f54 = 1;
    s->f58 = 1;
    s->f5c = lbl_821954B0[0x124 / 4];
    fn_823CC298(self->game->sound, 7);
}
