typedef struct Effect_83056DE8 {
    int pad0;
    float gain0;           /* 0x4 */
    float gain1;           /* 0x8 */
    float level;           /* 0xc */
    float frequency;       /* 0x10 */
    int mode;              /* 0x14 */
    unsigned char changed; /* 0x18 */
} Effect_83056DE8;

int fn_83056DE8(Effect_83056DE8 *o, short id, void *v)
{
    int r;
    if (v == 0)
        return 0x1f;
    r = 1;
    switch (id) {
    case 0:
        o->gain0 = *(float *)v;
        if (o->gain0 < -36.0f || o->gain0 > 0.0f) {
            o->gain0 = 0.0f;
        }
        break;
    case 1:
        o->gain1 = *(float *)v;
        if (o->gain1 < -36.0f || o->gain1 > 0.0f) {
            o->gain1 = 0.0f;
        }
        break;
    case 2:
        o->level = *(float *)v;
        if (o->level < 0.0f || o->level > 100.0f) {
            o->level = 0.0f;
        }
        break;
    case 3:
        o->frequency = *(float *)v;
        if (o->frequency < 1.0f || o->frequency > 5000.0f) {
            o->frequency = 10.0f;
        }
        break;
    case 4:
        o->mode = (unsigned int)*(float *)v;
        if (o->mode < 0 || o->mode > 5) {
            o->mode = 0;
        }
        break;
    default:
        r = 0x1f;
        break;
    }
    o->changed = 1;
    return r;
}
