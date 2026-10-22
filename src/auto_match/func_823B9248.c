typedef struct Obj Obj;
typedef struct ObjVtbl {
    void (*dtor)(Obj *self, int flags);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};

typedef struct Entry {
    char pad[0xc];
    void *buf;
    Obj *obj;
} Entry;

typedef struct Queue {
    int unk0;
    Entry **items;
    unsigned int capacity;
    unsigned int head;
    unsigned int count;
} Queue;

extern void fn_822315A0(void *p);

void fn_823B9248(Queue *q)
{
    unsigned int idx;
    Entry *e;
    Obj *o;

    if (q->count != 0) {
        idx = q->count + q->head - 1;
        if (q->capacity <= idx) {
            idx -= q->capacity;
        }
        e = q->items[idx];
        o = e->obj;
        if (o != 0) {
            o->vtbl->dtor(o, 1);
        }
        if (e->buf != 0) {
            fn_822315A0(e->buf);
        }
        if (--q->count == 0) {
            q->head = 0;
        }
    }
}
