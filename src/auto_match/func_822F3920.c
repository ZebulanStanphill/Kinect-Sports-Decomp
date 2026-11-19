typedef struct Selector_822F3920 Selector_822F3920;

typedef struct SelectorVtbl_822F3920 {
    char pad[0x84];
    int (*isAvailable)(Selector_822F3920 *self, unsigned int id); /* 0x84 */
} SelectorVtbl_822F3920;

struct Selector_822F3920 {
    SelectorVtbl_822F3920 *vt;
};

typedef struct Player_822F3920 {
    char pad0[0x178];
    int mode; /* 0x178 */
    char pad17c[0x1b4 - 0x17c];
    unsigned int *idsBegin; /* 0x1b4 */
    unsigned int *idsEnd;   /* 0x1b8 */
    char pad1bc[0x1e4 - 0x1bc];
    unsigned int currentId; /* 0x1e4 */
    char pad1e8[0x2e0 - 0x1e8];
    Selector_822F3920 *selector; /* 0x2e0 */
} Player_822F3920;

typedef struct Config_822F3920 {
    char pad0[0x24];
    void *track; /* 0x24 */
    char pad28[0x110 - 0x28];
    int sound; /* 0x110 */
    char pad114[0x168 - 0x114];
    unsigned int enabler; /* 0x168 */
    int enabled;          /* 0x16c */
    char pad170[0x20c - 0x170];
    void *primary;       /* 0x20c */
    void *secondary;     /* 0x210 */
    int preferSecondary; /* 0x214 */
} Config_822F3920;

typedef struct Pending_822F3920 {
    int first;
    int second;
} Pending_822F3920;

typedef struct Self_822F3920 {
    char pad0[0xc];
    Config_822F3920 *config; /* 0xc */
    Player_822F3920 *player; /* 0x10 */
    char pad14[0x24 - 0x14];
    int active; /* 0x24 */
    char pad28[0x30 - 0x28];
    Pending_822F3920 *pending; /* 0x30 */
} Self_822F3920;

extern unsigned char fn_8288B760(unsigned int enabler);
extern int fn_822F4758(Self_822F3920 *self, unsigned int id, void *target);
extern int fn_82397F30(Player_822F3920 *player);
extern void fn_822AF138(int sound, int kind);

static int NotEnd_822F3920(unsigned int *it, unsigned int *end)
{
    if (it != end) {
        return 1;
    }
    return 0;
}

void fn_822F3920(Self_822F3920 *self)
{
    Config_822F3920 *config = self->config;
    void *track = config->track;
    int enabled;
    int kind;
    Pending_822F3920 *pending;

    if (config->enabler != 0) {
        enabled = fn_8288B760(config->enabler);
    } else {
        enabled = config->enabled;
    }
    if (enabled == 0) {
        return;
    }
    pending = self->pending;
    if (pending == 0 || (pending->first == 0 && pending->second == 0)) {
        Player_822F3920 *player = self->player;
        int found = 0;
        unsigned int id;

        if (track != 0) {
            if (player->mode == 2) {
                unsigned int saved = player->currentId;
                unsigned int *it = player->idsBegin;
                unsigned int *end = player->idsEnd;

                for (; NotEnd_822F3920(it, end); it++) {
                    id = *it;
                    if (self->player->selector->vt->isAvailable(self->player->selector, id)) {
                        self->player->currentId = id;
                        if (fn_822F4758(self, id,
                                        self->config->secondary != 0 ? self->config->secondary
                                                                     : self->config->primary) ||
                            fn_822F4758(self, id,
                                        self->config->preferSecondary != 0 ? self->config->secondary
                                                                           : self->config->primary)) {
                            found = 1;
                        }
                    }
                }
                self->player->currentId = saved;
            } else {
                id = player->currentId;
                if (id == 0) {
                    return;
                }
                if (!player->selector->vt->isAvailable(player->selector, id)) {
                    return;
                }
                config = self->config;
                if (config->primary == 0 && config->secondary == 0) {
                    return;
                }
                goto check;
            }
        } else {
            id = player->currentId;
            if (id == 0) {
                return;
            }
            if (!player->selector->vt->isAvailable(player->selector, id)) {
                return;
            }
            if (self->active == 0) {
                return;
            }
            config = self->config;
        check:
            found = fn_822F4758(self, id, config->secondary != 0 ? config->secondary : config->primary);
        }
        if (found == 0) {
            return;
        }
    }
    if (self->player->mode == 2) {
        return;
    }
    if (fn_82397F30(self->player) != 0 && (config = self->config, (int)config->track == 0)) {
        kind = 6;
    } else {
        config = self->config;
        kind = 7;
    }
    fn_822AF138(config->sound, kind);
}
