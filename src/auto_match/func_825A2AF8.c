typedef struct Pool_825A2AF8 {
    int unknown0;
    char *cur;
    char *end;
    unsigned short elemSize;
    unsigned short blockCount;
    unsigned short count;
    char pad12[2];
    int nextId; /* 0x14 */
} Pool_825A2AF8;

typedef struct Sound_825A2AF8 {
    char pad00[0x10];
    unsigned char hasPosition;  /* 0x10 */
    unsigned char hasDirection; /* 0x11 */
    char pad12[0xe];
    float scale; /* 0x20 */
    char pad24[0xc];
    int active;  /* 0x30 */
    int handle;  /* 0x34 */
    int bank;    /* 0x38 */
    int id;      /* 0x3c */
    int flags;   /* 0x40 */
    int cue;     /* 0x44 */
    short voice; /* 0x48 */
    char pad4a[2];
    int unknown4c; /* 0x4c */
    int unknown50; /* 0x50 */
} Sound_825A2AF8;

typedef struct Listener_825A2AF8 {
    char pad000[0xa0];
    float nearDistance; /* 0xa0 */
    char pad0a4[4];
    float farDistance; /* 0xa8 */
    char pad0ac[0x280 - 0xac];
    float distanceScale; /* 0x280 */
    char pad284[0x8bc - 0x284];
    float worldScale; /* 0x8bc */
} Listener_825A2AF8;

extern Sound_825A2AF8 *fn_8251E4D0(Pool_825A2AF8 *pool);
extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);

static __forceinline float Max(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

Sound_825A2AF8 *fn_825A2AF8(Listener_825A2AF8 *listener, Pool_825A2AF8 *pool, int *cue, int bank, int flags)
{
    Sound_825A2AF8 *sound = fn_8251E4D0(pool);
    float nearDistance;
    float farDistance;

    sound->cue = *cue;
    sound->voice = -1;
    sound->handle = -1;
    sound->active = 1;
    sound->flags = flags;
    sound->unknown4c = 0;
    sound->unknown50 = 0;
    sound->bank = bank;
    sound->id = ++pool->nextId;
    sound->hasPosition = 0;
    sound->hasDirection = 0;
    if (flags & 0x10) {
        farDistance = listener->farDistance * listener->worldScale;
        nearDistance = listener->nearDistance * listener->worldScale;
        sound->scale =
            fn_82539560(Max(nearDistance, farDistance) * listener->distanceScale, 5.0f, 35.0f, 0.25f, 3.0f);
    } else {
        sound->scale = 1.0f;
    }
    return sound;
}
