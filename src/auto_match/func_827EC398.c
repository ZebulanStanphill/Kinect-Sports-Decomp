extern void fn_827EBE60(void *, void *, void *, void *, void *);
extern void fn_82810328(void *, void *, void *);
extern void fn_82810530(void *, void *);
extern void fn_8281CB50(void *, void *, void *, int);

typedef struct { float v[3]; } Vec3_827EC398;
typedef struct { Vec3_827EC398 a, b, c; } Basis_827EC398;

void fn_827EC398(void *p1, void *p2, void *p3, void *p4, void *p5, void *p6)
{
  Basis_827EC398 m;
  float q[4];

  fn_82810328(p1, p4, &m.a);
  fn_82810328(p2, p4, &m.b);
  fn_82810328(p3, p4, &m.c);
  fn_8281CB50(p6, &m.a, &m.a, 3);
  fn_82810530(p5, q);
  fn_827EBE60(&m.a, &m.b, &m.c, q, p5);
}
