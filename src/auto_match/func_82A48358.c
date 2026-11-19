void *memset(void *, int, unsigned int);

typedef struct Marker_82A48358 {
    unsigned int remaining; /* 0x0 */
    unsigned int flags;     /* 0x4 */
    void *context;          /* 0x8 */
} Marker_82A48358;

typedef struct Node_82A48358 {
    Marker_82A48358 *item;      /* 0x0 */
    struct Node_82A48358 *next; /* 0x4 */
} Node_82A48358;

typedef struct List_82A48358 {
    char pad[0x18];
    Node_82A48358 *head; /* 0x18 */
} List_82A48358;

typedef struct Packet_82A48358 {
    void *data;            /* 0x0 */
    void *context;         /* 0x4 */
    unsigned int flags;    /* 0x8 */
    unsigned int size;     /* 0xc */
    unsigned int offset;   /* 0x10 */
    unsigned int length;   /* 0x14 */
    unsigned int pad18[4]; /* 0x18 */
} Packet_82A48358;

typedef struct Voice_82A48358 Voice_82A48358;

typedef struct VoiceVt_82A48358 {
    char pad000[0x1c];
    int (*Submit)(Voice_82A48358 *self, Packet_82A48358 *packet, int index); /* 0x1c */
} VoiceVt_82A48358;

struct Voice_82A48358 {
    VoiceVt_82A48358 *vt;
};

typedef struct Callback_82A48358 Callback_82A48358;

typedef struct CallbackVt_82A48358 {
    void *pad0;
    void *pad4;
    void (*OnError)(Callback_82A48358 *self, int hr); /* 0x8 */
} CallbackVt_82A48358;

struct Callback_82A48358 {
    CallbackVt_82A48358 *vt;
};

typedef struct Client_82A48358 {
    int pad0;
    Callback_82A48358 callback; /* 0x4 */
} Client_82A48358;

typedef struct Stream_82A48358 {
    char pad000[0x34];
    Client_82A48358 *client; /* 0x34 */
    char pad038[0x8];
    unsigned int blockAlign; /* 0x40 */
    char pad044[0x4c];
    Voice_82A48358 *voice; /* 0x90 */
    char pad094[0x14c];
    char *buffer; /* 0x1e0 */
    char pad1e4[0x38];
    List_82A48358 markers; /* 0x21c */
} Stream_82A48358;

extern Marker_82A48358 *fn_82A47B28(List_82A48358 *list, Node_82A48358 *node);
extern void fn_82A4F4E0(Marker_82A48358 *marker);

static __forceinline Marker_82A48358 *GetNext(Node_82A48358 **pos)
{
    Node_82A48358 *node = *pos;
    if (node != 0) {
        *pos = node->next;
        return node->item;
    }
    return 0;
}

void fn_82A48358(Stream_82A48358 *self, unsigned int bytes, unsigned int start)
{
    Packet_82A48358 packet;
    Node_82A48358 *pos;
    Node_82A48358 *node;
    Marker_82A48358 *marker;
    int hr;

    memset(&packet.context, 0, 0x24);
    packet.data = self->buffer + self->blockAlign * start * 2;
    packet.size = self->blockAlign * bytes * 2;
    packet.length = packet.size;
    pos = self->markers.head;
    while (pos != 0) {
        node = pos;
        marker = GetNext(&pos);
        if (bytes < marker->remaining) {
            marker->remaining -= bytes;
        } else {
            packet.flags = 0x10000000;
            if (marker->flags & 0x40) {
                packet.flags = 0x10000040;
            }
            packet.context = marker->context;
            fn_82A47B28(&self->markers, node);
            fn_82A4F4E0(marker);
        }
    }
    hr = self->voice->vt->Submit(self->voice, &packet, -2);
    if (hr < 0) {
        self->client->callback.vt->OnError(&self->client->callback, hr);
    }
}
