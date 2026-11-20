typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Band_8241FA30 {
    float width; /* 0x0 */
    int soundA;  /* 0x4 */
    int soundB;  /* 0x8 */
} Band_8241FA30;

extern Band_8241FA30 lbl_82191D98[22];

typedef struct Player_8241FA30 Player_8241FA30;

typedef struct Game_8241FA30 {
    char pad0[0x2b20];
    Player_8241FA30 *localPlayer; /* 0x2b20 */
    char pad2b24[0xd8];
    char **audio; /* 0x2bfc */
} Game_8241FA30;

struct Player_8241FA30 {
    Game_8241FA30 *game; /* 0x0 */
    char pad4[0x1cc];
    float offsetA; /* 0x1d0 */
    char pad1d4[0x3c];
    float offsetB; /* 0x210 */
};

extern void fn_82547C80(void *queue, unsigned char sound, unsigned char play);

void fn_8241FA30(Player_8241FA30 *player, __vector4 position)
{
    float distance = position.vector4_f32[0] - player->offsetA - player->offsetB;
    float total = 0.0f;
    unsigned int i = 0;
    int band;

    while (distance > total) {
        if (i >= sizeof(lbl_82191D98) / sizeof(lbl_82191D98[0]) - 1) {
            break;
        }
        total += lbl_82191D98[i].width;
        i++;
    }
    band = i - 1;
    if (band < 0) {
        band = 0;
    }
    band = band < 21 ? band : 21;
    if (lbl_82191D98[band].soundA != -1 && player == player->game->localPlayer) {
        fn_82547C80(*player->game->audio + 0xd0, (unsigned char)lbl_82191D98[band].soundA, 1);
    }
    if (lbl_82191D98[band].soundB != -1 && player == player->game->localPlayer) {
        fn_82547C80(*player->game->audio + 0xd0, (unsigned char)lbl_82191D98[band].soundB, 1);
    }
}
