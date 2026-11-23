typedef struct Msg_8255FEE8 {
    unsigned int tag; /* 0x00 */
    float volume;     /* 0x04 */
    float b;          /* 0x08 */
    int priority;     /* 0x0c */
    float fadeIn;     /* 0x10 */
    float pitch;      /* 0x14 */
    int flag;         /* 0x18 */
    int group;        /* 0x1c */
    float fadeOut;    /* 0x20 */
    int z[5];         /* 0x24 */
} Msg_8255FEE8;

typedef struct Sound_8255FEE8 {
    char pad0[0x44];
    int bus;              /* 0x44 */
    float volume;         /* 0x48 */
    float pitch;          /* 0x4c */
    float fadeOut;        /* 0x50 */
    float fadeIn;         /* 0x54 */
    signed char flag;     /* 0x58 */
    signed char group;    /* 0x59 */
    signed char priority; /* 0x5a */
} Sound_8255FEE8;

typedef union FloatBits_8255FEE8 {
    unsigned int u;
    float f;
} FloatBits_8255FEE8;

extern unsigned int lbl_83265A28;

static __forceinline float Random01(void)
{
    FloatBits_8255FEE8 bits;

    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    bits.u = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
    return bits.f - 1.0f;
}

static __forceinline void InitMsg(Msg_8255FEE8 *m)
{
    m->tag = 0x4d697850;
    m->volume = 1.0f;
    m->b = 0.0f;
    m->priority = 0x20;
    m->fadeIn = 0.2f;
    m->pitch = 0.0f;
    m->flag = 0;
    m->group = 0x40;
    m->fadeOut = 0.2f;
    m->z[0] = 0;
    m->z[3] = 0;
    m->z[4] = 0;
    m->z[1] = 0;
    m->z[2] = 0;
}

/* Returns the sound it was given: fn_82532810 keeps using the returned pointer (r3) after the call. */
Sound_8255FEE8 *fn_8255FEE8(Sound_8255FEE8 *sound, Msg_8255FEE8 *msg, int defaultPitch, float fadeOut)
{
    InitMsg(msg);
    msg->volume = sound->volume;
    msg->priority = sound->priority;
    msg->fadeIn = sound->fadeIn;
    msg->flag = sound->flag;
    msg->group = sound->group;
    msg->z[0] = sound->bus;
    msg->z[3] = (int)sound;
    if (fadeOut >= 0.0f) {
        msg->fadeOut = fadeOut;
    } else {
        msg->fadeOut = sound->fadeOut;
    }
    if (defaultPitch != 0) {
        msg->pitch = -1.0f;
    } else if (sound->pitch == -2.0f) {
        msg->pitch = Random01();
    } else {
        msg->pitch = sound->pitch;
    }
    return sound;
}
