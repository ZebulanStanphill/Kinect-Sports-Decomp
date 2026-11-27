typedef struct Ctrl_82374C88 {
    char pad0[0x58];
    int visible;
} Ctrl_82374C88;

typedef struct SubA_82374C88 {
    char pad0[0x14];
    int busy;
} SubA_82374C88;

typedef struct SubB_82374C88 {
    char pad0[0xc];
    int busy;
} SubB_82374C88;

typedef struct Hud_82374C88 {
    char pad0[0xc];
    Ctrl_82374C88 *ctrl;
    char pad10[4];
    SubA_82374C88 *a;
    SubB_82374C88 *b;
} Hud_82374C88;

typedef struct Game_82374C88 {
    char pad0[0x54];
    unsigned int mode;
    char pad58[0xd4 - 0x58];
    Hud_82374C88 *hud;
    char padd8[0x344 - 0xd8];
    int enabled;
    char pad348[0x9d8 - 0x348];
    int paused;
} Game_82374C88;

extern void fn_8229F5A8(Ctrl_82374C88 *ctrl);
extern void fn_8229F618(Ctrl_82374C88 *ctrl);

/* Hides or shows the HUD control; both tests of `hidden` are in the source. */
static __forceinline void SetHidden(Hud_82374C88 *hud, int hidden)
{
    if (hidden && hud->ctrl->visible != 0)
        fn_8229F618(hud->ctrl);
    else if (!hidden && hud->ctrl->visible == 0)
        fn_8229F5A8(hud->ctrl);
}

void fn_82374C88(Game_82374C88 *self, int enabled)
{
    int show;

    self->enabled = enabled;
    show = enabled != 0 && self->hud->a->busy == 0 && self->hud->b->busy == 0 && self->paused == 0 &&
           self->mode != 0xb;
    SetHidden(self->hud, !show);
}
