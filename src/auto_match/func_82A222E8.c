typedef struct Node_82A222E8 { struct Node_82A222E8 *next; struct Node_82A222E8 *prev; int pool; char data[0x1000]; } Node_82A222E8;
typedef struct { char pad[0x100]; Node_82A222E8 *head; Node_82A222E8 *tail; unsigned int count; } Glob_82A222E8;
extern Glob_82A222E8 lbl_83219B90;
extern int lbl_8315D2EC;
extern Node_82A222E8 *fn_8265C940(int, int);
extern int fn_82A20618(int);
extern int fn_82A207C8(void *, int, int, int);
extern int *fn_82A21B98(int, int, int);

static __forceinline Node_82A222E8 *Grow_82A222E8(void)
{
  Node_82A222E8 *n;
  Node_82A222E8 *t;
  n = fn_8265C940(0x100c, lbl_8315D2EC);
  if (n != 0) {
    n->pool = fn_82A207C8(n->data, 0x1000, 4, 1);
    t = lbl_83219B90.tail;
    n->next = (Node_82A222E8 *)&lbl_83219B90.head;
    n->prev = t;
    t->next = n;
    lbl_83219B90.tail = n;
  }
  return n;
}

void fn_82A222E8(int param_1, int param_2, int param_3)
{
  Node_82A222E8 *n;
  int *r;

  if (lbl_83219B90.count < 1000) {
    lbl_83219B90.count = lbl_83219B90.count + 1;
    if (lbl_83219B90.head == (Node_82A222E8 *)&lbl_83219B90.head) {
      n = Grow_82A222E8();
    }
    else {
      n = lbl_83219B90.tail;
    }
    r = fn_82A21B98(n->pool, param_2, param_3);
    if (r == 0) {
      n = Grow_82A222E8();
      r = fn_82A21B98(n->pool, param_2, param_3);
      if (r == 0) {
        return;
      }
    }
    *r = param_1;
    fn_82A20618(2);
  }
}
