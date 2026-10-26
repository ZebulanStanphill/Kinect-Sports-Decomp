extern void fn_826BE840(char *p);
extern void fn_82681F88(int v);
extern void fn_826C3290(char *p);

void fn_826ABAA8(char *p)
{
  fn_826BE840(p);
  if (*(int *)(p + 0x30) != 0) {
    fn_82681F88(*(int *)(p + 0x30));
  }
  if (*(int *)(p + 0x34) != 0) {
    fn_82681F88(*(int *)(p + 0x34));
  }
  fn_826C3290(p + 0x3c);
}
