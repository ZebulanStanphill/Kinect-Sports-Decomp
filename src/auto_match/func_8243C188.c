typedef struct { int a; void *b; } E8;
typedef struct {
  char pad0[0x1c4];
  void *v1c4; void *v1c8; void *v1cc;
  char pad1[0x350 - 0x1d0];
  E8 *b; E8 *e; E8 *c;
} S_8243C188;
extern void fn_822315A0(void *);
extern void fn_8243E0D8(void *);
extern void fn_824420B0(void *);
extern void fn_82454F08(void *);
extern void fn_8265CA20(void *);

static void destroy(E8 **pf, E8 *l) { E8 *f = *pf; for (; f != l; f++) if (f->b != 0) fn_822315A0(f->b); }
void fn_8243C188(S_8243C188 **param_1)
{
  S_8243C188 *o = *param_1;
  E8 *p, *v, *end;
  char *q;
  if (o != 0) {
    if (o->b != 0) {
      E8 *end = o->e;
      for (p = o->b; p != end; p++) {
        if (p->b != 0) fn_822315A0(p->b);
      }
      fn_8265CA20(o->b);
    }
    o->b = 0; o->e = 0; o->c = 0;
    fn_82454F08((char *)o + 0x208);
    fn_8243E0D8((char *)o + 0x1f0);
    fn_824420B0((char *)o + 0x1dc);
    if (o->v1c4 != 0) fn_8265CA20(o->v1c4);
    o->v1c4 = 0; o->v1c8 = 0; o->v1cc = 0;
    fn_8265CA20(o);
  }
}
