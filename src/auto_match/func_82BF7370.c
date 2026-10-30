typedef struct Node_82BF7370 { int pad[4]; struct Node_82BF7370 *next; } Node_82BF7370;
typedef struct Obj_82BF7370 {
  int pad0[2];
  Node_82BF7370 **arr;
  unsigned n;
  Node_82BF7370 *f10;
  int f14;
  void *f18;
} Obj_82BF7370;
extern int fn_82BE8CF8(Node_82BF7370 *);
extern int fn_82BF71F8(void *);
extern void (*lbl_831751CC)(void *);

void fn_82BF7370(Obj_82BF7370 *p)
{
  Node_82BF7370 *nd;
  unsigned i;
  if (p != 0) {
    if (p->arr != 0) {
      for (i = 0; i < p->n; i++) {
        for (nd = p->arr[i]; nd != 0; nd = nd->next) {
          fn_82BE8CF8(nd);
        }
      }
    }
    if (p->arr != 0) {
      lbl_831751CC(p->arr);
      p->arr = 0;
    }
    p->f10 = 0;
    p->f14 = 0;
    if (p->f18 != 0) {
      fn_82BF71F8(p->f18);
      p->f18 = 0;
    }
  }
}
