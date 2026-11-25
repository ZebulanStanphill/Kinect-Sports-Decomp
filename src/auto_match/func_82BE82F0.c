typedef struct Server_82BE82F0 {
    char pad0[0x14];
    unsigned int flags; /* 0x14 */
} Server_82BE82F0;

typedef struct InAddr_82BE82F0 {
    unsigned int value;
} InAddr_82BE82F0;

typedef struct Connection_82BE82F0 {
    char pad0[0x80];
    Server_82BE82F0 *server; /* 0x80 */
    char pad84[0x18];
    int connected;   /* 0x9c */
    char session[4]; /* 0xa0 */
} Connection_82BE82F0;

extern int lbl_83175240;
extern int lbl_83175244;
extern char lbl_82196582[];

extern int fn_82BE5B38(Server_82BE82F0 *server);
extern int fn_82BE7908(int index, unsigned int *address);
extern void fn_82BE6638(Server_82BE82F0 *server, int reason);
extern int fn_82BE79F0(Server_82BE82F0 *server);
extern char *fn_82BEE7D0(int family, InAddr_82BE82F0 *address, char *buffer, int size);
extern const char *fn_82BE7A68(int index);
extern int fn_82BF2BE0(void *session, const char *name, unsigned int address, int port, int a, int b,
                       int secure);
extern void fn_82BE7AE0(Connection_82BE82F0 *self);
extern int fn_82BE5240(Connection_82BE82F0 *self, int code, char *message);

int fn_82BE82F0(Connection_82BE82F0 *self)
{
    int index;
    int result;
    int port;
    unsigned int address;
    unsigned int ip;
    InAddr_82BE82F0 in;
    char text[16];

    index = fn_82BE5B38(self->server);
    result = fn_82BE7908(index, &address);
    if (result != 0) {
        ip = address;
        if (ip == 0) {
            fn_82BE6638(self->server, 2);
            self->server = 0;
            result = fn_82BE5240(self, 0x321, lbl_82196582);
        } else {
            port = fn_82BE79F0(self->server);
            in.value = ip;
            fn_82BEE7D0(2, &in, text, 0x10);
            if (fn_82BF2BE0(self->session, fn_82BE7A68(index), ip, port, lbl_83175244, lbl_83175240,
                            (self->server->flags & 0xf000) == 0x1000) != 0) {
                self->connected = 1;
                return 0;
            }
            fn_82BE7AE0(self);
            result = fn_82BE5240(self, 800, lbl_82196582);
        }
    }
    return result;
}
