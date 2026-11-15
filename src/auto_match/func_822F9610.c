extern float lbl_831CCC98[2];
extern float lbl_821CA45C[2];
extern float lbl_82192730[2];
extern unsigned int lbl_83265A28;

typedef struct Settings_822F9610 {
    char pad[0x14];
    float probability; /* 0x14 */
} Settings_822F9610;

typedef struct Object_822F9610 {
    char pad[0x10];
    Settings_822F9610 *settings; /* 0x10 */
} Object_822F9610;

float fn_822F9610(Object_822F9610 *self)
{
    float threshold = lbl_831CCC98[0] + (lbl_831CCC98[1] - lbl_831CCC98[0]) * self->settings->probability;

    union {
        unsigned int bits;
        float value;
    } random;

    float result = lbl_821CA45C[1];
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    random.bits = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
    if (random.value - result < threshold) {
        return lbl_82192730[1];
    }
    return 0.0f;
}
