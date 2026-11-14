struct Listener_82D8D988;
typedef struct ListenerVt_82D8D988 {
    void *dtor;
    void (*handle)(struct Listener_82D8D988 *self, void *event);
} ListenerVt_82D8D988;
typedef struct Listener_82D8D988 { ListenerVt_82D8D988 *vt; } Listener_82D8D988;

typedef struct Obj_82D8D988 {
    char pad[0x8c];
    Listener_82D8D988 **listeners;
    int count;
} Obj_82D8D988;

typedef struct Event_82D8D988 {
    Obj_82D8D988 *source;
    unsigned int value;
    unsigned char flag;
} Event_82D8D988;

void fn_82D8D988(Obj_82D8D988 *self, unsigned int value, unsigned char flag)
{
    Event_82D8D988 event;
    int i;

    event.value = value;
    event.source = self;
    event.flag = flag;
    for (i = self->count - 1; i >= 0; i--) {
        if (self->listeners[i] != 0) {
            Listener_82D8D988 *l = self->listeners[i];
            l->vt->handle(l, &event);
        }
    }
}
