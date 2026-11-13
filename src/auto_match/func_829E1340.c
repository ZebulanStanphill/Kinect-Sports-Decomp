typedef unsigned int uint;
typedef struct { char d[0x590]; } Elem_829E1340;
typedef struct { Elem_829E1340 e[10]; int a; } Out_829E1340;
typedef struct { char pad[0xc]; unsigned short id; } Ctx_829E1340;
extern uint *fn_829E0C20(Ctx_829E1340 *c, unsigned short id);
extern void fn_82A1DDC0(void *d, void *s, int n);
extern int fn_829E1288(Elem_829E1340 *e, Ctx_829E1340 *ctx, unsigned short id);

int fn_829E1340(Out_829E1340 *out, Ctx_829E1340 *ctx, unsigned short id)
{
  uint *hdr;
  int hr;
  uint i;
  unsigned short *p;
  Elem_829E1340 *e;

  if (id == 0) {
    return 0x80004005;
  }
  hdr = fn_829E0C20(ctx, id);
  if (hdr == 0) {
    return 0x80004005;
  }
  fn_82A1DDC0(&out->a, hdr + 2, 4);
  p = (unsigned short *)((char *)hdr + (*hdr >> 14));
  e = out->e;
  for (i = 0; i < 10; i++) {
    if (*p == 0) {
      return 0x80004005;
    }
    hr = fn_829E1288(e, ctx, *p);
    if (hr < 0) {
      return hr;
    }
    e++;
    p++;
  }
  return 0;
}
