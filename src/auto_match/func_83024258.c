typedef struct {
    int pad0;
    unsigned int type;
    char pad8[6];
    unsigned short count;
} Packet_83024258;

typedef struct {
    char pad[0x70];
    int state;
    char pad74[0x80 - 0x74];
    char stream[0x80];
    char extra[8];
    int error;
} Decoder_83024258;

extern int fn_83023E60(Decoder_83024258 *self);
extern void fn_83023090(void *stream, Packet_83024258 *pkt, void *extra);
extern void fn_830230D0(void *stream, Packet_83024258 *pkt, void *extra);

int fn_83024258(Decoder_83024258 *self, Packet_83024258 **pkt)
{
    int r = 1;
    if ((*pkt)->count != 0) {
        self->error = 0x2d;
        if (self->state == 2) {
            fn_83023E60(self);
        }
        self->state = 1;
        switch ((*pkt)->type) {
        case 3:
            fn_83023090(self->stream, *pkt, self->extra);
            break;
        case 0x3f:
            fn_830230D0(self->stream, *pkt, self->extra);
            break;
        default:
            r = 0x2e;
            break;
        }
    }
    return r;
}
