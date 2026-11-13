extern int fn_82268638();
extern int fn_8260D428();


int * fn_82538390(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != param_3) {
    do {
      iVar3 = param_2;
      param_2 = iVar3 + 0x38;
      if (param_2 == param_3) goto LAB_82538400;
      if (*(unsigned int *)(iVar3 + 0x54) < 0x10) {
        iVar1 = iVar3 + 0x40;
      }
      else {
        iVar1 = *(int *)(iVar3 + 0x40);
      }
      iVar1 = fn_8260D428(iVar3 + 8,0,*(unsigned int *)(iVar3 + 0x18),iVar1,
                           *(unsigned int *)(iVar3 + 0x50));
    } while (iVar1 != 0);
    while (iVar1 = param_2 + 0x38, iVar1 != param_3) {
      if (*(unsigned int *)(param_2 + 0x54) < 0x10) {
        iVar2 = param_2 + 0x40;
      }
      else {
        iVar2 = *(int *)(param_2 + 0x40);
      }
      iVar2 = fn_8260D428(iVar3 + 8,0,*(unsigned int *)(iVar3 + 0x18),iVar2,
                           *(unsigned int *)(param_2 + 0x50));
      param_2 = iVar1;
      if (iVar2 != 0) {
        iVar3 = iVar3 + 0x38;
        fn_82268638(iVar3,iVar1);
      }
    }
    param_3 = iVar3 + 0x38;
  }
LAB_82538400:
  *param_1 = param_3;
  return param_1;
}

