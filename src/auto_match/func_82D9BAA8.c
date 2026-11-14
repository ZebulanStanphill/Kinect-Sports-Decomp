struct Listener_82D9BAA8;
typedef struct ListenerVt_82D9BAA8 {
    void *pad[4];
    void (*notify)(struct Listener_82D9BAA8 *self, void *owner, int data, void *context, void *arg);
} ListenerVt_82D9BAA8;
typedef struct Listener_82D9BAA8 { ListenerVt_82D9BAA8 *vt; } Listener_82D9BAA8;
typedef struct Entry_82D9BAA8 { Listener_82D9BAA8 *listener; int data; } Entry_82D9BAA8;
typedef struct World_82D9BAA8 { char pad[0x78]; void *context; } World_82D9BAA8;
typedef struct Obj_82D9BAA8 {
    char pad0[8];
    World_82D9BAA8 *world;
    char padc[4];
    char base[0x150];
    Entry_82D9BAA8 *entries;
    int count;
} Obj_82D9BAA8;

void fn_82D9BAA8(Obj_82D9BAA8 *self, void *arg, void *context)
{
    int i;
    if (context == 0)
        context = self->world->context;
    for (i = self->count - 1; i >= 0; i--) {
        Entry_82D9BAA8 *e = &self->entries[i];
        e->listener->vt->notify(e->listener, self->base, e->data, context, arg);
    }
}
