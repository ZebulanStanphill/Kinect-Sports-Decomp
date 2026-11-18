typedef struct Decoder_82FB7AC0 Decoder_82FB7AC0;

typedef struct DecoderVtbl_82FB7AC0 {
    void *reserved00;                        /* 0x00 */
    void (*destroy)(Decoder_82FB7AC0 *self); /* 0x04 */
} DecoderVtbl_82FB7AC0;

struct Decoder_82FB7AC0 {
    DecoderVtbl_82FB7AC0 *vtbl; /* 0x00 */
    int reserved04[2];          /* 0x04 */
    int sizeC;                  /* 0x0c */
    int size10;                 /* 0x10 */
};

typedef struct Block_82FB7AC0 {
    char reserved00[0xe];  /* 0x00 */
    unsigned short length; /* 0x0e */
} Block_82FB7AC0;

typedef struct Stream_82FB7AC0 {
    char reserved00[0xc];     /* 0x00 */
    unsigned short channels;  /* 0x0c */
    char reserved0E[2];       /* 0x0e */
    Block_82FB7AC0 **begin;   /* 0x10 */
    Block_82FB7AC0 **end;     /* 0x14 */
    int reserved18;           /* 0x18 */
    unsigned int type;        /* 0x1c */
    int reserved20;           /* 0x20 */
    unsigned char sumLengths; /* 0x24 */
    char reserved25[3];       /* 0x25 */
    unsigned short id;        /* 0x28 */
} Stream_82FB7AC0;

typedef struct Reader_82FB7AC0 {
    Stream_82FB7AC0 *stream; /* 0x00 */
    unsigned short channels; /* 0x04 */
    unsigned char mode : 2;  /* 0x06 */
    unsigned char reserved : 6;
    char reserved07;
    Decoder_82FB7AC0 *decoder; /* 0x08 */
} Reader_82FB7AC0;

extern int lbl_831BC768;
extern void *fn_82FA5060(int heap, int size);
extern Decoder_82FB7AC0 *fn_8300CE88(void *mem);
extern Decoder_82FB7AC0 *fn_8300CF30(void *mem, unsigned short count);
extern int fn_8300CE00(Decoder_82FB7AC0 *decoder, unsigned short id);

static __forceinline unsigned int BlockCount(Stream_82FB7AC0 *stream)
{
    return stream->end - stream->begin;
}

int fn_82FB7AC0(Reader_82FB7AC0 *self, Stream_82FB7AC0 *stream)
{
    void *mem;

    self->stream = stream;
    self->mode = (stream->channels == 0) | 2;
    self->channels = stream->channels;
    switch (stream->type) {
    case 2:
        mem = fn_82FA5060(lbl_831BC768, 0x2c);
        self->decoder = mem ? fn_8300CF30(mem, (unsigned short)BlockCount(stream)) : 0;
        if (self->decoder != 0) {
            if (fn_8300CE00(self->decoder, stream->id) != 1) {
                self->decoder->vtbl->destroy(self->decoder);
                self->decoder = 0;
                return 2;
            }
            if (stream->sumLengths != 0) {
                Block_82FB7AC0 **it;
                Block_82FB7AC0 **end = stream->end;
                int total = 0;

                for (it = stream->begin; it != end; it++) {
                    total += (*it)->length;
                }
                self->decoder->size10 = total;
                self->decoder->sizeC = total;
            }
            return 1;
        }
        return 2;
    case 0:
        mem = fn_82FA5060(lbl_831BC768, 0x10);
        self->decoder = mem ? fn_8300CE88(mem) : 0;
        if (self->decoder == 0) {
            return 2;
        }
        break;
    case 1:
    case 3:
        self->mode |= 1;
        break;
    default:
        return 2;
    }
    return 1;
}
