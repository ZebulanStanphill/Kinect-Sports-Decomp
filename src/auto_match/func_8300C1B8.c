typedef struct Handler Handler;
typedef struct HandlerVtbl {
    void *slots[10];
    int (*handle)(Handler *self, void *a, void *b, void *c);
} HandlerVtbl;
struct Handler {
    HandlerVtbl *vt;
};

typedef struct Entry {
    int key;
    Handler *handler;
} Entry;

typedef struct Obj {
    unsigned char pad[0x48];
    Entry *first;
    Entry *last;
} Obj;

int fn_8300C1B8(Obj *o, void *a, void *b, void *c)
{
    Entry *e;
    int r = 1;
    for (e = o->first; e != o->last; e++) {
        r = e->handler->vt->handle(e->handler, a, b, c);
        if (r != 1) {
            break;
        }
    }
    return r;
}
