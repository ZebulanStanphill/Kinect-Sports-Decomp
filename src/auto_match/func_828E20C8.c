typedef struct Message_828E20C8 {
    char data[0x40];
} Message_828E20C8;

typedef struct Channel_828E20C8 Channel_828E20C8;
typedef struct Peer_828E20C8 Peer_828E20C8;

typedef struct ChannelVt_828E20C8 {
    void *slots[18];
    /* the peer goes in r4: the original loads it straight into that register */
    unsigned char (*IsOpen)(Channel_828E20C8 *self, Peer_828E20C8 *peer); /* 0x48 */
} ChannelVt_828E20C8;

struct Channel_828E20C8 {
    ChannelVt_828E20C8 *vt;
};

struct Peer_828E20C8 {
    char pad0[0x50];
    Channel_828E20C8 *channel; /* 0x50 */
};

typedef struct Entry_828E20C8 {
    Peer_828E20C8 *peer; /* 0x00 */
    char queue[0x18];    /* 0x04 */
} Entry_828E20C8;

typedef struct Vector_828E20C8 {
    Entry_828E20C8 *first; /* 0x00 */
    Entry_828E20C8 *last;  /* 0x04 */
} Vector_828E20C8;

typedef struct Session_828E20C8 {
    char pad0[8];
    unsigned int count;      /* 0x08 */
    Vector_828E20C8 entries; /* 0x0c */
} Session_828E20C8;

extern __declspec(noreturn) void fn_82F622E0(const char *message);
extern Message_828E20C8 *fn_828D4D10(Message_828E20C8 *message, void *source, const unsigned char *record);
extern void fn_828E1FD8(void *queue, Message_828E20C8 *message);
extern void fn_828AC488(Message_828E20C8 *message);

static __forceinline Entry_828E20C8 *At(Vector_828E20C8 *vector, unsigned int index)
{
    if ((unsigned int)(vector->last - vector->first) <= index) {
        fn_82F622E0("invalid vector<T> subscript");
    }
    return &vector->first[index];
}

void fn_828E20C8(Session_828E20C8 *session, void *source, const unsigned char *records, unsigned int count)
{
    unsigned int i;
    unsigned int j;
    Peer_828E20C8 *peer;
    Message_828E20C8 message;

    for (i = 0; i < session->count; i++) {
        peer = At(&session->entries, i)->peer;
        if (peer != 0 && peer->channel->vt->IsOpen(peer->channel, peer)) {
            for (j = 0; j < count; j++) {
                fn_828E1FD8(At(&session->entries, i)->queue,
                            fn_828D4D10(&message, source, records + j * 0x2a));
                fn_828AC488(&message);
            }
        }
    }
}
