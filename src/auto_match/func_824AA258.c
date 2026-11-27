#include "xdk/vectorintrinsics.h"

typedef struct Value_824AA258 {
    __vector4 v;
} Value_824AA258;

typedef struct Channel_824AA258 {
    char pad0[0x10];
    __vector4 value; /* 0x10 */
    char pad20[0x20];
} Channel_824AA258;

typedef struct Key_824AA258 {
    char pad0[0x40];
    Channel_824AA258 *channels; /* 0x40 */
} Key_824AA258;

typedef struct Track_824AA258 Track_824AA258;

typedef struct TrackVt_824AA258 {
    void (*GetRange)(Track_824AA258 *self, unsigned int *first, unsigned int *last); /* 0x00 */
    void (*GetKey)(Track_824AA258 *self, unsigned int index, Key_824AA258 **key);    /* 0x04 */
} TrackVt_824AA258;

struct Track_824AA258 {
    TrackVt_824AA258 *vt;
};

typedef struct Meter_824AA258 {
    char pad0[0x3c];
    int useAlternate; /* 0x3c */
} Meter_824AA258;

static __forceinline float Max(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

static __forceinline __vector4 Replicate(float s)
{
    return __vspltw(__lvlx(&s, 0), 0);
}

Value_824AA258 fn_824AA258(Meter_824AA258 *meter, Track_824AA258 *track, int window)
{
    Value_824AA258 result;
    __vector4 sum;
    unsigned int first;
    unsigned int last;
    unsigned int i;
    int channel;

    track->vt->GetRange(track, &first, &last);
    channel = meter->useAlternate != 0 ? 6 : 10;
    sum = __VMXGetReg(77);
    first = (unsigned int)Max((float)first, (float)(last - window + 1));
    for (i = first; i <= last; i++) {
        Key_824AA258 *key;

        track->vt->GetKey(track, i, &key);
        sum = __vaddfp(sum, key->channels[channel].value);
    }
    result.v = __vmulfp(sum, Replicate(1.0f / (float)(last - first + 1)));
    return result;
}
