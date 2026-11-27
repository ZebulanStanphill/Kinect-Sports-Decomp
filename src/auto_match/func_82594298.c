#include "xdk/vectorintrinsics.h"

typedef struct Channel_82594298 {
    float keys[0x14]; /* 0x00 */
    float minimum;    /* 0x50 */
    float maximum;    /* 0x54 */
    float speed;      /* 0x58 */
    float phase;      /* 0x5c */
    char pad60[0xC];
} Channel_82594298;

typedef struct Sound_82594298 {
    float duration;               /* 0x00 */
    Channel_82594298 channels[2]; /* 0x04 */
} Sound_82594298;

typedef struct Wave_82594298 {
    float weight; /* 0x00 */
    float pad04;  /* 0x04 */
    float phase;  /* 0x08 */
    float scale;  /* 0x0c */
    float offset; /* 0x10 */
} Wave_82594298;

typedef struct Voice_82594298 {
    Wave_82594298 waves[2]; /* 0x00 */
    Sound_82594298 *sound;  /* 0x28 */
    float time;             /* 0x2c */
    __vector4 position;     /* 0x30 */
    float volume;           /* 0x40 */
    unsigned int index;     /* 0x44 */
    char pad48[8];
} Voice_82594298;

typedef struct Pool_82594298 {
    unsigned short size; /* 0x00 */
    char *begin;         /* 0x04 */
    char *end;           /* 0x08 */
} Pool_82594298;

extern Pool_82594298 *lbl_8326C2C0;

extern Sound_82594298 *fn_8251F720(void *name, int flags);
extern void fn_8251FA58(void *resource);
extern Voice_82594298 *fn_825A2410(Pool_82594298 **pool);
extern float fn_825C2EB8(float t, float *keys);

static __forceinline float Clamp01(float value)
{
    value = value >= 0.0f ? value : 0.0f;
    return value - 1.0f >= 0.0f ? 1.0f : value;
}

static __forceinline void Seek(Voice_82594298 *voice, int i, float time)
{
    float t;

    t = time / voice->sound->duration;
    voice->waves[i].weight =
        Clamp01(fn_825C2EB8(t, i == 0 ? voice->sound->channels[0].keys : voice->sound->channels[1].keys));
    voice->time = time;
}

void fn_82594298(void *name, const __vector4 *position, float volume, unsigned int index)
{
    Sound_82594298 *sound;
    Voice_82594298 *voice;
    int i;

    sound = fn_8251F720(name, 0);
    if (sound == 0)
        return;
    if (lbl_8326C2C0 != 0 &&
        (unsigned int)((lbl_8326C2C0->end - lbl_8326C2C0->begin) / lbl_8326C2C0->size) < 16) {
        voice = fn_825A2410(&lbl_8326C2C0);
        if (voice != 0) {
            voice->index = index;
            voice->position = *position;
            voice->sound = sound;
            voice->volume = Clamp01(volume);
            for (i = 0; i < 2; i++) {
                voice->waves[i].offset =
                    voice->sound->channels[i].minimum +
                    (voice->sound->channels[i].maximum - voice->sound->channels[i].minimum) * 0.5f;
                voice->waves[i].scale =
                    (voice->sound->channels[i].maximum - voice->sound->channels[i].minimum) * 0.5f;
                voice->waves[i].pad04 = 0.0f;
                voice->waves[i].phase = voice->sound->channels[i].phase;
                Seek(voice, i, 0.0f);
            }
            return;
        }
    }
    fn_8251FA58(sound);
}
