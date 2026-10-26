extern void fn_826BEDE8(char *p);
extern void fn_826824B0(int v);
extern void fn_826C3400(char *p);

void fn_826ABB00(char *p)
{
  fn_826BEDE8(p);
  if (*(int *)(p + 0x30) != 0) {
    fn_826824B0(*(int *)(p + 0x30));
  }
  if (*(int *)(p + 0x34) != 0) {
    fn_826824B0(*(int *)(p + 0x34));
  }
  fn_826C3400(p + 0x3c);
}
