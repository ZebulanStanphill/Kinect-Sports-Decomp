typedef struct Clock_82FB56D8 {
    char pad0[0x1c];
    unsigned int time; /* 0x1c */
} Clock_82FB56D8;

typedef struct Timer_82FB56D8 {
    int pad0;
    Clock_82FB56D8 *clock; /* 0x4 */
} Timer_82FB56D8;

typedef struct Decoder_82FB56D8 {
    char pad0[0x58];
    Timer_82FB56D8 *timer; /* 0x58 */
} Decoder_82FB56D8;

typedef struct Packet_82FB56D8 {
    char pad0[8];
    int count;          /* 0x8 */
    int sequence;       /* 0xc */
    int end;            /* 0x10 */
    unsigned int flags; /* 0x14 */
    char data[4];       /* 0x18 */
} Packet_82FB56D8;

typedef struct Source_82FB56D8 {
    char pad0[0x60];
    void *track; /* 0x60 */
} Source_82FB56D8;

typedef struct Context_82FB56D8 {
    char pad0[0x40];
    Source_82FB56D8 *source; /* 0x40 */
} Context_82FB56D8;

typedef struct Stream_82FB56D8 {
    int pad0;
    Context_82FB56D8 *context; /* 0x4 */
} Stream_82FB56D8;

typedef struct Info_82FB56D8 {
    int id;     /* 0x0 */
    int pad4;   /* 0x4 */
    int length; /* 0x8 */
} Info_82FB56D8;

typedef struct Frame_82FB56D8 {
    char pad0[8];
    int minOffset;       /* 0x8 */
    char padc[0x28];     /* 0xc */
    int offset;          /* 0x34 */
    int count;           /* 0x38 */
    int sequence;        /* 0x3c */
    unsigned int time;   /* 0x40 */
    unsigned char ready; /* 0x44 */
    char pad45[3];       /* 0x45 */
    int available;       /* 0x48 */
} Frame_82FB56D8;

extern Frame_82FB56D8 *fn_82FB54D0(Decoder_82FB56D8 *self, Stream_82FB56D8 *stream, int arg,
                                   Info_82FB56D8 *info);
extern int fn_82FAE168(void *track);
extern int fn_82FAE150(void *track);
extern void fn_82FA9600(Frame_82FB56D8 *frame);
extern void fn_82FAA478(Context_82FB56D8 *context, unsigned int flag);
extern void fn_82FB42A0(Frame_82FB56D8 *frame, char *data, int length);

Frame_82FB56D8 *fn_82FB56D8(Decoder_82FB56D8 *self, Packet_82FB56D8 *packet, Stream_82FB56D8 *stream, int arg,
                            Info_82FB56D8 *info)
{
    unsigned int time = self->timer->clock->time;
    Frame_82FB56D8 *frame = fn_82FB54D0(self, stream, arg, info);
    void *track;
    int count;
    int offset;

    if (frame == 0) {
        return 0;
    }
    track = (int)stream->context->source != 0 ? stream->context->source->track : 0;
    offset = 0;
    count = packet->count;
    if (count > 0) {
        offset = packet->end - count * 48;
        if (-offset > frame->available) {
            count = frame->available + count + offset;
            offset = -frame->available;
        }
    } else if ((packet->flags & 0x4000000) != 0 && track != 0 && info->id == fn_82FAE168(track)) {
        offset = fn_82FAE150(track);
        fn_82FA9600(frame);
    }
    frame->sequence = packet->sequence;
    frame->count = count;
    frame->offset = offset;
    frame->time = time;
    frame->ready = 1;
    if (offset < frame->minOffset) {
        frame->minOffset = offset;
    }
    fn_82FAA478(stream->context, (packet->flags >> 26) & 1);
    fn_82FB42A0(frame, packet->data, -info->length);
    return frame;
}
