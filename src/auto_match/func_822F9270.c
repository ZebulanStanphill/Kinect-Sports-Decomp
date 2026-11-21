extern float lbl_821CA45C[2];
extern float lbl_82192730[2];
extern unsigned int lbl_83265A28;

typedef struct Settings_822F9270 {
    char pad[0x14];
    float probability; /* 0x14 */
} Settings_822F9270;

typedef struct Game_822F9270 {
    char pad[0x83c];
    float *chances; /* 0x83c */
    char pad840[0x4];
    int level; /* 0x844 */
} Game_822F9270;

typedef struct Object_822F9270 {
    char pad[0x4];
    Game_822F9270 *game; /* 0x04 */
    char pad8[0x8];
    Settings_822F9270 *settings; /* 0x10 */
} Object_822F9270;

float fn_822F9270(Object_822F9270 *self)
{
    union {
        unsigned int bits;
        float value;
    } random;

    float result = lbl_821CA45C[1];
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    random.bits = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
    if (random.value - result < self->settings->probability) {
        float chance = self->game->chances[self->game->level + 30];

        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        random.bits = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
        if (random.value - result <= chance) {
            return result;
        }
        return lbl_82192730[1];
    }
    return 0.0f;
}
