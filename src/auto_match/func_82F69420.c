extern int fn_82F80110();
extern int fn_82F80368();


void fn_82F69420(int param_1,unsigned int *param_2,int param_3)

{
  int iVar1;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((*(int *)(param_3 + 0xc) != 0) && (*(int *)(param_1 + 4) != 0)) {
    param_1 = *(int *)(*(int *)(param_1 + 4) + 4);
  }
  iVar1 = fn_82F80110(param_3,*param_2);
  iVar4 = *(int *)(param_3 + 0xc);
  if (iVar4 != 0) {
    iVar3 = iVar4 * 0x14;
    do {
      iVar5 = iVar3 + *(int *)(param_3 + 0x10);
      iVar6 = iVar5 + -0x14;
      if ((*(int *)(iVar5 + -0x10) < iVar1) && (iVar1 <= *(int *)(iVar5 + -0xc))) goto LAB_82f694a8;
      iVar4 = iVar4 + -1;
      iVar3 = iVar3 + -0x14;
    } while (iVar4 != 0);
  }
  iVar6 = 0;
LAB_82f694a8:
  if (iVar6 == 0) {
    lVar2 = -1;
  }
  else {
    lVar2 = (unsigned __int64)*(unsigned int *)(iVar6 + 4) + 1;
  }
  fn_82F80368(param_1,param_2,param_3,lVar2);
  return;
}

