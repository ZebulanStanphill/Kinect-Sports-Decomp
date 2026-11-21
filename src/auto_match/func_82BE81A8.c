typedef struct Request_82BE81A8 {
    char pad0[0x18];
    int state; /* 0x18 */
} Request_82BE81A8;

typedef struct Handler_82BE81A8 Handler_82BE81A8;

typedef struct HandlerVtbl_82BE81A8 {
    void *slot0;
    void *slot4;
    void *slot8;
    int (*OnData)(Handler_82BE81A8 *self, char *data, int size); /* 0xc */
} HandlerVtbl_82BE81A8;

struct Handler_82BE81A8 {
    HandlerVtbl_82BE81A8 *vtbl;
};

typedef struct Connection_82BE81A8 {
    char pad0[0x2c];
    int chunkSize; /* 0x2c */
    char *buffer;  /* 0x30 */
    char pad34[0x4c];
    Request_82BE81A8 *request; /* 0x80 */
    char pad84[8];
    Handler_82BE81A8 *handler; /* 0x8c */
    char pad90[8];
    int received;   /* 0x98 */
    int status;     /* 0x9c */
    char socket[4]; /* 0xa0 */
} Connection_82BE81A8;

extern int lbl_83175240;
extern char lbl_82196582[];

extern void *memset(void *dst, int value, unsigned int size);
extern int fn_82BF2AF0(void *socket, char *buffer, int size);
extern int fn_82BF2DC0(void *socket);
extern void fn_82BE6638(Request_82BE81A8 *request, int reason);
extern void fn_82BE7AE0(Connection_82BE81A8 *self);
extern int fn_82BE5240(Connection_82BE81A8 *self, int error, const char *message);
extern void fn_82BE64E0(Request_82BE81A8 *request, int state);
extern void fn_82BE5FE0(Request_82BE81A8 *request);

int fn_82BE81A8(Connection_82BE81A8 *self)
{
    int size;
    int count;

    memset(self->buffer, 0, lbl_83175240);
    size = self->chunkSize;
    if (size == 0)
        return 0;
    count = fn_82BF2AF0(self->socket, self->buffer, size > lbl_83175240 ? lbl_83175240 : size);
    if (count == -1) {
        if (fn_82BF2DC0(self->socket) == 0)
            return 0;
        if (self->request->state == 0x200) {
            self->received = 0;
            fn_82BE7AE0(self);
            return 0;
        }
        fn_82BE6638(self->request, 2);
        self->request = 0;
        fn_82BE7AE0(self);
        return fn_82BE5240(self, 0x324, lbl_82196582);
    }
    if (self->request->state != 0x300) {
        if (count == 0) {
            self->received = 0;
            fn_82BE7AE0(self);
            return fn_82BE5240(self, 0x324, lbl_82196582);
        }
        fn_82BE64E0(self->request, 0x300);
        self->received = 0;
        fn_82BE5FE0(self->request);
    }
    if (self->handler->vtbl->OnData(self->handler, self->buffer, count) != 0) {
        self->request = 0;
        self->received = 0;
        self->status = 2;
    }
    if (count == 0)
        fn_82BE7AE0(self);
    return 0;
}
