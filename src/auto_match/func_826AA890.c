extern void fn_8267C4F0(void *);
extern void *fn_826A9FB0(void);
extern void fn_826A9798(void *, void *, unsigned);
extern unsigned fn_826E7408(void *);
typedef struct { char pad[0x2c]; unsigned a2c; unsigned a30; unsigned a34; } Sub_826AA890;
typedef struct { char pad0[0x28]; char sub[1]; } Obj_826AA890;
typedef struct { int p0; void *h; } Self_826AA890;
#define SUBP(o) (*(Sub_826AA890 **)((char *)(o) + 0x314) ? *(Sub_826AA890 **)((char *)(o) + 0x314) : (Sub_826AA890 *)((char *)(o) + 0x28))
void fn_826AA890(Self_826AA890 *self, Obj_826AA890 *o)
{
  Sub_826AA890 *s;
  Sub_826AA890 *p = *(Sub_826AA890 **)((char *)o + 0x314);
  Sub_826AA890 *t;
  Sub_826AA890 *u;
  unsigned v;
  void *n;
  if (p == 0) s = (Sub_826AA890 *)((char *)o + 0x28); else s = p;
  n = fn_826A9FB0();
  if (self->h != 0) fn_8267C4F0(self->h);
  self->h = n;
  t = SUBP(o);
  v = fn_826E7408(t);
  u = SUBP(o);
  fn_826A9798(self->h, s, u->a30 - u->a34 - u->a2c + v);
}
