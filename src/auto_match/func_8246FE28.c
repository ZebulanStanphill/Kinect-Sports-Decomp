typedef struct Slot_8246FE28 {
    unsigned int first;
} Slot_8246FE28;

typedef struct Animator_8246FE28 {
    char pad0[0x74];
    Slot_8246FE28 slots[3]; /* 0x74 */
} Animator_8246FE28;

typedef struct Rig_8246FE28 {
    char pad0[0x34];
    Animator_8246FE28 *first; /* 0x34 */
    char pad38[0x3c];
    Animator_8246FE28 *second; /* 0x74 */
} Rig_8246FE28;

typedef struct Stats_8246FE28 {
    char pad0[0x118];
    float a; /* 0x118 */
    char pad11c[0x118];
    float b; /* 0x234 */
} Stats_8246FE28;

typedef struct Scene_8246FE28 {
    char pad0[0x3c];
    Stats_8246FE28 *stats; /* 0x3c */
    char pad40[0x10];
    Rig_8246FE28 *rig; /* 0x50 */
} Scene_8246FE28;

typedef struct Movie_8246FE28 {
    int state; /* 0x0 */
    int movie; /* 0x4 */
} Movie_8246FE28;

typedef struct Meter_8246FE28 {
    char pad0[0x8];
    Scene_8246FE28 *scene; /* 0x8 */
    char padc[0x18];
    float target; /* 0x24 */
    char pad28[0x24];
    float current; /* 0x4c */
    char pad50[0xbc];
    unsigned int bothAnim; /* 0x10c */
    unsigned int redAnim;  /* 0x110 */
    unsigned int blueAnim; /* 0x114 */
    char pad118[0x300];
    void *owner; /* 0x418 */
    char pad41c[0x24];
    void *player;          /* 0x440 */
    Movie_8246FE28 *movie; /* 0x444 */
} Meter_8246FE28;

extern Slot_8246FE28 *fn_8246B178(Slot_8246FE28 *slots, unsigned int count, int *selected);
extern void fn_8246B2A8(Animator_8246FE28 *animator, Slot_8246FE28 *slot);
extern void fn_824651F0(void *player, unsigned int *anim);
extern void fn_82469038(void *owner, int state);
extern void fn_82468FC0(void *owner);
extern void fn_82672C20(int movie, const char *name, int a, int b);
extern int lbl_831C6CAC;

static __forceinline void SetMovieState(Movie_8246FE28 *movie, int state, const char *name)
{
    if (movie->state != state) {
        movie->state = state;
        fn_82672C20(movie->movie, name, 0, 0);
    }
}

void fn_8246FE28(Meter_8246FE28 *self)
{
    Rig_8246FE28 *rig = self->scene->rig;
    Animator_8246FE28 *first = rig->first;
    Animator_8246FE28 *second;
    Stats_8246FE28 *stats;

    /* the original tests both animators as signed words (cmpwi) */
    if ((int)first != 0) {
        second = rig->second;
        if ((int)second != 0) {
            stats = self->scene->stats;
            if (stats->a > stats->b) {
                fn_8246B2A8(first, fn_8246B178(first->slots, 3, &lbl_831C6CAC));
            } else {
                fn_8246B2A8(second, fn_8246B178(second->slots, 3, &lbl_831C6CAC));
            }
        }
    }
    if (self->target < self->current - 0.01f || self->target > self->current + 0.01f) {
        if (self->target > self->current) {
            fn_824651F0(self->player, &self->redAnim);
            SetMovieState(self->movie, 3, "_root.setRed");
            fn_82469038(self->owner, 1);
        } else {
            fn_824651F0(self->player, &self->blueAnim);
            SetMovieState(self->movie, 4, "_root.setBlue");
            fn_82469038(self->owner, 2);
        }
    } else {
        fn_824651F0(self->player, &self->bothAnim);
        SetMovieState(self->movie, 5, "_root.setBoth");
        fn_82468FC0(self->owner);
    }
}
