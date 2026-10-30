struct L_826AACB0 { char p0[0xc]; unsigned r; char rest[0x2f0]; };
extern void fn_826F29B8(struct L_826AACB0 *, void *);
extern void fn_826F2AD8(struct L_826AACB0 *, void *);
extern void fn_826AA5A8(struct L_826AACB0 *, void *);
extern void fn_826AA628(struct L_826AACB0 *, void *);
extern void fn_826F1A90(struct L_826AACB0 *);
extern void fn_826F2588(struct L_826AACB0 *);
unsigned fn_826AACB0(void *a, void *b, void *c, void *d)
{
  struct L_826AACB0 l;
  unsigned r;
  fn_826F29B8(&l, a);
  fn_826F2AD8(&l, b);
  fn_826AA5A8(&l, c);
  fn_826AA628(&l, d);
  fn_826F1A90(&l);
  r = l.r;
  fn_826F2588(&l);
  return r;
}
