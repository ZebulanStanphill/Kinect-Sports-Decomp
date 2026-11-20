typedef struct Owner_828ADFE8 {
    char pad000[0x78];
    unsigned char kind; /* 0x78 */
} Owner_828ADFE8;

typedef struct Channel_828ADFE8 {
    char pad000[0x14];
    int slot14; /* 0x14 */
    char pad018[0x4];
    int slot1c; /* 0x1c */
    char pad020[0x20];
    int slot40; /* 0x40 */
    char pad044[0x2c];
    Owner_828ADFE8 *owner; /* 0x70 */
    char pad074[0x4];
    unsigned int kind; /* 0x78 */
} Channel_828ADFE8;

typedef struct Session_828ADFE8 {
    char pad000[0x28];
    unsigned int kind; /* 0x28 */
} Session_828ADFE8;

typedef struct Peer_828ADE08 {
    char pad000[0x4];
    unsigned char state; /* 0x4 */
} Peer_828ADE08;

extern unsigned char fn_828ADCE8(Session_828ADFE8 *self, unsigned int kind, unsigned int minimum,
                                 unsigned int maximum, unsigned int arg5, int *arg6, int *arg7, int *arg8,
                                 unsigned char flag9, unsigned char flag10, unsigned char flag11,
                                 unsigned char flag12, unsigned char flag13, unsigned char flag14,
                                 unsigned char flag15, unsigned char flag16, unsigned char flag17,
                                 unsigned char flag18, Peer_828ADE08 *peer, unsigned char flag20,
                                 unsigned char flag21, unsigned char flag22);

unsigned char fn_828ADFE8(Session_828ADFE8 *self, Channel_828ADFE8 **channel, unsigned int kind,
                          unsigned int minimum, unsigned int maximum, unsigned int arg5, unsigned char flag12,
                          unsigned char flag13, unsigned char flag14, unsigned char flag15,
                          unsigned char flag16, unsigned char flag17, unsigned char flag18,
                          Peer_828ADE08 *peer, unsigned char flag20, unsigned char flag21)
{
    unsigned char ok;
    ok = minimum != 0 && maximum >= minimum;
    ok = ok && peer->state == 1;
    ok = ok && kind == (*channel)->kind;
    ok = ok && self->kind == (*channel)->owner->kind;
    if (ok) {
        return fn_828ADCE8(self, kind, minimum, maximum, arg5, &(*channel)->slot14, &(*channel)->slot40,
                           &(*channel)->slot1c, 0, 0, 1, flag12, flag13, flag14, flag15, flag16, flag17,
                           flag18, peer, flag20, flag21, 1);
    }
    return 0;
}
