extern void *memset(void *, int, unsigned int);
extern void fn_82A2AA90(void *);
extern void fn_82A2AA98(void *, void *, int);
extern void fn_82A2AAA0(void *, void *);

unsigned int fn_82880270(void *param_1)
{
  unsigned char ctx[0x60];
  unsigned int d[5];
  memset(ctx, 0, 0x58);
  fn_82A2AA90(ctx);
  fn_82A2AA98(ctx, param_1, 0x24);
  fn_82A2AAA0(ctx, d);
  return d[4] ^ d[3] ^ d[2] ^ d[1] ^ d[0];
}
