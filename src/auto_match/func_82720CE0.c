typedef struct Message_82720CE0 {
    int kind;
    unsigned char handled;
    int b;
    int a;
} Message_82720CE0;

typedef struct Listener_82720CE0 Listener_82720CE0;

typedef struct ListenerVtbl_82720CE0 {
    void *slot0;
    void (*notify)(Listener_82720CE0 *self, void *sender, Message_82720CE0 *msg);
} ListenerVtbl_82720CE0;

struct Listener_82720CE0 {
    ListenerVtbl_82720CE0 *vt;
};

typedef struct Obj_82720CE0 {
    char pad0[0x10c];
    int listener;
} Obj_82720CE0;

int fn_82720CE0(Obj_82720CE0 *self, int a, int b)
{
    Message_82720CE0 msg;
    int listener = self->listener;

    if (listener != 0) {
        msg.handled = 0;
        msg.kind = 0xc;
        msg.b = b;
        msg.a = a;
        ((Listener_82720CE0 *)listener)->vt->notify((Listener_82720CE0 *)listener, self, &msg);
        return 1;
    }
    return 0;
}
