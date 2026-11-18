void *memcpy(void *dst, const void *src, unsigned int size);

typedef struct Key8_828D9620 {
    unsigned __int64 value;
} Key8_828D9620;

typedef struct Key16_828D9620 {
    unsigned char bytes[0x10];
} Key16_828D9620;

typedef struct Message_828D9620 {
    Key8_828D9620 id;         /* 0x00 */
    unsigned char info[0x24]; /* 0x08 */
    Key16_828D9620 key;       /* 0x2c */
} Message_828D9620;

typedef struct Target_828D9620 {
    char pad[0x8c];
    char *info; /* 0x8c */
} Target_828D9620;

typedef struct Session_828D9620 {
    char pad[0x4c];
    char *state; /* 0x4c */
} Session_828D9620;

typedef struct Peer_828D9620 Peer_828D9620;

typedef struct PeerVtbl_828D9620 {
    void *slots[3];
    Session_828D9620 *(*GetSession)(Peer_828D9620 *self); /* 0xc */
} PeerVtbl_828D9620;

struct Peer_828D9620 {
    PeerVtbl_828D9620 *vt;
};

typedef struct State_828D9620 {
    char pad[0x14];
    Target_828D9620 *target; /* 0x14 */
} State_828D9620;

extern unsigned char fn_828B0528(Target_828D9620 *target);
extern Peer_828D9620 *fn_828B0488(State_828D9620 *self);
extern int fn_828B0ED0(void *state, int index, int flag);
extern unsigned int fn_828D92C8(void *state, int a, int b);
extern unsigned char fn_828AD488(Target_828D9620 *target);
extern unsigned char fn_828AD0F8(Target_828D9620 *target);
extern void fn_828D93E0(void *state, Key8_828D9620 *id, Key16_828D9620 *key);
extern unsigned char fn_828A0B78(const void *a, const Key8_828D9620 *b);
extern unsigned char fn_828A0BB0(const void *a, const Key16_828D9620 *b);
extern void *fn_828AEBB8(Session_828D9620 *session);
extern void fn_82883E60(void *list, Message_828D9620 *message);
extern unsigned char fn_828EDE00(char *info, Message_828D9620 *message);
extern void fn_828B1468(State_828D9620 *self, int next);

void fn_828D9620(State_828D9620 *self, unsigned __int64 elapsed)
{
    Peer_828D9620 *peer;
    Session_828D9620 *session;
    char *info;
    char *state;
    int status;
    unsigned char idMatches;
    unsigned char keyMatches;
    Key8_828D9620 id;
    Key16_828D9620 key;
    Message_828D9620 message;

    if (!fn_828B0528(self->target)) {
        fn_828B1468(self, 7);
        return;
    }
    peer = fn_828B0488(self);
    if (peer == 0) {
        fn_828B1468(self, 7);
        return;
    }
    info = self->target->info;
    session = peer->vt->GetSession(peer);
    status = fn_828B0ED0(session->state + 0x38, 0, 0);
    switch (status) {
    case 3:
        if (elapsed > 7500) {
            fn_828B1468(self, 7);
        }
        break;
    case 6:
        state = session->state + 0x98;
        if (fn_828D92C8(state, 0, 0) != 0) {
            if (fn_828AD488(self->target)) {
                fn_828D93E0(state, &id, &key);
                idMatches = fn_828A0B78(info + 0x14, &id);
                keyMatches = fn_828A0BB0(info + 0x40, &key);
                if (idMatches && keyMatches) {
                    fn_828B1468(self, 6);
                } else {
                    fn_828B1468(self, 7);
                }
            } else if (fn_828AD0F8(self->target)) {
                fn_828D93E0(state, &id, &key);
                memcpy(message.info, fn_828AEBB8(session), sizeof(message.info));
                message.id = id;
                memcpy(&message.key, &key, sizeof(message.key));
                fn_82883E60(info + 0x14, &message);
                if (fn_828EDE00(info, &message)) {
                    fn_828B1468(self, 5);
                } else {
                    fn_828B1468(self, 7);
                }
            } else {
                fn_828B1468(self, 7);
            }
        } else if (elapsed > 10000) {
            fn_828B1468(self, 7);
        }
        break;
    default:
        fn_828B1468(self, 7);
        break;
    }
}
