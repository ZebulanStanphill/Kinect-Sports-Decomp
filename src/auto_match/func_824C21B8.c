extern void *memcpy(void *, const void *, unsigned int);
extern void *fn_8265C9E0(int);
extern void fn_8265CA20(void *);
extern void fn_822315A0(void *);
extern void fn_82295A48(void *, void *);
extern void fn_824C04E0(void *, int);
extern void fn_82297DB0(void *, int, int);
typedef struct { int a; void *b; } Pair;
typedef struct { char pad[0x54]; int f54; int f58; void *f5c; unsigned __int64 f60; Pair p68; char sub70[1]; } O;
void fn_824C21B8(O *o, int a, int b, void *src, unsigned __int64 v, void *s)
{
  void *p;
  Pair *pp;
  void *old;
  o->f54 = a;
  o->f58 = b;
  p = fn_8265C9E0(0x428);
  if (p != 0) {
    memcpy(p, src, 0x428);
  } else {
    p = 0;
  }
  if (p != o->f5c) {
    if (o->f5c != 0) fn_8265CA20(o->f5c);
    o->f5c = p;
  }
  o->f60 = v;
  pp = &o->p68;
  old = pp->b;
  pp->b = 0;
  pp->a = 0;
  if (old != 0) fn_822315A0(old);
  fn_82295A48(o->sub70, s);
  fn_824C04E0(o, 1);
  fn_82297DB0(s, 1, 0);
}
