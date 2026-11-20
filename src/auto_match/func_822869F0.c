typedef struct Impl_822869F0 Impl_822869F0;

typedef struct ImplVtbl_822869F0 {
    void *copy;
    void (*call)(Impl_822869F0 *self, int context, const char *key, char *out, int size); /* 0x04 */
} ImplVtbl_822869F0;

struct Impl_822869F0 {
    ImplVtbl_822869F0 *vt;
};

typedef struct Function_822869F0 {
    int storage[4];
    Impl_822869F0 *impl; /* 0x10 */
} Function_822869F0;

typedef struct Slot_822869F0 {
    int state; /* 0x00 */
    char pad4[0x18];
    int team; /* 0x1c */
    char pad20[0x20];
} Slot_822869F0;

typedef struct Game_822869F0 {
    char pad0[0x18b8];
    unsigned int mode; /* 0x18b8 */
} Game_822869F0;

typedef struct TeamSetup_822869F0 {
    char pad0[0x680];
    Function_822869F0 localize; /* 0x680 */
    char pad694[0x6a8 - 0x694];
    Slot_822869F0 slots[4]; /* 0x6a8 */
    char pad7a8[0x7d0 - 0x7a8];
    char title[0x200];    /* 0x7d0 */
    char subtitle[0x100]; /* 0x9d0 */
    char padad0[0x11f0 - 0xad0];
    Game_822869F0 *game; /* 0x11f0 */
} TeamSetup_822869F0;

extern const char *lbl_831CEE98[4];
extern const char *lbl_831CEBB4[69];
extern const char *lbl_831CEEA8[2];
extern const char *lbl_831C6508[37];
extern __declspec(noreturn) void fn_82F63108(void);

static __forceinline void Localize(Function_822869F0 *f, const char *key, char *out)
{
    if (f->impl == 0)
        fn_82F63108();
    f->impl->vt->call(f->impl, 0, key, out, 0x100);
}

void fn_822869F0(TeamSetup_822869F0 *self)
{
    const char *subtitle = 0;
    const char *title;
    unsigned int active;
    int i;
    int several;

    switch (self->game->mode) {
    case 0:
        title = lbl_831CEE98[0];
        switch (self->slots[1].state) {
        case 0:
        case 1:
            subtitle = lbl_831CEBB4[0];
            break;
        case 2:
            subtitle = lbl_831C6508[self->slots[1].team];
            break;
        case 3:
            subtitle = lbl_831CEEA8[0];
            break;
        default:
            subtitle = "teamsetup_opponent";
            break;
        }
        break;
    case 1:
        if (self->slots[1].state == 4)
            title = lbl_831CEE98[0];
        else
            title = lbl_831CEE98[1];
        several = self->slots[3].state - 4 != 0;
        switch (self->slots[2].state) {
        case 2:
            subtitle = lbl_831C6508[self->slots[2].team];
            break;
        case 3:
            subtitle = lbl_831CEEA8[several];
            break;
        default:
            subtitle = lbl_831CEBB4[several];
            break;
        }
        break;
    case 2:
        title = lbl_831CEE98[0];
        switch (self->slots[1].state) {
        case 0:
        case 1:
            active = 0;
            for (i = 0; i < 4; i++) {
                if (self->slots[i].state != 4)
                    active++;
            }
            if (active > 2)
                subtitle = lbl_831CEBB4[2];
            else
                subtitle = lbl_831CEBB4[0];
            break;
        case 2:
            subtitle = lbl_831C6508[self->slots[1].team];
            break;
        case 3:
            subtitle = lbl_831CEEA8[0];
            break;
        case 4:
            subtitle = "teamsetup_otherplayers";
            break;
        }
        break;
    default:
        return;
    }
    if (title != 0)
        Localize(&self->localize, title, self->title);
    if (subtitle != 0)
        Localize(&self->localize, subtitle, self->subtitle);
}
