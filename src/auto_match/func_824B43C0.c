typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Value_824B43C0 {
    __vector4 v;
} Value_824B43C0;

typedef struct Channel_824B43C0 {
    char pad0[0x10];
    __vector4 value; /* 0x10 */
    char pad20[0x20];
} Channel_824B43C0;

typedef struct Key_824B43C0 {
    char pad0[0x40];
    Channel_824B43C0 *channels; /* 0x40 */
} Key_824B43C0;

typedef struct Track_824B43C0 Track_824B43C0;

typedef struct TrackVt_824B43C0 {
    void (*GetRange)(Track_824B43C0 *self, int *first, unsigned int *last);       /* 0x00 */
    void (*GetKey)(Track_824B43C0 *self, unsigned int index, Key_824B43C0 **key); /* 0x04 */
} TrackVt_824B43C0;

struct Track_824B43C0 {
    TrackVt_824B43C0 *vt;
};

typedef struct Blender_824B43C0 Blender_824B43C0;

typedef struct BlenderVt_824B43C0 {
    void *pad0;
    Value_824B43C0 (*Blend)(Blender_824B43C0 *self, __vector4 sample, __vector4 accumulated); /* 0x04 */
} BlenderVt_824B43C0;

struct Blender_824B43C0 {
    BlenderVt_824B43C0 *vt;
};

Value_824B43C0 fn_824B43C0(Track_824B43C0 *track, int window, Blender_824B43C0 *blender, int channel)
{
    Value_824B43C0 result;
    __vector4 accumulated;
    __vector4 sample;
    int first;
    unsigned int last;
    unsigned int i;
    Key_824B43C0 *key;

    track->vt->GetRange(track, &first, &last);
    if (first < (int)(last - window + 1)) {
        first = last - window + 1;
    }
    accumulated = __VMXGetReg(77);
    for (i = first; i <= last; i++) {
        track->vt->GetKey(track, i, &key);
        sample = key->channels[channel].value;
        if (i == first) {
            accumulated = sample;
        } else {
            accumulated = blender->vt->Blend(blender, sample, accumulated).v;
        }
    }
    result.v = accumulated;
    return result;
}
