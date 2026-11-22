typedef struct Sound_825DD5C8 {
    int id;       /* 0x0 */
    float volume; /* 0x4 */
    float pitch;  /* 0x8 */
    float pan;    /* 0xc */
} Sound_825DD5C8;

typedef struct Curve_825DD5C8 {
    char pad0[0x10];
    float masterVolume; /* 0x10 */
    float inMin;        /* 0x14 */
    float inMax;        /* 0x18 */
    float outMin;       /* 0x1c */
    float outMax;       /* 0x20 */
} Curve_825DD5C8;

typedef struct Bank_825DD5C8 {
    int pad0;
    int count;             /* 0x4 */
    Curve_825DD5C8 *curve; /* 0x8 */
    int padC;
    Sound_825DD5C8 *sounds; /* 0x10 */
} Bank_825DD5C8;

typedef struct Player_825DD5C8 {
    char pad0[0x7a0];
    float intensity; /* 0x7a0 */
} Player_825DD5C8;

extern void XMemCpy(void *dst, const void *src, unsigned int size);
extern int fn_82560708(void);
extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);

static __forceinline Sound_825DD5C8 *Find(Bank_825DD5C8 *bank, int id)
{
    int i;

    for (i = 0; i < bank->count; i++) {
        if (bank->sounds[i].id == id) {
            return &bank->sounds[i];
        }
    }
    return 0;
}

void fn_825DD5C8(Bank_825DD5C8 *self, Player_825DD5C8 *player, int id, Sound_825DD5C8 *out)
{
    float intensity;

    XMemCpy(out, Find(self, id), sizeof(Sound_825DD5C8));
    if (fn_82560708() != 0) {
        out->volume = self->curve->masterVolume * out->volume;
    }
    intensity = player->intensity;
    out->volume = fn_82539560(1.0f - intensity >= 0.0f ? 1.0f : intensity, self->curve->inMin,
                              self->curve->inMax, self->curve->outMin, self->curve->outMax) *
                  out->volume;
}
