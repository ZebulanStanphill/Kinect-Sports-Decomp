typedef struct Settings_8242BF30 {
    char pad0[0xf8];
    int allowAny; /* 0xf8 */
    char padFC[0x114 - 0xfc];
    int mode; /* 0x114 */
    char pad118[0x204 - 0x118];
    int firstPlayer; /* 0x204 */
} Settings_8242BF30;

typedef struct Stage_8242BF30 {
    char pad0[0x40];
    Settings_8242BF30 *settings; /* 0x40 */
} Stage_8242BF30;

typedef struct StageList_8242BF30 {
    char pad0[0x1c4];
    Stage_8242BF30 **stages; /* 0x1c4 */
    char pad1C8[0x1d4 - 0x1c8];
    int current; /* 0x1d4 */
} StageList_8242BF30;

typedef struct Flow_8242BF30 {
    char pad0[0x40];
    StageList_8242BF30 *list; /* 0x40 */
} Flow_8242BF30;

typedef struct Game_8242BF30 {
    char pad0[0x1c];
    Flow_8242BF30 flow; /* 0x1c */
} Game_8242BF30;

typedef struct Player_8242BF30 {
    char pad0[0x24];
    int active; /* 0x24 */
    char pad28[0x168 - 0x28];
    void *tracker; /* 0x168 */
    int tracked;   /* 0x16c */
} Player_8242BF30;

typedef struct Slot_8242BF30 {
    unsigned int *handles; /* 0x00 */
    char pad4[0x10 - 4];
    int current; /* 0x10 */
} Slot_8242BF30;

typedef struct SlotArray_8242BF30 {
    Slot_8242BF30 **data; /* 0x0 */
} SlotArray_8242BF30;

typedef struct Info_8242BF30 {
    char pad0[0x40];
    unsigned int kind; /* 0x40 */
} Info_8242BF30;

typedef struct Self_8242BF30 {
    char pad0[8];
    SlotArray_8242BF30 *slots; /* 0x08 */
    char padC[0xa0 - 0xc];
    Info_8242BF30 *info; /* 0xa0 */
    char padA4[0x174 - 0xa4];
    Game_8242BF30 *game; /* 0x174 */
} Self_8242BF30;

extern int fn_8242C410(Self_8242BF30 *self);
extern Player_8242BF30 *fn_822ABA88(unsigned int handle, int flags);
extern unsigned char fn_8288B760(void *tracker);
extern int fn_82337B90(Player_8242BF30 *player);
extern void fn_82359108(Self_8242BF30 *self, Player_8242BF30 *first, Player_8242BF30 *second, float delay,
                        void *arg);
extern void fn_82359200(Self_8242BF30 *self, float delay, void *arg);

static __forceinline Stage_8242BF30 *CurrentStage_8242BF30(Flow_8242BF30 *flow)
{
    if (flow->list->current == -1) {
        return 0;
    }
    return flow->list->stages[flow->list->current];
}

static __forceinline int IsTracked_8242BF30(Player_8242BF30 *player)
{
    if (player->tracker != 0) {
        return fn_8288B760(player->tracker);
    }
    return player->tracked;
}

void fn_8242BF30(Self_8242BF30 *self, void *arg)
{
    Stage_8242BF30 *stage = CurrentStage_8242BF30(&self->game->flow);
    unsigned int count = 0;
    Player_8242BF30 *found[2];
    int i;
    float delay;

    found[0] = 0;
    found[1] = 0;
    for (i = stage->settings->firstPlayer; i < fn_8242C410(self); i++) {
        Slot_8242BF30 *slot = self->slots->data[i];
        Player_8242BF30 *player = fn_822ABA88(slot->handles[slot->current], 0);

        if (player->active != 0 && IsTracked_8242BF30(player)) {
            if (stage->settings->allowAny != 0 || fn_82337B90(player) != 0) {
                found[count] = player;
                count++;
            }
            if (count == 2) {
                break;
            }
        }
    }
    delay = 0.0f;
    if (stage->settings->mode == 4 || stage->settings->mode == 5) {
        delay = 0.3f;
    }
    if ((int)self->info != 0 && self->info->kind == 1) {
        fn_82359200(self, delay, arg);
    } else {
        fn_82359108(self, found[0], found[1], delay, arg);
    }
}
