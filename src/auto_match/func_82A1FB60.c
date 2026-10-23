extern void fn_8265C990(void *, unsigned int);
extern unsigned int lbl_8315D2EC;

typedef struct {
  char pad[0x1c];
  void **items;
  unsigned int count;
} S;

void fn_82A1FB60(S *p)
{
  unsigned int i;

  if (p != 0) {
    for (i = 0; i < p->count; i++) {
      fn_8265C990(p->items[i], lbl_8315D2EC);
    }
    fn_8265C990(p->items, lbl_8315D2EC);
    fn_8265C990(p, lbl_8315D2EC);
  }
}
