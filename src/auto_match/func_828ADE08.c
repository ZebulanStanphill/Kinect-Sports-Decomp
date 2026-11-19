typedef struct Request_828ADE08 {
    char pad000[0x8];
    int pending; /* 0x8 */
} Request_828ADE08;

typedef struct Session_828ADE08 {
    char pad000[0x8c];
    Request_828ADE08 *request; /* 0x8c */
} Session_828ADE08;

typedef struct Peer_828ADE08 {
    char pad000[0x4];
    unsigned char state; /* 0x4 */
} Peer_828ADE08;

extern unsigned char fn_828AD0F8(Session_828ADE08 *self);
extern unsigned char fn_828AD488(Session_828ADE08 *self);
extern unsigned char fn_828ACC40(Session_828ADE08 *self);
extern unsigned char fn_828ADCE8(Session_828ADE08 *self, unsigned int kind, unsigned int minimum,
                                 unsigned int maximum, unsigned int arg5, unsigned int arg6,
                                 unsigned int arg7, unsigned int arg8, unsigned char flag9,
                                 unsigned char flag10, unsigned char flag11, unsigned char flag12,
                                 unsigned char flag13, unsigned char flag14, unsigned char flag15,
                                 unsigned char flag16, unsigned char flag17, unsigned char flag18,
                                 Peer_828ADE08 *peer, unsigned char flag20, unsigned char flag21,
                                 unsigned char flag22);

unsigned char fn_828ADE08(Session_828ADE08 *self, unsigned int kind, unsigned int minimum,
                          unsigned int maximum, unsigned int arg5, unsigned int arg6, unsigned int arg7,
                          unsigned int arg8, unsigned char flag9, unsigned char flag10, unsigned char flag11,
                          unsigned char flag12, unsigned char flag13, unsigned char flag14,
                          unsigned char flag15, unsigned char flag16, unsigned char flag17,
                          unsigned char flag18, Peer_828ADE08 *peer, unsigned char flag20,
                          unsigned char flag21, unsigned char flag22)
{
    unsigned char ok;
    ok = fn_828AD0F8(self) || fn_828AD488(self);
    ok = ok && fn_828ACC40(self);
    ok = ok && self->request != 0;
    ok = ok && self->request->pending == 0;
    ok = ok && kind < 4;
    ok = ok && minimum != 0;
    ok = ok && maximum >= minimum;
    ok = ok && peer->state == 1;
    if (ok) {
        return fn_828ADCE8(self, kind, minimum, maximum, arg5, arg6, arg7, arg8, flag9, flag10, flag11,
                           flag12, flag13, flag14, flag15, flag16, flag17, flag18, peer, flag20, flag21,
                           flag22);
    }
    return ok;
}
