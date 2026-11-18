typedef struct Decoder_82FB7980 Decoder_82FB7980;

typedef struct DecoderVtbl_82FB7980 {
    void *reserved00;                        /* 0x00 */
    void (*destroy)(Decoder_82FB7980 *self); /* 0x04 */
} DecoderVtbl_82FB7980;

struct Decoder_82FB7980 {
    DecoderVtbl_82FB7980 *vtbl; /* 0x00 */
    int reserved04[2];          /* 0x04 */
    int sizeC;                  /* 0x0c */
    int size10;                 /* 0x10 */
};

typedef struct Block_82FB7980 {
    char reserved00[0xe];  /* 0x00 */
    unsigned short length; /* 0x0e */
} Block_82FB7980;

typedef struct Stream_82FB7980 {
    char reserved00[0x10];     /* 0x00 */
    Block_82FB7980 **begin;    /* 0x10 */
    Block_82FB7980 **end;      /* 0x14 */
    int reserved18;            /* 0x18 */
    int type;                  /* 0x1c */
    Decoder_82FB7980 *decoder; /* 0x20 */
    unsigned char sumLengths;  /* 0x24 */
    char reserved25[3];        /* 0x25 */
    unsigned short id;         /* 0x28 */
} Stream_82FB7980;

extern int lbl_831BC768;
extern void *fn_82FA5060(int heap, int size);
extern Decoder_82FB7980 *fn_8300CE88(void *mem);
extern Decoder_82FB7980 *fn_8300CF30(void *mem, unsigned short count);
extern int fn_8300CE00(Decoder_82FB7980 *decoder, unsigned short id);

static __forceinline unsigned int BlockCount(Stream_82FB7980 *stream)
{
    return stream->end - stream->begin;
}

Decoder_82FB7980 *fn_82FB7980(Stream_82FB7980 *self)
{
    if (self->decoder == 0) {
        switch (self->type) {
        case 1: {
            void *mem = fn_82FA5060(lbl_831BC768, 0x10);
            self->decoder = mem ? fn_8300CE88(mem) : 0;
            break;
        }
        case 3: {
            void *mem = fn_82FA5060(lbl_831BC768, 0x2c);
            self->decoder = mem ? fn_8300CF30(mem, (unsigned short)BlockCount(self)) : 0;
            if (self->decoder != 0 && fn_8300CE00(self->decoder, self->id) != 1) {
                self->decoder->vtbl->destroy(self->decoder);
                self->decoder = 0;
            }
            if (self->decoder != 0 && self->sumLengths != 0) {
                Block_82FB7980 **it;
                int total = 0;

                for (it = self->begin; it != self->end; it++) {
                    total += (*it)->length;
                }
                self->decoder->size10 = total;
                self->decoder->sizeC = total;
            }
            break;
        }
        }
    }
    return self->decoder;
}
