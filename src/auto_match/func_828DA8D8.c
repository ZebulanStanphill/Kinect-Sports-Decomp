typedef struct Writer_828DA8D8 Writer_828DA8D8;
typedef struct Clock_828DA8D8 { char pad[0x278]; char timer[1]; } Clock_828DA8D8;

typedef struct Obj_828DA8D8 {
    char pad0[0x6c];
    Clock_828DA8D8 *clock;     /* +0x6c */
    char pad70[0x10];
    unsigned char isHost;      /* +0x80 */
    char pad81[7];
    __int64 baseTime;          /* +0x88 */
    __int64 f90;
    __int64 startTime;         /* +0x98 */
} Obj_828DA8D8;

extern __int64 fn_828AFF88(void *timer);
extern __int64 fn_828B00A0(void *timer);
extern void fn_8223C478(Writer_828DA8D8 *w, int bits, int a);
extern void fn_828E9DB8(Writer_828DA8D8 *w, int value, int bits);
extern void fn_828E9F18(Writer_828DA8D8 *w, __int64 value, int bits);

void fn_828DA8D8(Obj_828DA8D8 *self, Writer_828DA8D8 *w)
{
    __int64 now = fn_828AFF88(self->clock->timer);
    unsigned char isHost = self->isHost;
    fn_8223C478(w, 1, 0);
    fn_828E9DB8(w, isHost != 0, 1);
    if (self->isHost) {
        self->baseTime = now;
        fn_8223C478(w, 0x1e, 0);
        fn_828E9F18(w, now, 0x1e);
    } else {
        __int64 t = (int)now - (int)self->startTime + self->baseTime + 100000;
        __int64 u;
        fn_8223C478(w, 0x1e, 0);
        fn_828E9F18(w, t, 0x1e);
        u = fn_828B00A0(self->clock->timer);
        fn_8223C478(w, 0x1e, 0);
        fn_828E9F18(w, u, 0x1e);
    }
}
