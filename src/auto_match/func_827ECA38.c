typedef struct Vec_827ECA38 { float v[4]; } Vec_827ECA38;
extern void fn_82810328(void *a, void *b, Vec_827ECA38 *out);
extern void fn_8281CAE8(void *m, Vec_827ECA38 *in, Vec_827ECA38 *out);
extern void fn_82810530(void *a, Vec_827ECA38 *out);
extern void fn_827EC970(Vec_827ECA38 *a, float f, Vec_827ECA38 *b, void *c);

void fn_827ECA38(void *a, float f, void *b, void *c, void *m)
{
  Vec_827ECA38 p;
  Vec_827ECA38 q;
  fn_82810328(a, b, &p);
  fn_8281CAE8(m, &p, &p);
  fn_82810530(c, &q);
  fn_827EC970(&p, f, &q, c);
}
