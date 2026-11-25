typedef struct Mode_82342398 {
    char pad0[0x114];
    int kind; /* 0x114 */
} Mode_82342398;

typedef struct State_82342398 {
    char pad0[0x40];
    Mode_82342398 *mode; /* 0x40 */
} State_82342398;

typedef struct StateList_82342398 {
    char pad0[0x1c4];
    State_82342398 **states; /* 0x1c4 */
    char pad1c8[0xc];
    int current; /* 0x1d4 */
} StateList_82342398;

typedef struct Machine_82342398 {
    char pad0[0x40];
    StateList_82342398 *list; /* 0x40 */
} Machine_82342398;

typedef struct Player_82342398 {
    char pad0[0x1c];
    Machine_82342398 machine; /* 0x1c */
    char pad60[0x40];
    void *sound; /* 0xa0 */
} Player_82342398;

typedef struct Session_82342398 {
    char pad0[0x174];
    Player_82342398 *player; /* 0x174 */
} Session_82342398;

typedef struct Game_82342398 {
    char pad0[0xc];
    Session_82342398 *session; /* 0xc */
} Game_82342398;

typedef struct Root_82342398 {
    char pad0[0x1a0];
    Game_82342398 *game; /* 0x1a0 */
} Root_82342398;

typedef struct Tracker_82342398 {
    Root_82342398 *root; /* 0x00 */
    char pad4[0x28];
    int peak; /* 0x2c */
} Tracker_82342398;

typedef struct Owner_82342398 {
    char pad0[0xc];
    Tracker_82342398 *tracker; /* 0xc */
} Owner_82342398;

extern void fn_8252CAF8(void *sound, int kind, unsigned char level);

static __forceinline State_82342398 *Current_82342398(Machine_82342398 *source)
{
    Machine_82342398 *machine = source;

    if (machine->list->current == -1) {
        return 0;
    }
    return machine->list->states[machine->list->current];
}

void fn_82342398(Owner_82342398 *self, float time)
{
    Tracker_82342398 *tracker;
    Root_82342398 *root;
    Player_82342398 *player;
    int level;
    int volume;

    tracker = self->tracker;
    root = tracker->root;
    level = 0;
    if (time < 0.1f) {
        level = 2;
    } else if (time >= 0.1f && time < 1.0f) {
        level = 1;
    }
    if (level < tracker->peak) {
        level = tracker->peak;
    } else {
        tracker->peak = level;
    }
    volume = 0;
    switch ((unsigned int)level) {
    case 0:
        volume = 0;
        break;
    case 1:
        volume = 1;
        break;
    case 2:
        volume = 2;
        break;
    }
    player = root->game->session->player;
    if (Current_82342398(&player->machine)->mode->kind == 5) {
        fn_8252CAF8(player->sound, 7, volume);
    } else if (Current_82342398(&player->machine)->mode->kind == 3) {
        fn_8252CAF8(player->sound, 6, volume);
    }
}
