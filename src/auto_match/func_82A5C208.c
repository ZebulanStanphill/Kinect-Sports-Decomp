struct Sink_82A5C208;
typedef struct SinkVt_82A5C208 {
    void *pad[6];
    void (*write)(struct Sink_82A5C208 *self, int a, void *data, int b);   /* 0x18 */
    void *pad1c;
    void (*begin)(struct Sink_82A5C208 *self, int a);                     /* 0x20 */
    void (*end)(struct Sink_82A5C208 *self, int a);                       /* 0x24 */
} SinkVt_82A5C208;
typedef struct Sink_82A5C208 { SinkVt_82A5C208 *vt; } Sink_82A5C208;

typedef struct Payload_82A5C208 { int a; int b; char data[8]; } Payload_82A5C208;
typedef struct Msg_82A5C208 {
    int pad0;
    int pad4;
    unsigned int kind;
    int padc;
    Payload_82A5C208 payload;
} Msg_82A5C208;
typedef struct Obj_82A5C208 { int pad0; Sink_82A5C208 *sink; } Obj_82A5C208;

extern void fn_82A5C130(Obj_82A5C208 *self, Msg_82A5C208 *msg);
extern void fn_82A5C188(Obj_82A5C208 *self, Msg_82A5C208 *msg);

int fn_82A5C208(Obj_82A5C208 *self, Msg_82A5C208 *msg)
{
    switch (msg->kind) {
    case 0:
        fn_82A5C130(self, msg);
        break;
    case 1:
        fn_82A5C188(self, msg);
        break;
    case 2: {
        Payload_82A5C208 *p = &msg->payload;
        self->sink->vt->write(self->sink, p->a, p->data, p->b);
        break;
    }
    case 3:
        self->sink->vt->begin(self->sink, msg->payload.a);
        break;
    default:
        self->sink->vt->end(self->sink, msg->payload.a);
        break;
    }
    return 0;
}
