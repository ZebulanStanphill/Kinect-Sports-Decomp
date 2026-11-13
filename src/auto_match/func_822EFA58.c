extern int fn_822E5640();
extern int fn_822E5710();
extern int fn_822E57D8();
extern int fn_82397ED8();
extern int fn_82397F88();


void fn_822EFA58(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  if ((*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) ||
     (iVar1 = fn_82397F88(*(unsigned int *)(param_1 + 0x10)), iVar1 != 0)) {
    fn_822E5640(*(unsigned int *)(param_1 + 0xc));
  }
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc);
  if ((*(int *)(*(unsigned int *)(param_1 + 0xc) + 0x24) == 0) &&
     (iVar1 = fn_82397ED8(*(unsigned int *)(param_1 + 0x10)), iVar1 == 0)) {
    fn_822E57D8(uVar2);
  }
  iVar1 = fn_82397F88(*(unsigned int *)(param_1 + 0x10));
  if ((iVar1 != 0) || (iVar1 = fn_82397ED8(*(unsigned int *)(param_1 + 0x10)), iVar1 != 0)) {
    fn_822E5710(*(unsigned int *)(param_1 + 0xc));
  }
  return;
}

