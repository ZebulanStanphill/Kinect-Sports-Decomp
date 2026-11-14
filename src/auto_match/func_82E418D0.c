typedef struct Handler_82E418D0 Handler_82E418D0;
typedef struct Msg_82E418D0 {
    char pad0[0x20];
    unsigned short type;        /* 0x20 */
} Msg_82E418D0;
typedef struct {
    void *slot[7];
    int (*handle)(Handler_82E418D0 *self, void *arg, Msg_82E418D0 *msg);
} HandlerVtbl_82E418D0;
struct Handler_82E418D0 { HandlerVtbl_82E418D0 *vt; };

typedef struct Obj_82E418D0 {
    char pad0[0x6c];
    Handler_82E418D0 *handlers[0x80];   /* 0x6c */
} Obj_82E418D0;
int fn_82E418D0(Obj_82E418D0 *self, void *arg, Msg_82E418D0 *msg)
{
    unsigned short t;
    if (msg == 0)
        return 0x80070057;
    t = msg->type;
    if (t <= 0x7f && self->handlers[t] != 0)
        return self->handlers[t]->vt->handle(self->handlers[t], arg, msg);
    return 0xc00d36b3;
}
