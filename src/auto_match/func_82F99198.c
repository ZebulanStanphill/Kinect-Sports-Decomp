typedef struct Effect_82F99198 {
    int pad0;
    float mix;             /* 0x4 */
    float depth;           /* 0x8 */
    float level;           /* 0xc */
    float gain;            /* 0x10 */
    unsigned char enabled; /* 0x14 */
    unsigned char mode;    /* 0x15 */
} Effect_82F99198;

extern double fn_82F655D8(double, double);

int fn_82F99198(Effect_82F99198 *o, short id, void *v)
{
    int r;
    if (v == 0)
        return 0x1f;
    r = 1;
    switch (id) {
    case 0:
        o->mix = *(float *)v;
        if (o->mix < 0.001 || o->mix > 1.0f) {
            o->mix = 0.5f;
        }
        break;
    case 1:
        o->depth = *(float *)v;
        if (o->depth < 0.0f || o->depth > 100.0f) {
            o->depth = 0.0f;
        }
        o->depth = o->depth * 0.01f;
        break;
    case 2:
        o->level = *(float *)v;
        if (o->level < 0.0f || o->level > 100.0f) {
            o->level = 50.0f;
        }
        o->level = o->level * 0.01f;
        break;
    case 3:
        o->gain = *(float *)v;
        if (o->gain < -96.3f || o->gain > 0.0f) {
            o->gain = 0.0f;
        }
        o->gain = (float)fn_82F655D8(10.0, o->gain * 0.05f);
        break;
    case 4:
        o->enabled = *(float *)v != 0.0f;
        break;
    case 5:
        o->mode = *(unsigned char *)v;
        break;
    default:
        r = 0x1f;
        break;
    }
    return r;
}
