extern int fn_82555A88();
extern unsigned int lbl_8326B370[];


void fn_823546D0(int param_1)

{
  unsigned int iVar1;
  int *piVar2;
  unsigned int iVar3;
  
  piVar2 = (int *)fn_82555A88((unsigned __int64)
                                    *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3e4) + 0x8c0) +
                                    0x98,"|videoFeedCameraReference|");
  if ((piVar2 != (int *)0x0) && (iVar1 = *piVar2, iVar1 != 0)) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x6c4);
    *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x4c0) = 0;
    if (iVar3 == 0) {
      iVar3 = lbl_8326B370[9];
    }
    *(int *)(iVar1 + 0x19c) = iVar3;
  }
  return;
}

