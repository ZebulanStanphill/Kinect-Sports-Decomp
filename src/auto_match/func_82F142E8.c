extern void fn_8265C990(unsigned int, unsigned int);
extern void fn_82F44BD0(unsigned int);

void fn_82F142E8(int param_1)
{
  unsigned int iVar1;

  iVar1 = *(unsigned int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    fn_82F44BD0(iVar1);
  }
  iVar1 = *(unsigned int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    fn_82F44BD0(iVar1);
  }
  iVar1 = *(unsigned int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    fn_82F44BD0(iVar1);
  }
  iVar1 = *(unsigned int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    fn_82F44BD0(iVar1);
    fn_8265C990(iVar1,0x248c8000);
    *(unsigned int *)(param_1 + 0x38) = 0;
  }
  iVar1 = *(unsigned int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    fn_82F44BD0(iVar1);
    fn_8265C990(iVar1,0x248c8000);
    *(unsigned int *)(param_1 + 0x3c) = 0;
  }
  iVar1 = *(unsigned int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    fn_82F44BD0(iVar1);
    fn_8265C990(iVar1,0x248c8000);
    *(unsigned int *)(param_1 + 0x40) = 0;
  }
}
