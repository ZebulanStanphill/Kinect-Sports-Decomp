typedef struct Event_822414E0 {
    int f0;
    int f4;
    int kind;               /* 0x08 */
    char pad[0x44 - 0xc];
    void *ptr;              /* 0x44 */
    void *rc;               /* 0x48 */
} Event_822414E0;

typedef struct O O;
typedef struct { void *f0, *f1, *f2, *f3, *f4; void (*get)(O *, int, Event_822414E0 *); } OV;
struct O { OV *vt; };
typedef struct L L;
typedef struct { void *f0; void (*call)(L *, Event_822414E0 *); } LV;
struct L { LV *vt; };
typedef struct { char pad[0x10]; L *listener; char pad2[4]; O *src; } Sub;
typedef struct { char pad[0x50]; Sub sub; } Self;

extern void fn_822315A0(void *);

void fn_822414E0(Self *self, int arg)
{
    Event_822414E0 e;
    Sub *s;
    e.ptr = 0;
    e.rc = 0;
    e.kind = 1;
    s = &self->sub;
    s->src->vt->get(s->src, arg, &e);
    if (s->listener)
        s->listener->vt->call(s->listener, &e);
    if (e.rc != 0)
        fn_822315A0(e.rc);
}
