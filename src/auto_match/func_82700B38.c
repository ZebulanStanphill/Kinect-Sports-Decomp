extern unsigned int *auStack_60;
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_82695750();
extern int fn_82696330();
extern int fn_8269A678();
extern int fn_826AEA50();


unsigned __int64
fn_82700B38(int param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  int iVar1;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar2;
  int iVar5;
  unsigned char auStack_60 [16];
  
  if (*(int *)(param_1 + 0x68) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *param_3;
    if (iVar1 != 0) {
      *(unsigned int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
    }
    iVar3 = 0;
    iVar1 = *param_3;
    if ((param_3[1] != 0) && (iVar3 = fn_8269A678(param_3[1],param_1), iVar3 != 0)) {
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    }
    if (iVar1 == 0) {
      iVar5 = iVar3 + 0x68;
      if (iVar3 == 0) {
        iVar5 = 0;
      }
    }
    else {
      iVar5 = iVar1 + 0x10;
    }
    iVar4 = (**(int (***)())(**(int **)(param_1 + 0x68) + 0x5c))();
    fn_82695750(auStack_60,param_3 + 2);
    uVar2 = fn_826AEA50(auStack_60,param_4,iVar5,iVar4,param_5,
                              (__int64)(*(int *)(iVar4 + 8) - *(int *)(iVar4 + 0xc) >> 4) +
                              ((unsigned __int64)*(unsigned int *)(iVar4 + 0x1c) & 0x7ffffff) * 0x20 + -0x20,
                              param_2);
    fn_82696330(auStack_60);
    if (iVar3 != 0) {
      fn_8267C498(iVar3);
    }
    if (iVar1 != 0) {
      fn_826824B0(iVar1);
    }
  }
  return uVar2;
}

