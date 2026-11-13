typedef unsigned char bool;
extern int fn_82F80110();


bool fn_82F69398(unsigned int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = fn_82F80110(param_2,*param_1);
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar2 != 0) {
    iVar3 = iVar2 * 0x14;
    do {
      iVar4 = iVar3 + *(int *)(param_2 + 0x10);
      iVar5 = iVar4 + -0x14;
      if ((*(int *)(iVar4 + -0x10) < iVar1) && (iVar1 <= *(int *)(iVar4 + -0xc))) goto LAB_82f69400;
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + -0x14;
    } while (iVar2 != 0);
  }
  iVar5 = 0;
LAB_82f69400:
  return iVar5 != 0;
}

