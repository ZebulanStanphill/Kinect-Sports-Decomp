typedef struct Handler_828D2F88 Handler_828D2F88;

typedef struct Session_828B0348 {
    char pad0[0x58];
    Handler_828D2F88 *handler; /* 0x58 */
} Session_828B0348;

extern unsigned char fn_828D2F88(Handler_828D2F88 *handler);

unsigned char fn_828B0348(Session_828B0348 *self)
{
    if (self->handler != 0) {
        return fn_828D2F88(self->handler);
    }
    return 0;
}
