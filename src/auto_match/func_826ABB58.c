extern void fn_826BEF40(char *p);
extern void fn_826820F0(int v);
extern void fn_826C3448(char *p);

void fn_826ABB58(char *p)
{
  fn_826BEF40(p);
  if (*(int *)(p + 0x30) != 0) {
    fn_826820F0(*(int *)(p + 0x30));
  }
  if (*(int *)(p + 0x34) != 0) {
    fn_826820F0(*(int *)(p + 0x34));
  }
  fn_826C3448(p + 0x3c);
}
