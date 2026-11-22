typedef struct Mode_8239D8B0 {
    char pad00[0x40];
    unsigned int state; /* 0x40 */
} Mode_8239D8B0;

typedef struct Game_8239D8B0 {
    char pad000[0xa0];
    Mode_8239D8B0 *mode; /* 0x0a0 */
    char pad0a4[0xd4];
    int stage; /* 0x178 */
    char pad17c[0x160];
    void *progress; /* 0x2dc */
    char pad2e0[0x8f4];
    int musicEnabled; /* 0xbd4 */
} Game_8239D8B0;

extern float fn_823A03F0(void *progress, int arg, int final);
extern void fn_82536070(const char *name, const char *value);

void fn_8239D8B0(Game_8239D8B0 *self, int arg)
{
    int final = self->stage == 1;
    float ratio = fn_823A03F0(self->progress, arg, final);
    if (!final) {
        return;
    }
    if (ratio > 0.75f) {
        if ((int)self->mode != 0 && self->mode->state == 1) {
            return;
        }
        if (self->musicEnabled == 0) {
            return;
        }
        fn_82536070("music_minigame", "mini04");
    } else if (ratio > 0.5f) {
        if ((int)self->mode != 0 && self->mode->state == 1) {
            return;
        }
        if (self->musicEnabled == 0) {
            return;
        }
        fn_82536070("music_minigame", "mini03");
    } else if (ratio > 0.25f) {
        if ((int)self->mode != 0 && self->mode->state == 1) {
            return;
        }
        if (self->musicEnabled == 0) {
            return;
        }
        fn_82536070("music_minigame", "mini02");
    } else {
        if ((int)self->mode != 0 && self->mode->state == 1) {
            return;
        }
        if (self->musicEnabled == 0) {
            return;
        }
        fn_82536070("music_minigame", "mini01");
    }
}
