typedef struct Listener_82A59DB0 Listener_82A59DB0;

typedef struct {
    void *slot0;
    void (*notify)(Listener_82A59DB0 *self);
} ListenerVt_82A59DB0;

struct Listener_82A59DB0 {
    ListenerVt_82A59DB0 *vt;
};

typedef struct Node_82A59DB0 {
    Listener_82A59DB0 *listener;
    struct Node_82A59DB0 *next;
} Node_82A59DB0;

typedef struct {
    unsigned char pad[0x78];
    int x78;
    int pad7c;
    int active;
    unsigned char pad84[0x150 - 0x84];
    Node_82A59DB0 *listeners;
    unsigned char pad154[0x29c - 0x154];
    int x29c;
} Obj_82A59DB0;

extern void fn_82A59BF0(Obj_82A59DB0 *self);

static __forceinline Listener_82A59DB0 *GetNext(Node_82A59DB0 **pos)
{
    Node_82A59DB0 *node = *pos;
    if (node != 0) {
        *pos = node->next;
        return node->listener;
    }
    return 0;
}

void fn_82A59DB0(Obj_82A59DB0 *self, int notify)
{
    if (self->active != 0) {
        fn_82A59BF0(self);
        self->x29c = 0;
        if (notify != 0) {
            Node_82A59DB0 *pos = self->listeners;
            self->active = 0;
            while (pos != 0) {
                Listener_82A59DB0 *l = GetNext(&pos);
                l->vt->notify(l);
            }
        } else {
            self->active = 1;
        }
        self->x78 = 0;
    }
}
