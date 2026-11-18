typedef struct Wave_825946B8 {
    float weight; /* 0x00 */
    float pad04;
    float phase;  /* 0x08 */
    float scale;  /* 0x0c */
    float offset; /* 0x10 */
} Wave_825946B8;

typedef struct Source_825946B8 {
    int pad0;
    char data[0x68]; /* 0x04 */
} Source_825946B8;

typedef struct Owner_825946B8 {
    Wave_825946B8 waves[2];   /* 0x00 */
    Source_825946B8 *sources; /* 0x28 */
} Owner_825946B8;

typedef struct Player_825946B8 {
    char state[0x18]; /* 0x00 */
    float peaks[2];   /* 0x18 */
    char pad20[0x10];
} Player_825946B8;

typedef struct Players_825946B8 {
    char header[0x10];
    Player_825946B8 players[4]; /* 0x10 */
} Players_825946B8;

extern Players_825946B8 lbl_8326C2C0;

extern float fn_82809950(float angle);
extern float fn_82594590(Owner_825946B8 *owner, Wave_825946B8 *wave, char *source, Player_825946B8 *player);

/* Updates the player's peak level for each of the owner's two waves. */
void fn_825946B8(Owner_825946B8 *owner, unsigned char player)
{
    int i;
    Wave_825946B8 *wave;
    float phase;
    float level;
    float value;

    for (i = 0; i < 2; i++) {
        wave = &owner->waves[i];
        phase = wave->phase;
        level = fn_82809950(phase) * wave->scale + wave->offset;
        value = fn_82594590(owner, wave, owner->sources[i].data, &lbl_8326C2C0.players[player]) *
                (wave->weight * level);
        if (value > lbl_8326C2C0.players[player].peaks[i]) {
            lbl_8326C2C0.players[player].peaks[i] = value;
        }
    }
}
