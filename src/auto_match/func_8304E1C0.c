typedef struct Stream_8304E1C0 Stream_8304E1C0;

typedef struct StreamVt_8304E1C0 {
    void *pad0[8];
    void (*stop)(Stream_8304E1C0 *self); /* 0x20 */
    void *pad24[3];
    void (*flush)(Stream_8304E1C0 *self); /* 0x30 */
} StreamVt_8304E1C0;

struct Stream_8304E1C0 {
    StreamVt_8304E1C0 *vt;
};

typedef struct Format_8304E1C0 {
    char pad0[0x24];
    unsigned int bits; /* 0x24 */
} Format_8304E1C0;

typedef struct Owner_8304E1C0 {
    char pad0[0x6c];
    Format_8304E1C0 *format; /* 0x6c */
    char pad70[0x64];
    unsigned short rate; /* 0xd4 */
} Owner_8304E1C0;

typedef struct Voice_8304E1C0 {
    char pad0[8];
    Owner_8304E1C0 *owner; /* 0x08 */
    char padc[0x10];
    unsigned short rate; /* 0x1c */
    char pad1e[0xa];
    Stream_8304E1C0 *stream; /* 0x28 */
    char pad2c[4];
    unsigned int start;    /* 0x30 */
    unsigned int f34;      /* 0x34 */
    unsigned int f38;      /* 0x38 */
    unsigned int queued;   /* 0x3c */
    unsigned char playing; /* 0x40 */
    char pad41[3];
    unsigned int position; /* 0x44 */
    char pad48[8];
    unsigned int length; /* 0x50 */
} Voice_8304E1C0;

extern void fn_8304DE60(Voice_8304E1C0 *self, unsigned int start);

void fn_8304E1C0(Voice_8304E1C0 *self, int mode)
{
    unsigned int queued;
    unsigned int position;
    unsigned int align;

    if (self->stream != 0) {
        self->stream->vt->stop(self->stream);
        if (mode == 1) {
            if (self->queued != 0) {
                self->stream->vt->flush(self->stream);
                position = self->position;
                queued = self->queued;
                if (position >= queued) {
                    position = position - queued;
                    self->position = position;
                    align = (self->owner->format->bits >> 3) & 0x1f;
                    self->queued = 0;
                    self->f38 = 0;
                    self->f34 = 0;
                    self->position = position - position % align;
                } else {
                    self->queued = 0;
                    self->f38 = 0;
                    self->f34 = 0;
                    self->position = self->length - queued;
                }
            }
            self->playing = 0;
        } else if (mode == 0) {
            if (self->queued != 0) {
                self->stream->vt->flush(self->stream);
                self->f34 = 0;
                self->f38 = 0;
                self->queued = 0;
            }
            fn_8304DE60(self, self->start);
            self->rate = self->owner->rate;
            self->playing = 0;
        }
    }
}
