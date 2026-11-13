typedef struct Conn_8302A198 {
    char pad0[0x10];
    void *socket;          /* 0x10 */
    char pad14[4];
    unsigned short pending;   /* 0x18 */
    char pad1a[2];
    int flags;    /* 0x1c */
    unsigned char pad20;
    unsigned char force;   /* 0x21 */
} Conn_8302A198;

extern unsigned char fn_83029BB0(Conn_8302A198 *self);
extern unsigned char fn_83029CF0(Conn_8302A198 *self);

int fn_8302A198(Conn_8302A198 *self)
{
    int result = 0x11;
    unsigned char ok;

    if (self->socket != 0) {
        if (self->flags & 1)
            ok = fn_83029CF0(self);
        else
            ok = fn_83029BB0(self);
        if ((self->flags & 2) && (!ok || self->force)) {
            self->pending = 0;
            result = 1;
        }
    }
    return result;
}
