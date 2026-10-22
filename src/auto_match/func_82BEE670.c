extern void fn_82BE5240(void *ctx, int code, const char *msg);
extern void fn_82BE64E0(void *ctx, int state);
extern int fn_82BE6B58(void *ctx, void *a, int b, int c);
extern int fn_82BEE460(void *ctx, void *a, void *b, void *c);
extern char lbl_82196582[];

int fn_82BEE670(void *ctx, void *p2, void *p3, void *p4, void *p5)
{
  if (p2 == 0 || p3 == 0 || p4 == 0) {
    fn_82BE5240(ctx, 0x44c, lbl_82196582);
  } else if (fn_82BE6B58(ctx, p2, 0x200, 0x200) != 0 &&
             fn_82BEE460(ctx, p3, p4, p5) != 0) {
    fn_82BE64E0(ctx, 2);
    return 1;
  }
  return 0;
}
