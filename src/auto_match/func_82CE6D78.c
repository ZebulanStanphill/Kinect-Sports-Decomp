typedef struct Req {
    int start;
    int cur;
    int end;
    void *slotData;
    void *data;
    int f14;
    void *f18;
    int f1c;
    int slot;
} Req;

typedef struct Slot {
    char data[0x120];
    int user;
    unsigned char inUse;
    char pad125[3];
    int size;
    Req *req;
} Slot;

typedef struct Allocator Allocator;
typedef struct AllocatorVtbl {
    void *f0;
    int (*Alloc)(Allocator *a, int size);
} AllocatorVtbl;
struct Allocator {
    AllocatorVtbl *vtbl;
};

typedef struct Obj {
    char pad0[4];
    int f04;
    char pad8[0x14];
    Allocator alloc;
    char pad20[0x94c];
    int size;
    char pad970[4];
    int f974;
    char pad978[0x24];
    char f99c[0x140];
    Slot slots[0x20];
} Obj;

extern void fn_82CF6F38(void *data, int n, int m);

void fn_82CE6D78(Obj *o, Req *r, int user, int flags)
{
    int i;
    Slot *s;
    Slot *t;

    if ((flags & 1) != 0) {
        for (i = 0; i < 0x20; i++) {
            if (o->slots[i].inUse == 0) {
                o->slots[i].inUse = 1;
                break;
            }
        }
        t = &o->slots[i];
        t->user = user;
        fn_82CF6F38(t->data, o->f974, 8);
        r->slotData = 0;
        r->data = t->data;
        r->f1c = o->f974;
        r->f14 = o->f04;
        r->f18 = 0;
        r->slot = i;
        r->cur = 0;
        r->start = 0;
        r->end = 0;
    }
    if ((flags & 2) != 0) {
        int size = o->size;
        s = &o->slots[r->slot];
        if (size != 0) {
            int p = o->alloc.vtbl->Alloc(&o->alloc, size);
            r->cur = p;
            r->start = p;
            r->end = p + size;
            s->size = size;
            s->req = r;
        }
        r->slotData = s->data;
        r->f18 = o->f99c;
    }
}
