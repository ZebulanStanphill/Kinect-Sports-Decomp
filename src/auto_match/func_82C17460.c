typedef struct History_82C17460 {
    char pad0[0x8];
    short *samples; /* 0x8 */
} History_82C17460;

typedef struct Channel_82C17460 {
    char pad0[0x74];
    short f74; /* 0x74 */
    char pad76[0x4];
    short f7a; /* 0x7a */
    short f7c; /* 0x7c */
    char pad7e[0x12a];
    History_82C17460 *history; /* 0x1a8 */
    char pad1ac[0x544];
} Channel_82C17460;

typedef struct Codec_82C17460 {
    char pad0[0x4];
    int f4; /* 0x4 */
    char pad8[0x1a];
    unsigned short channelCount; /* 0x22 */
    char pad24[0x24];
    int f48; /* 0x48 */
    char pad4c[0xb4];
    int f100; /* 0x100 */
    char pad104[0x3c];
    Channel_82C17460 *channels; /* 0x140 */
    char pad144[0x20];
    unsigned int *f164; /* 0x164 */
    char pad168[0x1c];
    int f184; /* 0x184 */
    int f188; /* 0x188 */
} Codec_82C17460;

typedef struct Decoder_82C17460 {
    Codec_82C17460 *codec; /* 0x0 */
    char pad4[0x8];
    int fc; /* 0xc */
    char pad10[0x4];
    int f14; /* 0x14 */
    char pad18[0x8];
    int f20; /* 0x20 */
    char pad24[0x18];
    int f3c; /* 0x3c */
    char pad40[0x5a];
    short f9a;   /* 0x9a */
    int f9c;     /* 0x9c */
    int fa0;     /* 0xa0 */
    int fa4;     /* 0xa4 */
    __int64 fa8; /* 0xa8 */
    __int64 fb0; /* 0xb0 */
    __int64 fb8; /* 0xb8 */
    char padc0[0x20];
    int fe0; /* 0xe0 */
    char pade4[0x8];
    int fec; /* 0xec */
    int ff0; /* 0xf0 */
    char padf4[0x20];
    int f114; /* 0x114 */
    char pad118[0x4];
    int f11c; /* 0x11c */
    char pad120[0xc];
    int f12c; /* 0x12c */
    char pad130[0x184];
    int f2b4; /* 0x2b4 */
    int f2b8; /* 0x2b8 */
} Decoder_82C17460;

extern void fn_82A6C8E8(int *state);
extern int fn_82C2C240(Codec_82C17460 *codec);
extern void *memset(void *dst, int value, unsigned int size);

int fn_82C17460(Decoder_82C17460 *self)
{
    Codec_82C17460 *codec;
    int i;

    if (self == 0) {
        return 0;
    }
    codec = self->codec;
    if (codec == 0) {
        return 0;
    }
    fn_82A6C8E8(&self->fe0);
    self->fec = 0;
    self->f11c = 1;
    self->ff0 = 0;
    memset(codec->f164, 0, codec->channelCount * 4);
    codec->f4 = -2;
    codec->f48 = 3;
    codec->f184 = 0;
    codec->f188 = 0;
    for (i = 0; i < codec->channelCount; i++) {
        codec->channels[i].f7a = (short)(codec->f100 / 2);
        codec->channels[i].f7c = codec->channels[i].f7a;
        codec->channels[i].history->samples[-1] = (short)codec->f100;
        codec->channels[i].f74 = 0;
    }
    self->fc = 1;
    self->f14 = 0;
    self->f114 = -2;
    self->fb8 = 0;
    self->fa0 = 0;
    self->fa4 = 2;
    self->f3c = 0;
    self->f2b8 = 1;
    self->f12c = 0;
    self->f2b4 = self->fe0 != 0 ? 2 : 1;
    self->f9c = 0;
    self->fa8 = 0x8000000000000000;
    self->fb0 = 0x8000000000000000;
    self->f9a = 0;
    self->f20 = 0;
    return fn_82C2C240(codec);
}
