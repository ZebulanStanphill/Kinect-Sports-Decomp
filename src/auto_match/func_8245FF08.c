typedef struct Animator_8245FF08 {
    char pad0[0x68];
    char idleAnimations[0xc]; /* 0x68 */
    char leadAnimations[0xc]; /* 0x74 */
} Animator_8245FF08;

typedef struct Players_8245FF08 {
    char pad0[0x34];
    Animator_8245FF08 *first; /* 0x34 */
    char pad38[0x74 - 0x38];
    Animator_8245FF08 *second; /* 0x74 */
} Players_8245FF08;

typedef struct Scores_8245FF08 {
    char pad0[0x110];
    float first; /* 0x110 */
    char pad114[0x22c - 0x114];
    float second; /* 0x22c */
} Scores_8245FF08;

typedef struct Game_8245FF08 {
    char pad0[0x3c];
    Scores_8245FF08 *scores; /* 0x3c */
    char pad40[0x50 - 0x40];
    Players_8245FF08 *players; /* 0x50 */
} Game_8245FF08;

extern char lbl_831C6CAC[];
extern char lbl_831C6E00[];
extern void *fn_8246B178(void *animations, int layer, const char *name);
extern void fn_8246B2A8(Animator_8245FF08 *animator, void *animation);

static __forceinline void PlayIdle(Animator_8245FF08 *animator)
{
    fn_8246B2A8(animator, fn_8246B178(animator->idleAnimations, 3, lbl_831C6E00));
}

static __forceinline void PlayLead(Animator_8245FF08 *animator)
{
    fn_8246B2A8(animator, fn_8246B178(animator->leadAnimations, 3, lbl_831C6CAC));
}

void fn_8245FF08(Game_8245FF08 *self)
{
    Animator_8245FF08 *animator = self->players->first;

    if ((int)animator == 0 || (int)self->players->second == 0) {
        return;
    }
    if (self->scores->first == 0.0f && self->scores->second == 0.0f) {
        PlayIdle(animator);
        PlayIdle(self->players->second);
    } else if (self->scores->first > self->scores->second) {
        PlayLead(animator);
        PlayIdle(self->players->second);
    } else if (self->scores->first < self->scores->second) {
        PlayIdle(animator);
        PlayLead(self->players->second);
    } else {
        PlayLead(animator);
        PlayLead(self->players->second);
    }
}
