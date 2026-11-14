typedef struct Ctx_82543198 {
  char pad0[0x3244];
  void *res3244;
  void *res3248;
} Ctx_82543198;

typedef struct Dev_82543198 {
  Ctx_82543198 *ctx;   /* 0x00 */
  int pad04[4];
  unsigned int v14;    /* 0x14 */
  int v18;             /* 0x18 */
  int pad1c[2];
  unsigned int *v24;   /* 0x24 */
  unsigned int v28;    /* 0x28 */
  unsigned int v2c;    /* 0x2c */
} Dev_82543198;

typedef struct Viewport_82543198 {
  int a;
  int b;
} Viewport_82543198;

typedef struct State_82543198 {
  Viewport_82543198 *viewport;   /* 0x00 */
  unsigned int v4;
  void **p8;
  void **pc;
  unsigned int *v10;
  unsigned int v14;
  unsigned int v18;
  int v1c;
} State_82543198;

extern void fn_82543308(Dev_82543198 *d, void *p, unsigned int v);
extern void fn_82543440(Dev_82543198 *d, void *p, unsigned int v);
extern void fn_82543628(Dev_82543198 *d, void *p, unsigned int v);
extern void fn_82543940(Dev_82543198 *d, int v);
extern void fn_8262FE50(void *r);
extern void fn_8262FEC8(void *r);
extern void fn_82631578(Ctx_82543198 *c, void *r);
extern void fn_82631920(Ctx_82543198 *c, void *r);
extern void fn_82637FF0(Ctx_82543198 *c, unsigned int v);
extern void fn_82639F78(Ctx_82543198 *c, int a, int b, int c2, int d, int e);

void fn_82543198(Dev_82543198 *d, void *p, State_82543198 *s, int mode)
{
  Ctx_82543198 *ctx = d->ctx;
  void *cur = ctx->res3244;
  void *want = *s->pc;
  if (cur != 0) {
    fn_8262FE50(cur);
  }
  if (cur != want) {
    fn_82631578(ctx, want);
  }
  if (cur != 0) {
    fn_8262FEC8(cur);
  }
  if (d->v2c != s->v18) {
    fn_82543440(d, p, s->v18);
    d->v2c = s->v18;
  }
  if (d->v24 != s->v10) {
    if (mode == 3) {
      fn_82637FF0(d->ctx, *s->v10);
    }
    d->v24 = s->v10;
  }
  if (d->v28 != s->v14) {
    fn_82543628(d, p, s->v14);
    d->v28 = s->v14;
  }
  ctx = d->ctx;
  cur = ctx->res3248;
  want = *s->p8;
  if (cur != 0) {
    fn_8262FE50(cur);
  }
  if (cur != want) {
    fn_82631920(ctx, want);
  }
  if (cur != 0) {
    fn_8262FEC8(cur);
  }
  if (d->v14 != s->v4) {
    fn_82543308(d, p, s->v4);
    d->v14 = s->v4;
  }
  d->v18 = -1;
  fn_82639F78(d->ctx, 0, s->viewport->a, 0, s->viewport->b, 1);
  fn_82543940(d, s->v1c);
}
