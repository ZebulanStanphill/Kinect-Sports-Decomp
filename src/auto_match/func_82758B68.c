typedef struct { int v[10]; } Elem;
typedef struct { Elem *data; unsigned int size; } Vec;
typedef struct { char pad[0x50]; Vec vec; } Owner;
typedef struct { int a, b; Owner *owner; int c, d; char pad[0x44 - 0x14]; int e, f; } Self;
extern void fn_827594F8(int *, int);
extern void fn_82758958(Vec *, int *);
Elem *fn_82758B68(Self *s) { Owner *o; fn_827594F8(&s->e, 0); s->f = 0; o = s->owner; fn_82758958(&o->vec, &s->e); s->c = o->vec.size; s->d = 0; return &s->owner->vec.data[s->owner->vec.size - 1]; }
