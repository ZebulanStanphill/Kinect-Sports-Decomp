typedef struct Edge_8285AC20 { char pad[0x34]; struct Node_8285AC20 *a; struct Node_8285AC20 *b; char pad2[4]; int f40; } Edge_8285AC20;
typedef struct Node_8285AC20 { char pad[0x30]; Edge_8285AC20 **edges; unsigned short count; char pad2[0xe]; int f44; } Node_8285AC20;
extern unsigned lbl_83211334[];
extern void fn_828114A8(unsigned, int);
extern int fn_828116B8(unsigned, int);
extern void fn_82811500(unsigned, int);
int fn_8285AC20(Node_8285AC20 *n);
int fn_8285AC20(Node_8285AC20 *n)
{
  int i;
  Edge_8285AC20 *e;
  Node_8285AC20 *o;
  fn_828114A8(lbl_83211334[2], n->f44);
  for (i = 0; i < n->count; i++) {
    e = n->edges[i];
    if (*(unsigned char *)(e->f40 + lbl_83211334[0]) != 0) {
      o = e->a == n ? e->b : e->a;
      if (fn_828116B8(lbl_83211334[2], o->f44) == 0) {
        if ((unsigned)o == lbl_83211334[1]) return 1;
        if (fn_8285AC20(o) != 0) return 1;
      }
    }
  }
  fn_82811500(lbl_83211334[2], n->f44);
  return 0;
}
