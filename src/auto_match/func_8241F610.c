extern void fn_823608F8(void *, int, int);

typedef struct { int key; char pad[0x1a8]; } E8241;
typedef struct { E8241 *begin; E8241 *end; } V8241;
typedef struct { void *ctx; int x; V8241 v; int p[2]; unsigned sel; } O8241;
void fn_8241F610(O8241 *o)
{
  unsigned i;
  V8241 *v = &o->v;
  for (i = 0; i < (unsigned)((*v).end - (*v).begin); i++) {
    int f;
    if (i == o->sel || o->v.begin[i].key == o->v.begin[o->sel].key) f = 0; else f = 1;
    fn_823608F8(o->ctx, (*v).begin[i].key, f);
  }
}