typedef struct Node_829D08F0 {
  struct Node_829D08F0 *next;
  void *prev;
  char pad8[0x30 - 8];
  char sub[0x6c - 0x30];
  int state;
} Node_829D08F0;
typedef struct {
  char pad0[0x10];
  void *f10;
  unsigned f14;
  char pad18[0x20 - 0x18];
  Node_829D08F0 *cur;
  Node_829D08F0 *first;
  char pad28[0x38 - 0x28];
  int f38;
  char pad3c[0x78 - 0x3c];
  int f78;
} Q_829D08F0;
extern void fn_829CB790(void *);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void KeSetEvent(void *, int, int);
extern char lbl_8315C428[];
extern char lbl_83215000[];

void fn_829D08F0(int idx, Node_829D08F0 *n, int flag)
{
  Q_829D08F0 *q;
  Node_829D08F0 *first, *cur;
  RtlEnterCriticalSection(lbl_8315C428);
  q = ((Q_829D08F0 **)(lbl_83215000 + 0x2128))[idx];
  if (q != 0) {
    cur = q->cur;
    if (cur != 0) {
      cur->state = 0;
      fn_829CB790(cur->sub);
      first = q->first;
      q->cur->next = first;
      q->cur->prev = &q->first;
      first->prev = q->cur;
      q->first = q->cur;
      q->cur = 0;
    }
    if (q->f38 == 0 && flag == 0) {
      q->f78 = *(int *)(lbl_83215000 + 0x60);
      n->state = 3;
      q->cur = n;
    } else {
      n->state = 0;
      fn_829CB790(n->sub);
      first = q->first;
      n->prev = &q->first;
      n->next = first;
      first->prev = n;
      q->first = n;
      if (flag == 0 || (q->f14 & 0x10000) != 0) goto done;
    }
    KeSetEvent(q, 1, 0);
    if (q->f10 != 0) KeSetEvent(q->f10, 1, 0);
  }
done:
  RtlLeaveCriticalSection(lbl_8315C428);
}
