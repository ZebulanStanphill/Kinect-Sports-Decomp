typedef struct Codec_8302CCB0 Codec_8302CCB0;
typedef struct CodecVtbl_8302CCB0 {
    void *s0;
    int (*init)(Codec_8302CCB0 *self);
} CodecVtbl_8302CCB0;
struct Codec_8302CCB0 { CodecVtbl_8302CCB0 *vt; };

typedef struct Decoder_8302CCB0 {
    unsigned char pad[0x88];
    Codec_8302CCB0 *codec;
    int slots[31];
    int count;
    unsigned char pad10c[0x13];
    unsigned char format;
} Decoder_8302CCB0;

extern int fn_82FFF750(Decoder_8302CCB0 *self);
extern void *fn_82FA5060(int heap, int size);
extern Codec_8302CCB0 *fn_8303E5A8(void *mem);
extern Codec_8302CCB0 *fn_8303E600(void *mem);
extern int lbl_831BC768;

int fn_8302CCB0(Decoder_8302CCB0 *self)
{
    int result;
    int i;
    void *mem;

    result = fn_82FFF750(self);
    if (result != 1) {
        return result;
    }
    {
        int *p = self->slots;
        self->count = 0;
        for (i = 0; i < 31; i++) {
            p[i] = 0;
        }
    }
    if ((self->format & 0xe0) == 0x20) {
        mem = fn_82FA5060(lbl_831BC768, 0x10);
        self->codec = mem ? fn_8303E5A8(mem) : 0;
    } else {
        mem = fn_82FA5060(lbl_831BC768, 0x10);
        self->codec = mem ? fn_8303E600(mem) : 0;
    }
    if (self->codec != 0) {
        return self->codec->vt->init(self->codec);
    }
    return 2;
}
