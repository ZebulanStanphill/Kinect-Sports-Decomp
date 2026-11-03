typedef struct Node_82FA7610 { struct Node_82FA7610 *next; unsigned key; unsigned pad8; unsigned flags; } Node_82FA7610;
typedef struct { Node_82FA7610 *head; } List_82FA7610;
typedef struct { unsigned key; unsigned val; unsigned kind : 2; unsigned rest : 30; } Slot_82FA7610;

extern List_82FA7610 lbl_831BC680;
extern int fn_82FA73C8(unsigned, int *, unsigned *, unsigned *);
extern Slot_82FA7610 *fn_82FA7C48(List_82FA7610 *);
extern void fn_82FA7CD0(List_82FA7610 *);
extern int fn_82FAABA8(int, Slot_82FA7610 *, unsigned, unsigned);

int fn_82FA7610(unsigned param_1, unsigned param_2)
{
  int ctx;
  unsigned a;
  unsigned b;
  Slot_82FA7610 *s;
  Node_82FA7610 *n;
  int r;

  ctx = 0;
  if (fn_82FA73C8(param_1, &ctx, &a, &b) > 0) {
    s = fn_82FA7C48(&lbl_831BC680);
    if (s == 0) {
      for (n = lbl_831BC680.head; n != 0; n = n->next) {
        if (n->key == param_1) {
          n->flags = n->flags | 0x80000000;
        }
      }
      return 0;
    }
    r = fn_82FAABA8(*(int *)(ctx + 0x38), s, b, a);
    if (r == 1) {
      s->key = param_1;
      s->val = param_2;
      s->kind = 1;
      return r;
    }
    fn_82FA7CD0(&lbl_831BC680);
  }
  return 0;
}
