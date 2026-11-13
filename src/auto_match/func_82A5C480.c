typedef struct Target_82A5C480 Target_82A5C480;
typedef struct TargetVtbl_82A5C480 {
    void *slots[6];
    int (*send)(Target_82A5C480 *self, int mode, const void *data, unsigned int size);
} TargetVtbl_82A5C480;
struct Target_82A5C480 {
    TargetVtbl_82A5C480 *vt;
};

typedef struct Owner_82A5C480 {
    int pad0;
    Target_82A5C480 *target;
    int pad8[2];
    void *queue;
    unsigned int threadId;
} Owner_82A5C480;

typedef struct Payload_82A5C480 {
    int mode;
    unsigned int size;
    unsigned char data[1];
} Payload_82A5C480;

typedef struct Message_82A5C480 {
    int hasHandle;
    void *handle;
    int type;
    Owner_82A5C480 *owner;
    Payload_82A5C480 payload;
} Message_82A5C480;

extern unsigned int lbl_83219D50;
extern int fn_82A5B680(Owner_82A5C480 *self, void *handle);
extern unsigned int fn_82A1BB18(void);
extern Message_82A5C480 *fn_82A3FF60(void *heap, unsigned int size, unsigned int tag, int flags);
extern int fn_82A5C760(void *queue, Message_82A5C480 *msg);
extern void fn_82A4F4E0(Message_82A5C480 *msg);
extern void *memcpy(void *dst, const void *src, unsigned int n);

int fn_82A5C480(Owner_82A5C480 *self, int mode, void *handle, const void *data, unsigned int size)
{
    int hr = 0;
    int direct;
    Message_82A5C480 *msg;
    Payload_82A5C480 *payload;

    direct = fn_82A5B680(self, handle);
    if (fn_82A1BB18() == self->threadId)
        direct = mode != 1 ? direct : 0;
    if (direct != 0) {
        self->target->vt->send(self->target, mode, data, size);
    } else {
        msg = fn_82A3FF60(&lbl_83219D50, size + 0x18, 0x20970006, 0);
        if (msg == 0) {
            hr = 0x8007000e;
        } else {
            msg->handle = handle;
            msg->owner = self;
            msg->type = 2;
            msg->hasHandle = handle != 0;
            payload = &msg->payload;
            payload->mode = mode;
            payload->size = size;
            memcpy(payload->data, data, size);
            hr = fn_82A5C760(self->queue, msg);
            if (hr < 0)
                fn_82A4F4E0(msg);
        }
    }
    return hr;
}
