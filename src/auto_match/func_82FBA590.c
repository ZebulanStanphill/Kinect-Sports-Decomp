typedef struct Band_82FBA590 {
    int type;              /* 0x00 */
    float frequency;       /* 0x04 */
    float gain;            /* 0x08 */
    float width;           /* 0x0c */
    unsigned char enabled; /* 0x10 */
} Band_82FBA590;

typedef struct Effect_82FBA590 {
    int unknown0;           /* 0x00 */
    Band_82FBA590 bands[3]; /* 0x04 */
    float level;            /* 0x40 */
    unsigned char bypass;   /* 0x44 */
    char pad45[3];
    unsigned char dirty[3]; /* 0x48 */
} Effect_82FBA590;

/* Sets one parameter: five per band, then the output level and the bypass switch. */
int fn_82FBA590(Effect_82FBA590 *self, short param, void *value)
{
    int result;
    int band;

    if (value == 0) {
        return 0x1f;
    }
    result = 1;
    band = param / 5;
    switch (param) {
    case 0:
    case 5:
    case 10:
        self->bands[band].type = (int)*(float *)value;
        self->dirty[band] = 1;
        break;
    case 1:
    case 6:
    case 11:
        self->bands[band].frequency = *(float *)value;
        self->dirty[band] = 1;
        break;
    case 2:
    case 7:
    case 12:
        self->bands[band].gain = *(float *)value;
        self->dirty[band] = 1;
        break;
    case 3:
    case 8:
    case 13:
        self->bands[band].width = *(float *)value;
        self->dirty[band] = 1;
        break;
    case 4:
    case 9:
    case 14:
        self->bands[band].enabled = *(float *)value != 0.0f;
        self->dirty[band] = 1;
        break;
    case 15:
        self->level = *(float *)value;
        break;
    case 16:
        self->bypass = *(unsigned char *)value;
        break;
    default:
        result = 0x1f;
        break;
    }
    return result;
}
