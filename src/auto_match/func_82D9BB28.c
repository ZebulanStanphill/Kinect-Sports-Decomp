typedef struct Listener_82D9BB28 Listener_82D9BB28;

typedef struct Result_82D9BB28 {
    int pad0;
    unsigned char done;
} Result_82D9BB28;

typedef struct ListenerVtbl_82D9BB28 {
    void *pad0[3];
    void (*process)(Listener_82D9BB28 *self, void *source, void *data, unsigned int filter, Result_82D9BB28 *result);
} ListenerVtbl_82D9BB28;

struct Listener_82D9BB28 {
    ListenerVtbl_82D9BB28 *vt;
};

typedef struct Entry_82D9BB28 {
    Listener_82D9BB28 *listener;
    void *data;
} Entry_82D9BB28;

typedef struct World_82D9BB28 {
    char pad0[0x78];
    unsigned int filter;
} World_82D9BB28;

typedef struct Self_82D9BB28 {
    char pad0[8];
    World_82D9BB28 *world;
    int pad0C;
    char source[0x150];
    Entry_82D9BB28 *entries;
    int count;
} Self_82D9BB28;

void fn_82D9BB28(Self_82D9BB28 *self, Result_82D9BB28 *result, unsigned int filter)
{
    int i;
    Entry_82D9BB28 *e;

    if (filter == 0) {
        filter = self->world->filter;
    }
    for (i = self->count - 1; i >= 0; i--) {
        e = &self->entries[i];
        e->listener->vt->process(e->listener, self->source, e->data, filter, result);
        if (result->done) {
            return;
        }
    }
}
