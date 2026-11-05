extern unsigned char fn_82695468(int, int);
extern void fn_826954C0(int, const char *, int, int);
extern void fn_8268CC00(void *);
extern void fn_82741C18(unsigned, int, void *);

void fn_82742710(int self)
{
  char tmp[24];
  unsigned item;
  unsigned m;
  if (fn_82695468(self, 0xf) == 0) {
    fn_826954C0(self, "Matrix", 0, 0);
  } else {
    m = *(unsigned *)(self + 8);
    item = m != 0 ? m - 0x10 : 0;
    if (item != 0) {
      fn_8268CC00(tmp);
      fn_82741C18(item, *(int *)(self + 0x18), tmp);
    }
  }
}
