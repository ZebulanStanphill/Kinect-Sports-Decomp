typedef struct Game_82374968 Game_82374968;

typedef struct Stat_82374968 {
    char reserved00[0x20];
    float points; /* 0x20 */
} Stat_82374968;

typedef struct Side_82374968 {
    Stat_82374968 **stats; /* 0x00 */
    char reserved04[0xc];
    int current; /* 0x10 */
} Side_82374968;

typedef struct Sides_82374968 {
    Side_82374968 *home; /* 0x00 */
    Side_82374968 *away; /* 0x04 */
} Sides_82374968;

typedef struct Rules_82374968 {
    char reserved00[0x148];
    int normalTarget;   /* 0x148 */
    int tiebreakTarget; /* 0x14c */
    int pointsToWin;    /* 0x150 */
} Rules_82374968;

typedef struct Ctrl_82374968 {
    char reserved00[0x58];
    int visible; /* 0x58 */
} Ctrl_82374968;

typedef struct SubA_82374968 {
    char reserved00[0x14];
    int busy; /* 0x14 */
} SubA_82374968;

typedef struct SubB_82374968 {
    char reserved00[0xc];
    int busy; /* 0x0c */
} SubB_82374968;

typedef struct Hud_82374968 {
    char reserved00[0xc];
    Ctrl_82374968 *ctrl; /* 0x0c */
    char reserved10[4];
    SubA_82374968 *a; /* 0x14 */
    SubB_82374968 *b; /* 0x18 */
    char reserved1c[0x10];
    int textLocked; /* 0x2c */
} Hud_82374968;

typedef struct GameVtbl_82374968 {
    void *slots00[0x24];
    void (*SetState)(Game_82374968 *self, int state); /* 0x90 */
    void *slot94;
    int (*CanChange)(Game_82374968 *self, int state); /* 0x98 */
} GameVtbl_82374968;

struct Game_82374968 {
    GameVtbl_82374968 *vt; /* 0x00 */
    char reserved04[4];
    Sides_82374968 **sides; /* 0x08 */
    char reserved0c[0x48];
    unsigned int state; /* 0x54 */
    char reserved58[0x7c];
    Hud_82374968 *hud; /* 0xd4 */
    char reservedd8[0x12c];
    unsigned int mode; /* 0x204 */
    char reserved208[0x58];
    Rules_82374968 *rules; /* 0x260 */
    char reserved264[0xdc];
    int changed; /* 0x340 */
    int enabled; /* 0x344 */
    char reserved348[4];
    unsigned short text[0x100]; /* 0x34c */
    char reserved54c[0xbc];
    unsigned short customText[0x28]; /* 0x608 */
    int active;                      /* 0x658 */
    char reserved65c[0x37c];
    int paused; /* 0x9d8 */
    char reserved9dc[0x18];
    int tiebreak; /* 0x9f4 */
};

extern void fn_82F64988(unsigned short *dst, int size, const unsigned short *src);
extern int fn_82372F88(Game_82374968 *self);
extern int fn_82372ED8(Game_82374968 *self);
extern int fn_82358FD8(Game_82374968 *self, unsigned short *text, int size, const char *key);
extern int fn_82528EE0(unsigned short *buf, int size, const unsigned short *fmt, ...);
extern void fn_8229F5A8(Ctrl_82374968 *ctrl);
extern void fn_8229F618(Ctrl_82374968 *ctrl);
extern void fn_8229F688(Ctrl_82374968 *ctrl, const unsigned short *text, int flags);

static __forceinline int IsFinished(Game_82374968 *self)
{
    int finished;

    if (!self->mode)
        finished = fn_82372F88(self) != -1;
    else
        finished = self->active;
    return finished;
}

/* Hides or shows the HUD control; both tests of `hidden` are in the source. */
static __forceinline void SetHidden(Hud_82374968 *hud, int hidden)
{
    if (hidden && hud->ctrl->visible != 0)
        fn_8229F618(hud->ctrl);
    else if (!hidden && hud->ctrl->visible == 0)
        fn_8229F5A8(hud->ctrl);
}

void fn_82374968(Game_82374968 *self)
{
    unsigned short format[0x100];
    int show;

    switch (self->mode) {
    case 1:
    case 2:
        fn_82F64988(self->text, 0x100, self->customText);
        break;
    case 0:
        if (IsFinished(self)) {
            fn_82358FD8(self, self->text, 0x100, "scoreboard_finalscore");
        } else {
            int gamePoint = self->rules->pointsToWin - 1;
            Sides_82374968 *sides = *self->sides;
            Side_82374968 *home = sides->home;
            Side_82374968 *away = sides->away;

            if ((int)home->stats[home->current]->points == gamePoint &&
                (int)away->stats[away->current]->points == gamePoint) {
                fn_82358FD8(self, format, 0x100, "scoreboard_instantwin");
                fn_82528EE0(self->text, 0x100, format, self->rules->tiebreakTarget);
            } else if (fn_82372ED8(self) != 0 || self->tiebreak != 0) {
                fn_82358FD8(self, format, 0x100, "scoreboard_tiebreak");
                fn_82528EE0(self->text, 0x100, format, self->rules->tiebreakTarget);
            } else {
                fn_82358FD8(self, format, 0x100, "scoreboard_default");
                fn_82528EE0(self->text, 0x100, format, self->rules->normalTarget);
            }
        }
        break;
    }
    if (self->vt->CanChange(self, 1) != 0) {
        self->changed = 1;
        self->vt->SetState(self, 0);
    }
    show = self->enabled != 0 && self->hud->a->busy == 0 && self->hud->b->busy == 0 && self->paused == 0 &&
           self->state != 0xb;
    SetHidden(self->hud, !show);
    if (self->hud->textLocked == 0)
        fn_8229F688(self->hud->ctrl, self->text, 0);
}
