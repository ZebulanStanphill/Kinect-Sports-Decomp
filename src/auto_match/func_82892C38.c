typedef struct Session_82892C38 Session_82892C38;
typedef struct Client_82892C38 Client_82892C38;
typedef struct Peer_82892C38 Peer_82892C38;
typedef struct Packet_82892C38 Packet_82892C38;

typedef struct PeerNode_82892C38 {
    struct PeerNode_82892C38 *next;
    char pad4[0xc];
    Peer_82892C38 *peer;
} PeerNode_82892C38;

typedef struct PeerTree_82892C38 {
    int pad0;
    PeerNode_82892C38 *head;
    unsigned int size;
} PeerTree_82892C38;

typedef struct Network_82892C38 {
    char pad0[0x6c];
    PeerTree_82892C38 peers;
} Network_82892C38;

struct Client_82892C38 {
    struct {
        void *pad[3];
        unsigned int (*channel)(Client_82892C38 *);
    } *vt;

    char pad4[0x4c];
    Session_82892C38 *session; /* 0x50 */
};

struct Peer_82892C38 {
    struct {
        void *pad[12];
        unsigned char (*accept)(Peer_82892C38 *, Client_82892C38 *);
    } *vt;
};

struct Packet_82892C38 {
    struct {
        void (*destroy)(Packet_82892C38 *, unsigned int);
    } *vt;

    char pad4[0x48c];
    unsigned char pending; /* 0x490 */
    char pad491[3];
    char stream[0x2c]; /* 0x494 */
};

extern void *fn_8265C9E0(unsigned int bytes);
extern Packet_82892C38 *fn_8288E810(Packet_82892C38 *packet, Client_82892C38 *client);
extern unsigned char fn_8288EBC8(Peer_82892C38 *peer, int mode, Client_82892C38 *client);
extern unsigned char fn_828916D0(Packet_82892C38 *packet, Session_82892C38 *session, Peer_82892C38 *peer);
extern int fn_82897BD0(Client_82892C38 *client);
extern Network_82892C38 *fn_828A12E8(Session_82892C38 *session);
extern void fn_828BE158(Session_82892C38 *session, Packet_82892C38 *packet, int socket, int flags);
extern unsigned char fn_828C9758(void *manager, Peer_82892C38 *peer, unsigned int channel);
extern void fn_828C99A0(void *manager, Peer_82892C38 *peer, unsigned int channel, int sent);
extern void *fn_828CB310(void);
extern unsigned int fn_828E9D78(const void *stream);
extern void fn_828EA790(PeerNode_82892C38 **iterator);

void fn_82892C38(Client_82892C38 *self)
{
    Network_82892C38 *network = fn_828A12E8(self->session);
    PeerTree_82892C38 *peers = &network->peers;
    unsigned int channel = self->vt->channel(self);

    if (network->peers.size != 0) {
        Packet_82892C38 *packet = 0;
        PeerNode_82892C38 *iterator = peers->head->next;

        while (iterator != peers->head) {
            Peer_82892C38 *peer = iterator->peer;
            if (peer->vt->accept(peer, self) && fn_828C9758(fn_828CB310(), peer, channel)) {
                if (packet == 0) {
                    Packet_82892C38 *storage = fn_8265C9E0(sizeof(*packet));
                    packet = storage != 0 ? fn_8288E810(storage, self) : 0;
                }
                if (fn_8288EBC8(peer, 0, self)) {
                    int sent = 0;
                    if (fn_828916D0(packet, self->session, peer)) {
                        sent = 1;
                    }
                    fn_828C99A0(fn_828CB310(), peer, channel, sent);
                }
                if (fn_828E9D78(packet->stream) > 900) {
                    Session_82892C38 *session = self->session;
                    fn_828BE158(session, packet, fn_82897BD0(self), 1);
                    packet = 0;
                }
                fn_828EA790(&iterator);
            } else {
                fn_828EA790(&iterator);
            }
        }
        if (packet) {
            if (packet->pending) {
                Session_82892C38 *session = self->session;
                fn_828BE158(session, packet, fn_82897BD0(self), 1);
            } else {
                packet->vt->destroy(packet, 1);
            }
        }
    }
}
