struct O;
typedef struct {
  char p0[8]; void (*f8)(struct O *); void (*f0c)(struct O *);
  void (*f10)(struct O *); unsigned int (*f14)(struct O *); int (*f18)(struct O *);
  int (*f1c)(struct O *, int); char p1[0x28-0x20]; unsigned char (*f28)(struct O *);
} VT;
typedef struct O { VT *vt; } O;
typedef struct { char pad[0xc]; int stride; int base; } Sub;
typedef struct { char pad[8]; Sub sub; } R;
extern R *fn_82680AC8(int, int, unsigned int, int);
extern void fn_8267C498(R *);
R *fn_82685020(int unused, O *o, int p3)
{
  R *r;
  if (o == 0 || o->vt->f28(o) != 0) return 0;
  o->vt->f8(o);
  r = fn_82680AC8(2, o->vt->f18(o), o->vt->f14(o), p3);
  if (r != 0) {
    unsigned int i = 0;
    if (o->vt->f14(o) != 0) {
      Sub *s = (Sub *)((char *)r + 8);
      do {
        int v = i * s->stride;
        v += s->base;
        if (o->vt->f1c(o, v) == 0) {
          fn_8267C498(r);
          r = 0;
          break;
        }
        i++;
      } while (i < o->vt->f14(o));
    }
  }
  o->vt->f10(o);
  return r;
}
