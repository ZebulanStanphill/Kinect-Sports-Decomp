typedef struct Packet_830525B0 {
    unsigned __int64 time;        /* 0x00 */
    void *data;                   /* 0x08 */
    unsigned int size;            /* 0x0c */
    struct Packet_830525B0 *next; /* 0x10 */
} Packet_830525B0;

typedef struct Stream_830525B0 {
    char pad0[0x80];
    unsigned __int64 time; /* 0x80 */
    char pad88[8];
    int pending; /* 0x90 */
    int pad94;
    unsigned int remaining; /* 0x98 */
    Packet_830525B0 *head;  /* 0x9c */
    int pada0;
    unsigned int count;  /* 0xa4 */
    unsigned char index; /* 0xa8 */
} Stream_830525B0;

extern void fn_830514A8(Stream_830525B0 *stream);
extern void fn_83051D60(Stream_830525B0 *stream);

static __forceinline Packet_830525B0 *Nth(Stream_830525B0 *stream, unsigned char n)
{
    Packet_830525B0 *p = stream->head;
    unsigned int i;

    for (i = 0; i < n; i++) {
        p = p->next;
    }
    return p;
}

void *fn_830525B0(Stream_830525B0 *stream, unsigned int *size)
{
    Packet_830525B0 *packet;

    if (stream->index < stream->count) {
        packet = Nth(stream, stream->index);
        if (packet->time != stream->time) {
            stream->pending = 0;
            fn_83051D60(stream);
            *size = 0;
            return 0;
        }
        stream->index++;
        stream->time = packet->time + packet->size;
        stream->remaining -= packet->size;
        fn_830514A8(stream);
        *size = packet->size;
        return packet->data;
    }
    *size = 0;
    return 0;
}
