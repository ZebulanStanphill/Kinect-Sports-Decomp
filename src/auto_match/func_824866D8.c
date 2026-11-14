typedef struct Player_824866D8 {
    int state;            /* 0x0 */
    char pad4[0x41c];
} Player_824866D8;

typedef struct Game_824866D8 {
    char pad0[0x838];
    Player_824866D8 players[4]; /* 0x838 */
} Game_824866D8;

const char *fn_824866D8(Game_824866D8 *self, int sport, int mode)
{
    int active = 0;
    int i;

    for (i = 0; i < 4; i++) {
        if (self->players[i].state == 0 || self->players[i].state == 1)
            active++;
    }
    for (i = 0; i < 4; i++) {
        if (self->players[i].state == 3) {
            if (active > 1 && mode != 1)
                return "sportMustKickLivePlayer";
            break;
        }
    }
    for (i = 0; i < 4; i++) {
        if (self->players[i].state == 3) {
            if (active > 1 && sport == 3)
                return "sportMustKickLivePlayer";
            break;
        }
    }
    if ((unsigned int)mode < 2) {
        if (active == 3)
            return "sportMustKickPlayer3";
        if (active == 4)
            return "sportMustKickPlayers3And4";
    }
    return 0;
}
