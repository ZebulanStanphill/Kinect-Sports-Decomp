typedef struct Player_822A6E50 {
    char pad0[8];
    unsigned int *idleSounds[7]; /* 0x008 */
    char pad24[8];
    unsigned int *winSounds[5];  /* 0x02c */
    unsigned int *loseSounds[5]; /* 0x040 */
    char pad54[0xb4];
    int mode;           /* 0x108 */
    unsigned int state; /* 0x10c */
    unsigned int sound; /* 0x110 */
    char pad114[0x414];
    float delay; /* 0x528 */
    char pad52c[0x10];
    int playing; /* 0x53c */
} Player_822A6E50;

extern unsigned int lbl_831CE7BC;
extern unsigned int lbl_831CD664;
extern unsigned int lbl_831CE7B8;
extern const float lbl_821917A8[];

extern unsigned int *fn_822A6C30(unsigned int **sounds, unsigned int count, unsigned int *last);
extern void fn_822A6F38(Player_822A6E50 *player, unsigned int *sound, float delay, float volume, int flag);

/* Picks a random sound for the player's state and starts it. */
void fn_822A6E50(Player_822A6E50 *player)
{
    unsigned int *sound;

    switch (player->state) {
    case 0:
        sound = fn_822A6C30(player->idleSounds, 7, &lbl_831CE7BC);
        break;
    case 1:
        sound = fn_822A6C30(player->loseSounds, 5, &lbl_831CD664);
        break;
    case 2:
        sound = fn_822A6C30(player->winSounds, 5, &lbl_831CE7B8);
        break;
    default:
        return;
    }
    if (sound != 0) {
        player->sound = *sound;
        if (player->mode != 3) {
            player->mode = 3;
            fn_822A6F38(player, &player->sound, player->delay, lbl_821917A8[6], 1);
            player->playing = 1;
            player->delay = 0.0f;
        } else {
            fn_822A6F38(player, &player->sound, player->delay, lbl_821917A8[6], 1);
            player->delay = 0.0f;
        }
    }
}
