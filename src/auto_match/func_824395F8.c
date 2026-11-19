typedef struct Effect_824395F8 {
    unsigned int id; /* 0x0 */
    int unused;      /* 0x4 */
    float first;     /* 0x8 */
    float second;    /* 0xc */
} Effect_824395F8;

typedef struct Player_824395F8 {
    char pad0[0x168];
    void *network; /* 0x168 */
    int local;     /* 0x16c */
} Player_824395F8;

typedef struct Target_824395F8 {
    char pad0[0xb0];
    void *effect; /* 0xb0 */
} Target_824395F8;

typedef struct Team_824395F8 {
    char pad0[0x90];
    Target_824395F8 *target; /* 0x90 */
} Team_824395F8;

typedef struct State_824395F8 {
    char pad0[0x34];
    Effect_824395F8 effects[26]; /* 0x34 */
    char pad1d4[4];
    Team_824395F8 *team; /* 0x1d8 */
    char pad1dc[0x218 - 0x1dc];
    float progress;  /* 0x218 */
    float threshold; /* 0x21c */
} State_824395F8;

typedef struct Obj_824395F8 {
    char pad0[0x40];
    State_824395F8 *state; /* 0x40 */
} Obj_824395F8;

extern Player_824395F8 *fn_8242C1B8(Team_824395F8 *team);
extern Player_824395F8 *fn_8242C298(Team_824395F8 *team);
extern int fn_8242C348(Team_824395F8 *team);
extern unsigned char fn_8288B760(void *network);
extern void fn_824BD858(Target_824395F8 *target, float first, void *effect, float second, unsigned int id,
                        int flags);

void fn_824395F8(Obj_824395F8 *self, int index, int useCopy, float value)
{
    Player_824395F8 *player;
    int enabled;
    Effect_824395F8 effect;
    Effect_824395F8 *entry;
    Target_824395F8 *target;

    player = fn_8242C1B8(self->state->team);
    if (player->network != 0) {
        enabled = fn_8288B760(player->network);
    } else {
        enabled = player->local;
    }
    if (enabled == 0) {
        if (fn_8242C348(self->state->team) == 0) {
            return;
        }
        player = fn_8242C298(self->state->team);
        if (player->network != 0) {
            enabled = fn_8288B760(player->network);
        } else {
            enabled = player->local;
        }
        if (enabled == 0) {
            return;
        }
    }
    if (self->state->progress >= self->state->threshold) {
        if (useCopy != 0) {
            effect = self->state->effects[index];
            target = self->state->team->target;
            fn_824BD858(target, value, target->effect, effect.second, effect.id, 0);
        } else {
            State_824395F8 *state = self->state;

            entry = &state->effects[index];
            target = state->team->target;
            fn_824BD858(target, entry->first, target->effect, entry->second, entry->id, 0);
        }
    }
}
