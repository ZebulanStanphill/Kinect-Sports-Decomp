extern const float lbl_8216C698;
extern const float lbl_8216E498[99];

typedef struct Effect_82FDA908 {
    int unknown00;
    float param0;          /* 0x04 */
    float param1;          /* 0x08 */
    float param2;          /* 0x0c */
    float gain;            /* 0x10 */
    unsigned char enabled; /* 0x14 */
} Effect_82FDA908;

/* Converts decibels to a linear gain by interpolating the table. */
static __forceinline float DecibelsToGain(float decibels)
{
    float position;
    unsigned int index;
    float fraction;

    if (decibels <= lbl_8216C698) {
        return 0.0f;
    }
    if (decibels >= 0.0f) {
        return 1.0f;
    }
    position = decibels + 97.0f;
    index = (unsigned int)position;
    fraction = position - (float)index;
    return lbl_8216E498[index] * (1.0f - fraction) + lbl_8216E498[index + 1] * fraction;
}

int fn_82FDA908(Effect_82FDA908 *self, short parameter, const void *value)
{
    int result;

    if (value == 0) {
        return 0x1f;
    }
    result = 1;
    switch (parameter) {
    case 0:
        self->param0 = *(const float *)value;
        break;
    case 1:
        self->param1 = *(const float *)value;
        break;
    case 2:
        self->param2 = *(const float *)value;
        break;
    case 3:
        self->gain = DecibelsToGain(*(const float *)value);
        break;
    case 4:
        self->enabled = *(const unsigned char *)value;
        break;
    default:
        result = 0x1f;
        break;
    }
    return result;
}
