typedef struct Buffer_82C2C0F0 {
    char pad0[8];
    short *data; /* 0x8 */
} Buffer_82C2C0F0;

typedef struct Channel_82C2C0F0 {
    char pad0[8];
    int position; /* 0x8 */
    char padc[0x68];
    short state; /* 0x74 */
    char pad76[4];
    short left;  /* 0x7a */
    short right; /* 0x7c */
    char pad7e[0x36];
    unsigned char active; /* 0xb4 */
    char padb5[0xf];
    float level; /* 0xc4 */
    char padc8[0xe0];
    Buffer_82C2C0F0 *buffer; /* 0x1a8 */
    char pad1ac[8];
    int enabled; /* 0x1b4 */
    char pad1b8[4];
    int count; /* 0x1bc */
    char pad1c0[0x530];
} Channel_82C2C0F0;

typedef struct Mixer_82C2C0F0 {
    char pad0[0x22];
    unsigned short channelCount; /* 0x22 */
    char pad24[0xdc];
    int volume; /* 0x100 */
} Mixer_82C2C0F0;

extern float fn_82C2E420(int a, int b);

int fn_82C2C0F0(Mixer_82C2C0F0 *self, Channel_82C2C0F0 *channels)
{
    short i;
    short half;

    for (i = 0; i < self->channelCount; i++) {
        channels[i].active = 0;
        channels[i].level = fn_82C2E420(0, 0);
    }
    for (i = 0; i < self->channelCount; i++) {
        channels[i].position = 0;
        channels[i].count = 0;
        channels[i].enabled = 1;
    }
    for (i = 0; i < self->channelCount; i++) {
        half = (short)self->volume / 2;
        channels[i].left = half;
        channels[i].right = half;
        *channels[i].buffer->data = (short)self->volume;
        channels[i].state = 0;
    }
    return 0;
}
