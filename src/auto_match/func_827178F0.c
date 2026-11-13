extern int fn_82696BC8();
extern int fn_8269FD90();


unsigned __int64 fn_827178F0(int param_1,int param_2,int *param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  char cVar4;
  
  if ((*(unsigned int *)(*param_3 + 0xc) >> 0x1d & 1) != 0) {
    iVar1 = *(int *)(param_1 + -0x68);
    uVar3 = fn_8269FD90(param_1 + -0x68,param_3);
    cVar4 = (**(int (***)())(iVar1 + 0x100))(param_1 + -0x68,uVar3,param_4,0);
    if (cVar4 != '\0') {
      return 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 0) {
    if ((param_2 == 0) || (*param_3 != *(int *)(*(int *)(param_2 + 0x78) + 0x134))) {
      iVar1 = *(int *)(param_1 + 4);
      if ((iVar1 != 0) &&
         (cVar4 = (**(int (***)())(*(int *)(iVar1 + 0x10) + 0x10))(iVar1 + 0x10,param_2,param_3,param_4)
         , cVar4 != '\0')) {
        return 1;
      }
      if ((param_2 == 0) || (*param_3 != *(int *)(*(int *)(param_2 + 0x78) + 0xfc))) {
        return 0;
      }
      uVar2 = *(unsigned int *)(*(int *)(param_2 + 0x78) + 0x2a0);
    }
    else {
      uVar2 = *(unsigned int *)(param_1 + 4);
    }
    fn_82696BC8(param_4,uVar2);
    return 1;
  }
  uVar3 = (**(int (***)())(*(int *)(iVar1 + 0x10) + 0x10))(iVar1 + 0x10,param_2,param_3,param_4);
  return uVar3;
}

