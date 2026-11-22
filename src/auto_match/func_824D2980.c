typedef struct Config_824D2980 {
    char pad0[0x298];
    int mode; /* 0x298 */
} Config_824D2980;

typedef struct Player_824D2980 {
    char pad0[0x358];
    int ready; /* 0x358 */
    char pad35C[0x3b4 - 0x35c];
    int active; /* 0x3b4 */
    char pad3B8[0x1c10 - 0x3b8];
} Player_824D2980;

typedef struct Self_824D2980 {
    Player_824D2980 players[2]; /* 0x0 */
    char pad3820[0x3a00 - 0x3820];
    Config_824D2980 *config; /* 0x3a00 */
} Self_824D2980;

extern unsigned int lbl_83297984;
extern int lbl_83297980;

int fn_824D2980(Self_824D2980 *self, int index)
{
    Player_824D2980 *player;

    if ((lbl_83297984 & 1) == 0) {
        Config_824D2980 *config = self->config;

        lbl_83297984 |= 1;
        lbl_83297980 = config->mode;
    }
    if (lbl_83297980 != 0) {
        player = &self->players[index];
        return player->active != 0 && player->ready != 0;
    }
    return self->players[index].active;
}
