typedef struct { int a, b, c; } Vec_82259FF8;
typedef struct { void *vt; char pad[0x64]; void *vt2; char pad2[0x54]; Vec_82259FF8 v; } O_82259FF8;
extern void fn_822CA318(O_82259FF8 *, int);
extern O_82259FF8 *fn_8265C9E0(unsigned);
extern char lbl_821B1618[];
extern char lbl_821B166C[];
O_82259FF8 *fn_82259FF8(int param_1)
{
  O_82259FF8 *p = fn_8265C9E0(0xd0);
  if (p != 0) {
    fn_822CA318(p, param_1);
    p->vt = lbl_821B1618;
    p->vt2 = lbl_821B166C;
    { Vec_82259FF8 *v = &p->v; v->a = 0; v->b = 0; v->c = 0; }
    return p;
  }
  return 0;
}
