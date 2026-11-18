#include <string.h>

typedef struct Buffer_82FBC988 {
    unsigned int count; /* 0x0 */
    float *data;        /* 0x4 */
    int pad8[2];
} Buffer_82FBC988;

typedef struct Channel_82FBC988 {
    char pad0[0x14];
    unsigned int count; /* 0x14 */
    float *data;        /* 0x18 */
    char pad1c[0x20];
} Channel_82FBC988;

typedef struct Band_82FBC988 {
    int pad0;
    float level; /* 0x4 */
    int pad8[2];
} Band_82FBC988;

typedef struct Decoder_82FBC988 {
    int pad0[2];
    void *primary;        /* 0x8 */
    void *secondary;      /* 0xc */
    Band_82FBC988 *bands; /* 0x10 */
    int pad14;
    float gainA; /* 0x18 */
    float gainB; /* 0x1c */
    int pad20;
    Buffer_82FBC988 *historyB;  /* 0x24 */
    Buffer_82FBC988 *historyA;  /* 0x28 */
    Channel_82FBC988 *channels; /* 0x2c */
    char pad30[0xd0];
    unsigned int channelCount; /* 0x100 */
    unsigned int bandCount;    /* 0x104 */
} Decoder_82FBC988;

extern void fn_82FC9CF8(void *primary);
extern void fn_82FCA280(void *secondary);

int fn_82FBC988(Decoder_82FBC988 *self)
{
    unsigned int i;

    if (self->primary != 0) {
        fn_82FC9CF8(self->primary);
    } else if (self->secondary != 0) {
        fn_82FCA280(self->secondary);
    }
    for (i = 0; i < self->channelCount; i++) {
        if (self->channels != 0 && self->channels[i].data != 0) {
            memset(self->channels[i].data, 0, self->channels[i].count * 4);
        }
        if (self->historyA != 0 && self->historyA[i].data != 0) {
            memset(self->historyA[i].data, 0, self->historyA[i].count * 4);
        }
        if (self->historyB != 0 && self->historyB[i].data != 0) {
            memset(self->historyB[i].data, 0, self->historyB[i].count * 4);
        }
    }
    self->gainA = 0.0f;
    {
        float *gainB = &self->gainB;
        *gainB = 0.0f;
    }
    for (i = 0; i < self->bandCount; i++) {
        self->bands[i].level = 0.0f;
    }
    return 1;
}
