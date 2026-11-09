/* Clears a 0x12c0-byte buffer and the two word pairs after it. The second pair is
   addressed first and the first one derived from it (p - 1), which leaves the
   original's dead addi of the second pair's address. */
typedef struct Pair_824EFEE0 { int first; int second; } Pair_824EFEE0;
extern void fn_82A1EFC0(void *, int, int);

void fn_824EFEE0(char *self)
{
  Pair_824EFEE0 *p;
  Pair_824EFEE0 *q;
  fn_82A1EFC0(self + 0x40, 0, 0x12c0);
  p = (Pair_824EFEE0 *)(self + 0x1308);
  q = p - 1;
  q->first = 0;
  q->second = 0;
  p->first = 0;
  p->second = 0;
}
