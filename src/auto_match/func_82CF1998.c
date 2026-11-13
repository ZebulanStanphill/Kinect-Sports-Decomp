extern int fn_82CE5410();
extern int fn_82CF16D0();
extern int fn_82CFBBF0();


unsigned __int64 fn_82CF1998(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,char param_4)

{
  int iVar2;
  int iVar3;
  unsigned __int64 uVar1;
  int iVar4;
  
  if ((param_4 != '\0') && (iVar3 = 0, param_1 != 0)) {
    iVar4 = 0;
    for (; ((param_2 & 0xffffffff) != 0 && (iVar3 < *(int *)(param_1 + 0x34))); iVar3 = iVar3 + 1) {
      iVar2 = *(int *)(iVar4 + *(int *)(param_1 + 0x30));
      if ((*(int *)(iVar2 + 0x4c) != 0) &&
         (iVar2 = fn_82CFBBF0(*(unsigned int *)(iVar2 + 0x4c),param_2), iVar2 == 0)) {
        return (unsigned __int64)*(unsigned int *)(iVar3 * 4 + *(int *)(param_1 + 0x30));
      }
      iVar4 = iVar4 + 4;
    }
  }
  iVar3 = fn_82CE5410();
  uVar1 = (**(int (***)())(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x58);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82CF16D0(uVar1,param_1,param_2,param_3);
  }
  return uVar1;
}

