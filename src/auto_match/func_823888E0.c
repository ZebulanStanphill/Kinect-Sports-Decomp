typedef struct Cfg_823888E0 {
    char pad[0x1d0];
    int enabled;        /* 0x1d0 */
    int pad1d4[3];
    int values[5];      /* 0x1e0 */
} Cfg_823888E0;

typedef struct Game_823888E0 {
    char pad[0x260];
    Cfg_823888E0 *cfg;  /* 0x260 */
} Game_823888E0;

typedef struct Self_823888E0 {
    int f0;
    int f4;
    Game_823888E0 *game;    /* 0x08 */
    char pad[0x40];
    unsigned int counter;   /* 0x4c */
} Self_823888E0;

unsigned int fn_823888E0(Self_823888E0 *self, unsigned int cur, unsigned int max)
{
    unsigned int r = cur + 1;

    if (r > max) {
        if (self->game->cfg->enabled != 0) {
            self->counter++;
            r = self->game->cfg->values[self->counter % 5];
            if ((int)r < 1)
                r = 1;
        } else {
            r = max;
        }
    }
    return r;
}
