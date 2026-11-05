typedef struct R_824C6D68 { int a; void *rep; } R_824C6D68;
typedef struct F_824C6D68 { void *f; R_824C6D68 r; } F_824C6D68;
extern R_824C6D68 *fn_82365BD8(R_824C6D68 *, R_824C6D68 *);
extern void fn_822315A0(void *);
extern void fn_824C8A90(void);

F_824C6D68 *fn_824C6D68(F_824C6D68 *out, R_824C6D68 *x)
{
  R_824C6D68 A, B;
  F_824C6D68 C, D, E, G;
  R_824C6D68 *pa, *pb;
  pa = fn_82365BD8(&A, x);
  pb = fn_82365BD8(&B, pa);
  C.f = (void *)fn_824C8A90;
  fn_82365BD8(&C.r, pb);
  if (pb->rep != 0) fn_822315A0(pb->rep);
  if (pa->rep != 0) fn_822315A0(pa->rep);
  D.f = C.f;
  fn_82365BD8(&D.r, &C.r);
  E.f = D.f;
  fn_82365BD8(&E.r, &D.r);
  G.f = E.f;
  fn_82365BD8(&G.r, &E.r);
  if (E.r.rep != 0) fn_822315A0(E.r.rep);
  if (D.r.rep != 0) fn_822315A0(D.r.rep);
  out->f = G.f;
  fn_82365BD8(&out->r, &G.r);
  if (G.r.rep != 0) fn_822315A0(G.r.rep);
  if (C.r.rep != 0) fn_822315A0(C.r.rep);
  if (x->rep != 0) fn_822315A0(x->rep);
  return out;
}
