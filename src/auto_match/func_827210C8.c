extern int fn_826957D0();
extern int fn_826959C8();
extern float fn_826972E0();
extern int fn_826A7398();
extern int fn_826ADF90();
extern unsigned char fn_82720CE0(int, int, int);

void fn_827210C8(int param_1)
{
  char *puVar1;
  int uVar3;
  unsigned a;
  unsigned b;
  unsigned char ok;

  puVar1 = *(char **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  uVar3 = fn_826A7398(*(int *)(param_1 + 0x18));
  a = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    a = (unsigned)fn_826972E0(fn_826957D0(param_1, 0), *(int *)(param_1 + 0x18));
  }
  b = 0;
  if (*(int *)(param_1 + 0x1c) >= 2) {
    b = (unsigned)fn_826972E0(fn_826957D0(param_1, 1), *(int *)(param_1 + 0x18));
  }
  ok = fn_82720CE0(uVar3, b, a);
  if (ok == 0) {
    fn_826ADF90(*(int *)(param_1 + 0x18), "Warning: no user event handler interface is installed; Mouse.setCursorType failed.\n");
  }
}
