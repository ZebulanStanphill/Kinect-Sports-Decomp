typedef struct { int v[7]; } CRITSEC;
extern void RtlEnterCriticalSection(CRITSEC *cs);
extern void RtlLeaveCriticalSection(CRITSEC *cs);
typedef struct Obj Obj;
typedef struct { void *f0; void *f4; void (*release)(Obj *); } ObjVt;
struct Obj { ObjVt *vt; int ref; Obj *next; unsigned int key; };
typedef struct { CRITSEC cs; Obj *buckets[193]; } Map;
typedef struct { int pad; Map map; } Table;
typedef struct Link { struct Link *next; unsigned int key; } Link;
typedef struct { char pad[0x2c]; int x2c; } Self;
extern Table *lbl_832642E0;
extern int fn_83004FC0(Obj *o, int a, int b);

static Obj *lookup(Map *m, unsigned int key)
{
    Obj *o;
    RtlEnterCriticalSection(&m->cs);
    for (o = m->buckets[key % 193]; o != 0; o = o->next) {
        if (o->key == key) {
            o->ref++;
            RtlLeaveCriticalSection(&m->cs);
            return o;
        }
    }
    RtlLeaveCriticalSection(&m->cs);
    return 0;
}

void fn_8303BB18(Self *self, Link **head)
{
    Link *l;
    Obj *o;
    if (head == 0) return;
    for (l = *head; l != 0; l = l->next) {
        o = lookup(&lbl_832642E0->map, l->key);
        if (o != 0) {
            fn_83004FC0(o, self->x2c, 0);
            o->vt->release(o);
        }
    }
}
