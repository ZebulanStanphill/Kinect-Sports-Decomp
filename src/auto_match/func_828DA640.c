typedef struct {
    unsigned char pad0[0x278];
    unsigned char timer[8];
} Connection_828DA640;

typedef struct {
    unsigned char pad0[0x18];
    int channel;
    unsigned char pad1c[0x6c - 0x1c];
    Connection_828DA640 *connection;
    unsigned char pad70[0x80 - 0x70];
    unsigned char pending;
    unsigned char pad81[7];
    __int64 start;
    __int64 end;
    unsigned char pad98[0x10];
    __int64 now;
} Session_828DA640;

extern void *fn_8265C9E0(unsigned int size);
extern void *fn_828DA5D8(void *mem, Connection_828DA640 *connection, Session_828DA640 *session);
extern void fn_82886518(void *task, int a, int b);
extern void fn_828BE158(Connection_828DA640 *connection, void *task, int channel, int flags);
extern unsigned char fn_828AD740(Connection_828DA640 *connection);
extern void fn_828AFF88(void *timer);
extern void fn_828AFF00(void *timer, __int64 delay);

int fn_828DA640(Session_828DA640 *self)
{
    if (self->pending != 0) {
        void *mem = fn_8265C9E0(0xb0);
        void *task = mem != 0 ? fn_828DA5D8(mem, self->connection, self) : 0;
        fn_82886518(task, -1, -1);
        fn_828BE158(self->connection, task, self->channel, 0);
    } else if (fn_828AD740(self->connection) == 0) {
        fn_828AFF88(self->connection->timer);
        fn_828AFF00(self->connection->timer, ((self->end - self->start) / 2 + self->now - self->end) * 1000);
    }
    return 1;
}
