struct Sub_82710E50;
typedef struct { void *s0[10]; void (*f28)(struct Sub_82710E50 *, void *, unsigned int, unsigned char *, unsigned char *); } Vt_82710E50;
typedef struct Sub_82710E50 { Vt_82710E50 *vt; } Sub_82710E50;
typedef struct { char pad[0x10]; Sub_82710E50 sub; } Obj_82710E50;
typedef struct { char pad[0x288]; int f288; } Inner_82710E50;
typedef struct { char pad[0x78]; unsigned int *f78; } Ctx_82710E50;
extern void *fn_8267B890(int, int, int);
extern void fn_82696330(void *);
extern Obj_82710E50 *fn_827108A8(void *, void *);

Obj_82710E50 *fn_82710E50(void *unused, Ctx_82710E50 *ctx)
{
  Obj_82710E50 *o;
  void *m;
  unsigned char a[16];
  unsigned char b[24];
  m = fn_8267B890(*(int *)((char *)*(void **)((char *)ctx + 0x78) + 0x288), 0x34, 0);
  if (m != 0) o = fn_827108A8(m, ctx);
  else o = 0;
  b[0] = 10;
  a[0] = 0;
  o->sub.vt->f28(&o->sub, (char *)ctx + 0x78, (*(unsigned int *)((char *)ctx + 0x78)) + 0x250, b, a);
  fn_82696330(b);
  return o;
}
