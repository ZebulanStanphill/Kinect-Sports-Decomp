/* Clears a 0x3c0-byte buffer and the two word pairs after it. The second pair is
   addressed first and the first one derived from it (p - 1), which leaves the
   original's dead addi of the second pair's address. */
typedef struct Pair_824F0B20 { int first; int second; } Pair_824F0B20;
extern void XMemSet(void *, int, int);

void fn_824F0B20(char *self)
{
  Pair_824F0B20 *p;
  Pair_824F0B20 *q;
  XMemSet(self + 0x16e0, 0, 0x3c0);
  p = (Pair_824F0B20 *)(self + 0x1aa8);
  q = p - 1;
  q->first = 0;
  q->second = 0;
  p->first = 0;
  p->second = 0;
}
