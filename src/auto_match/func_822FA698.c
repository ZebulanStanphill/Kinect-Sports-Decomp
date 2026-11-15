extern float lbl_831CCA08[2];
extern float lbl_821CA45C[2];
extern unsigned int lbl_83265A28;

typedef struct Settings_822FA698 {
    char pad[0x14];
    float probability; /* 0x14 */
} Settings_822FA698;

typedef struct Object_822FA698 {
    char pad[0x10];
    Settings_822FA698 *settings; /* 0x10 */
} Object_822FA698;

float fn_822FA698(Object_822FA698 *self)
{
    float threshold = lbl_831CCA08[0] + (lbl_831CCA08[1] - lbl_831CCA08[0]) * self->settings->probability;

    union {
        unsigned int bits;
        float value;
    } random;

    float result = lbl_821CA45C[1];
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    random.bits = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
    if (random.value - result >= threshold) {
        result = 0.0f;
    }
    return result;
}
