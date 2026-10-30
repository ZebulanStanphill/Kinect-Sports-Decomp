extern void *fn_8265C9E0(unsigned int n);
extern void fn_8305D7B8(void *p, int v);
extern int fn_8305D7C0(void *p);
extern void fn_83060380(void *it, void *src);
extern unsigned char fn_830603C0(void *it);
extern void *fn_830603D0(void *it);
extern void fn_83060CB0(void *it);
extern void fn_83060CD0(void *it);
extern void fn_8306AB38(void *a, void *b);
extern void *fn_8306AC38(void *p);

typedef struct {
  char pad0[0x10];
  void *h;
  unsigned char flag;
  char pad1[3];
  int index;
} Node_8306A6A0;

int fn_8306A6A0(void *src, void *list)
{
  char it[0x10];
  int n = 0;
  Node_8306A6A0 *nd;

  fn_83060380(it, src);
  fn_83060CB0(it);
  while (fn_830603C0(it) == 0) {
    nd = (Node_8306A6A0 *)fn_8265C9E0(0xa8);
    if (nd != 0) {
      nd = (Node_8306A6A0 *)fn_8306AC38(nd);
    } else {
      nd = 0;
    }
    nd->h = fn_830603D0(it);
    fn_8306AB38(list, nd);
    nd->index = n;
    n = n + 1;
    nd->flag = fn_8305D7C0(nd->h) == 2;
    fn_8305D7B8(nd->h, 0);
    fn_83060CD0(it);
  }
  return n;
}
