struct L_8276B218 { char p0[0xc]; unsigned r; char rest[0x2f0]; };
extern void fn_826F29B8(struct L_8276B218 *, void *);
extern void fn_826F2AD8(struct L_8276B218 *, void *);
extern void fn_8276AC40(struct L_8276B218 *, void *);
extern void fn_8276AC40(struct L_8276B218 *, void *);
extern void fn_826F1A90(struct L_8276B218 *);
extern void fn_826F2588(struct L_8276B218 *);
unsigned fn_8276B218(void *a, void *b, void *c, void *d)
{
  struct L_8276B218 l;
  unsigned r;
  fn_826F29B8(&l, a);
  fn_826F2AD8(&l, b);
  fn_8276AC40(&l, c);
  fn_8276AC40(&l, d);
  fn_826F1A90(&l);
  r = l.r;
  fn_826F2588(&l);
  return r;
}
