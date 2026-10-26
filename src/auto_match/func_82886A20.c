extern void fn_82888170(void *a, int b, int c, int d);
extern void fn_82888228(void *a, int b, int c);

void fn_82886A20(void *a, void *b, unsigned char mask)
{
  while (mask != 0) {
    if (mask & 1) {
      fn_82888170(a, 2, 0x21, 1);
      fn_82888228(b, 0x21, 1);
    }
    mask >>= 1;
  }
}
