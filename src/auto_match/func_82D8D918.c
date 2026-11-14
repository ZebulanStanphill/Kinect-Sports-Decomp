struct Listener_82D8D918;
typedef struct ListenerVt_82D8D918 {
    void (*handle)(struct Listener_82D8D918 *self, void *event);
} ListenerVt_82D8D918;
typedef struct Listener_82D8D918 { ListenerVt_82D8D918 *vt; } Listener_82D8D918;

typedef struct Obj_82D8D918 {
    char pad[0x8c];
    Listener_82D8D918 **listeners;
    int count;
} Obj_82D8D918;

typedef struct Query_82D8D918 {
    Obj_82D8D918 *source;
    unsigned int key;
    unsigned int result;
} Query_82D8D918;
unsigned int fn_82D8D918(Obj_82D8D918 *self, unsigned int key)
{
    Query_82D8D918 q;
    int i;

    q.key = key;
    q.source = self;
    q.result = 0;
    for (i = self->count - 1; i >= 0; i--) {
        if (self->listeners[i] != 0) {
            Listener_82D8D918 *l = self->listeners[i];
            l->vt->handle(l, &q);
        }
    }
    return q.result;
}
