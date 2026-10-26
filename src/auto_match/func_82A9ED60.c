extern void *fn_8265C940(int size, int tag);
extern void *fn_82A9CDB8(void *p);

void *fn_82A9ED60(void)
{
  void *p = fn_8265C940(0xac, 0x64870000);
  return p ? fn_82A9CDB8(p) : 0;
}
