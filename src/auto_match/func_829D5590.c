typedef struct { int a, b; } Pair_829D5590;
typedef struct { int tag; int count; Pair_829D5590 items[2]; } Msg_829D5590;
extern Pair_829D5590 lbl_8205788C[];

Msg_829D5590 *fn_829D5590(Msg_829D5590 *p)
{
  int i;
  p->count = 2;
  for (i = 0; i < 2; i++) {
    p->items[i].a = lbl_8205788C[i].a;
    p->items[i].b = lbl_8205788C[i].b;
  }
  p->tag = 0x34;
  return (Msg_829D5590 *)((int *)p + (p->count + 1) * 2);
}
