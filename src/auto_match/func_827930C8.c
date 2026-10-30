struct L_827930C8 { char p0[0xc]; unsigned r; char rest[0x2f0]; };
extern void fn_826F29B8(struct L_827930C8 *, void *);
extern void fn_826F2AD8(struct L_827930C8 *, void *);
extern void fn_82792610(struct L_827930C8 *, void *);
extern void fn_82792590(struct L_827930C8 *, void *);
extern void fn_826F1A90(struct L_827930C8 *);
extern void fn_826F2588(struct L_827930C8 *);
unsigned fn_827930C8(void *a, void *b, void *c, void *d)
{
  struct L_827930C8 l;
  unsigned r;
  fn_826F29B8(&l, a);
  fn_826F2AD8(&l, b);
  fn_82792610(&l, c);
  fn_82792590(&l, d);
  fn_826F1A90(&l);
  r = l.r;
  fn_826F2588(&l);
  return r;
}
