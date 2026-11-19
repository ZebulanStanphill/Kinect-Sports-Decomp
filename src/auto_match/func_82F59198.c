typedef struct Settings_82F59198 {
    int enabled;        /* 0x00 */
    float strength;     /* 0x04 */
    float direction[3]; /* 0x08 */
    int mode;           /* 0x14 */
    float range;        /* 0x18 */
    float minimum[2];   /* 0x1c */
    float maximum[2];   /* 0x24 */
} Settings_82F59198;

typedef struct Effect_82F59198 {
    int pad0;
    unsigned char active;   /* 0x04 */
    unsigned char disabled; /* 0x05 */
    char pad6[2];
    int mode; /* 0x08 */
    int padC;
    float range;        /* 0x10 */
    float strength;     /* 0x14 */
    float direction[3]; /* 0x18 */
    int kind;           /* 0x24 */
    char state[0x74];   /* 0x28 */
    char target[4];     /* 0x9c */
} Effect_82F59198;

extern void fn_82F5DEE0(void *state, Settings_82F59198 *settings);
extern void fn_82F5D3D8(void *target, void *state);

void fn_82F59198(Effect_82F59198 *effect)
{
    Settings_82F59198 settings;

    if (effect->active == 0) {
        return;
    }
    switch (effect->kind) {
    case 1:
        settings.mode = effect->mode;
        settings.enabled = effect->disabled == 0;
        settings.direction[0] = effect->direction[0];
        settings.direction[1] = effect->direction[1];
        settings.direction[2] = effect->direction[2];
        settings.range = effect->range;
        settings.maximum[1] = 1.0f;
        settings.strength = effect->strength;
        settings.minimum[0] = 0.0f;
        settings.minimum[1] = 0.0f;
        settings.maximum[0] = 1.0f;
        fn_82F5DEE0(effect->state, &settings);
        break;
    case 2:
        fn_82F5D3D8(effect->target, effect->state);
        break;
    }
}
