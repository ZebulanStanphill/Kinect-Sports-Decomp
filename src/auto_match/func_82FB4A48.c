typedef struct Request_82FB4A48 {
    int delay;    /* 0x00 */
    int position; /* 0x04 */
    int flags;    /* 0x08 */
} Request_82FB4A48;

typedef struct Callback_82FB4A48 Callback_82FB4A48;

typedef struct CallbackVtbl_82FB4A48 {
    void *slot0;
    void (*invoke)(Callback_82FB4A48 *self, int arg); /* 0x04 */
} CallbackVtbl_82FB4A48;

struct Callback_82FB4A48 {
    CallbackVtbl_82FB4A48 *vt;
};

typedef struct Pending_82FB4A48 {
    int pad0;
    Callback_82FB4A48 callback; /* 0x04 */
} Pending_82FB4A48;

typedef struct Stream_82FB4A48 Stream_82FB4A48;

typedef struct Queue_82FB4A48 Queue_82FB4A48;

typedef struct QueueVtbl_82FB4A48 {
    void *slots[11];
    void (*remove)(Queue_82FB4A48 *self, Stream_82FB4A48 *stream); /* 0x2c */
} QueueVtbl_82FB4A48;

struct Queue_82FB4A48 {
    QueueVtbl_82FB4A48 *vt;
};

struct Stream_82FB4A48 {
    char pad0[0x1c];
    Pending_82FB4A48 *pending; /* 0x1c */
    char pad20[0x30 - 0x20];
    unsigned int state; /* 0x30 */
    int length;         /* 0x34 */
    char pad38[4];
    int position;          /* 0x3c */
    Queue_82FB4A48 *queue; /* 0x40 */
    unsigned char stopped; /* 0x44 */
    char pad45[3];
    int offset; /* 0x48 */
};

extern const double lbl_8216CC20;
extern void fn_82FA8948(Queue_82FB4A48 *queue, Request_82FB4A48 *request, int flags);
extern void fn_82FA9208(Pending_82FB4A48 *pending);
extern void fn_82FB4990(Stream_82FB4A48 *self);

void fn_82FB4A48(Stream_82FB4A48 *self, Stream_82FB4A48 *next, unsigned char remove)
{
    Pending_82FB4A48 *pending;

    if (remove) {
        if (!self->stopped) {
            Request_82FB4A48 request;
            int remaining = -(self->offset + self->length);

            if (next != 0 && remaining >= next->offset) {
                request.delay = (int)(next->offset * lbl_8216CC20);
            } else {
                request.delay = (int)(remaining * lbl_8216CC20);
            }
            request.position = self->position;
            request.flags = 0;
            fn_82FA8948(self->queue, &request, 0);
        }
        self->queue->vt->remove(self->queue, self);
    }
    self->stopped = 0;
    self->state &= 0x7fffffff;
    if ((int)self->pending != 0) {
        self->pending->callback.vt->invoke(&self->pending->callback, 0);
    }
    pending = self->pending;
    self->pending = 0;
    if (pending != 0) {
        fn_82FA9208(pending);
    }
    fn_82FB4990(self);
}
