typedef struct Entry_82283708 {
    char padding[8];
    int state;
} Entry_82283708;

typedef struct Mode_82283708 {
    char padding[0x14];
    Entry_82283708 *entry;
    int disabled;
} Mode_82283708;

typedef struct Game_82283708 {
    char padding[0xd54];
    Mode_82283708 *mode;
} Game_82283708;

typedef struct Holder_82283708 {
    int unused;
    Game_82283708 *game;
} Holder_82283708;

typedef struct Globals_82283708 {
    char padding[0xec];
    Holder_82283708 *holder;
} Globals_82283708;

typedef struct Settings_82283708 {
    int unused;
    unsigned char disabled;
} Settings_82283708;

typedef struct Object_82283708 {
    char padding[0x148];
    void *child;
    char padding14c[16];
    float time;
} Object_82283708;

extern Globals_82283708 lbl_832960A0;
extern Settings_82283708 *lbl_832975B0;
extern Settings_82283708 *fn_82250A18(void);
extern void fn_82279D28(Object_82283708 *, int, int);
extern void fn_82284B08(void *, float);
extern void fn_82279E08(Object_82283708 *, float);

void fn_82283708(Object_82283708 *self, float elapsed)
{
    Game_82283708 *game;
    int active = 0;
    self->time = elapsed + self->time;
    game = lbl_832960A0.holder ? lbl_832960A0.holder->game : 0;
    if (game != 0) {
        Mode_82283708 *mode = game->mode;
        if (mode->disabled == 0 && mode->entry != 0) {
            Entry_82283708 *entry = mode->entry;
            Settings_82283708 *settings;
            if (lbl_832975B0 != 0) {
                settings = lbl_832975B0;
            } else {
                settings = fn_82250A18();
            }
            if (settings->disabled == 0 && entry->state >= 5) {
                if (entry->state < 16) {
                    active = 1;
                    goto update;
                }
            }
        }
        active = 0;
    }
update:
    fn_82279D28(self, 1, !active);
    if (self->child != 0) {
        fn_82284B08(self->child, elapsed);
    }
    fn_82279E08(self, elapsed);
}
