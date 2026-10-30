struct L_82753D18 { char p0[0xc]; unsigned r; char rest[0x2f0]; };
extern void fn_826F29B8(struct L_82753D18 *, void *);
extern void fn_826F2AD8(struct L_82753D18 *, void *);
extern void fn_826AA628(struct L_82753D18 *, void *);
extern void fn_826AA628(struct L_82753D18 *, void *);
extern void fn_826F1A90(struct L_82753D18 *);
extern void fn_826F2588(struct L_82753D18 *);
unsigned fn_82753D18(void *a, void *b, void *c, void *d)
{
  struct L_82753D18 l;
  unsigned r;
  fn_826F29B8(&l, a);
  fn_826F2AD8(&l, b);
  fn_826AA628(&l, c);
  fn_826AA628(&l, d);
  fn_826F1A90(&l);
  r = l.r;
  fn_826F2588(&l);
  return r;
}
