extern char lbl_8200579C[];
typedef struct { void *p0; void *p1; unsigned char flags; } Tmp;
typedef struct { int a; int b; unsigned char c; } Sub;
typedef struct {
  void *vt; int m4; int m8; Sub sub; int m18; int m1c; int m20;
} Obj;
extern void fn_826824B0(void *);
extern int fn_82696AD0(unsigned char *, int);
extern int fn_82696B20(Tmp *, unsigned char *, int);
extern void fn_826C3768(Sub *, int);

Obj *fn_8269DFA0(Obj *o, int a, unsigned char *s, int x, int y, int z)
{
  unsigned char ok;
  Sub *sub;
  o->m4 = a;
  o->vt = lbl_8200579C;
  o->m8 = fn_82696AD0(s, x);
  sub = &o->sub;
  sub->c = 0;
  sub->a = 0;
  sub->b = 0;
  o->m18 = x;
  o->m1c = y;
  o->m20 = z;
  ok = *s == 8 || *s == 11;
  if (ok) {
    Tmp t;
    fn_826C3768(sub, fn_82696B20(&t, s, x));
    if ((t.flags & 2) == 0 && t.p0 != 0) fn_826824B0(t.p0);
    t.p0 = 0;
    if ((t.flags & 1) == 0 && t.p1 != 0) fn_826824B0(t.p1);
  }
  return o;
}
