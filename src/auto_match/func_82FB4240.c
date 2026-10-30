typedef struct V V;
typedef struct { void *s[10]; unsigned char (*check)(V *v, void *o); } VT;
struct V { VT *vt; };
typedef struct { char pad[0x34]; unsigned char flags; } D;
typedef struct { char pad[0x1c]; D *d; char pad2[0x20]; V *v; } O;
unsigned char fn_82FB4240(O *o)
{
  return (o->d->flags & 0x80) == 0 && o->v->vt->check(o->v, o) != 0;
}
