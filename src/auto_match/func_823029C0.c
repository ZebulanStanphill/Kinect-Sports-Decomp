typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int index);

typedef struct Track_823029C0 {
    char pad0[0x1c];
    unsigned char hasX;    /* 0x1c */
    unsigned char hasY;    /* 0x1d */
    unsigned char hasZ;    /* 0x1e */
    unsigned char hasRotX; /* 0x1f */
    unsigned char hasRotY; /* 0x20 */
    unsigned char hasRotZ; /* 0x21 */
    char pad22[0x2];
    float *keys;        /* 0x24 */
    float framesPerKey; /* 0x28 */
} Track_823029C0;

typedef struct Animation_823029C0 {
    char pad0[0x22];
    unsigned short frameCount; /* 0x22 */
    char pad24[0xc];
    Track_823029C0 *track; /* 0x30 */
} Animation_823029C0;

extern float fn_82809E58(float value);

__vector4 fn_823029C0(Animation_823029C0 *self)
{
    Track_823029C0 *track = self->track;
    __vector4 result = __VMXGetReg(77);

    if (track != 0) {
        int stride = (track->hasX != 0) + (track->hasY != 0) + (track->hasZ != 0);
        float *keys;
        float *key;
        unsigned int last;

        if (track->hasRotX || track->hasRotY || track->hasRotZ) {
            stride += 4;
        }
        keys = track->keys;
        last = (unsigned int)fn_82809E58((float)(self->frameCount - 1) * track->framesPerKey + 1.0f);
        key = keys + (last - 1) * stride;
        if (track->hasX) {
            result.vector4_f32[0] = *key;
            key++;
        }
        if (track->hasY) {
            result.vector4_f32[1] = *key;
            key++;
        }
        if (track->hasZ) {
            result.vector4_f32[2] = *key;
        }
    }
    return result;
}
