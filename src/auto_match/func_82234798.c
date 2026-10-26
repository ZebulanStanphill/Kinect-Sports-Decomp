typedef struct O O;
typedef struct { void *f0, *f1, *f2, *f3, *f4; void (*get)(O *, int, char *); } OV;
struct O { OV *vt; };
typedef struct L L;
typedef struct { void *f0; void (*call)(L *, char *); } LV;
struct L { LV *vt; };
typedef struct { char pad[0x10]; L *listener; char pad2[4]; O *src; } Sub;
typedef struct { char pad[0x50]; Sub sub; } Self;

void fn_82234798(Self *self, int arg)
{
    char result[144];
    Sub *s = &self->sub;
    s->src->vt->get(s->src, arg, result);
    if (s->listener)
        s->listener->vt->call(s->listener, result);
}
