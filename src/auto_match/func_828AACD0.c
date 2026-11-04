extern int fn_8240D928(int);
extern unsigned char fn_82897BA8(int);
extern void fn_8289AC08(int, int, int, int, int);
extern void fn_828A1318(int, int);
void fn_828AACD0(int param_1, unsigned char param_2, int param_3)
{
  unsigned iVar1;
  int iVar2;
  if (*(unsigned *)(param_1 + 0x20) == 0) return;
  if ((*(unsigned (**)(int))(**(int **)(param_1 + 0x20) + 0x14))(*(int *)(param_1 + 0x20)) == 0) return;
  if (*(unsigned *)(param_1 + 0x20) != 0) {
    iVar1 = (*(unsigned (**)(int))(**(int **)(param_1 + 0x20) + 0x14))(*(int *)(param_1 + 0x20));
  } else {
    iVar1 = 0;
  }
  iVar2 = fn_8240D928(param_3);
  if (param_2 != *(unsigned char *)(iVar1 + (iVar2 + 5) * 4)) {
    fn_8289AC08(param_1, 1, 0, 1, param_3);
    *(unsigned char *)(iVar1 + (iVar2 + 5) * 4) = param_2;
    fn_8289AC08(param_1, 1, 1, 1, param_3);
    if (fn_82897BA8(*(int *)(param_1 + 0x18)) == 0) {
      fn_828A1318(*(int *)(param_1 + 0x28), param_1);
    }
  }
}
