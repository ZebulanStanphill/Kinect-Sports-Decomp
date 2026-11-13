extern int fn_82859D60();
extern int fn_8285F118();
extern int fn_8285F128();
extern unsigned int lbl_8321132C;
extern unsigned int lbl_83211330;


void fn_8285A548(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  iVar1 = *(int *)(param_1 + 0x34);
  lbl_8321132C = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    lbl_8321132C = *(unsigned int *)(*(int *)(param_1 + 0x44) + 0x44);
  }
  lbl_83211330 = iVar1;
  if (iVar1 != 0) {
    iVar3 = fn_8285F128();
    piVar7 = (int *)(iVar3 + *(int *)(param_2 + 8));
    iVar3 = fn_8285F128(iVar1);
    piVar6 = (int *)(iVar3 + *(int *)(param_3 + 8));
    iVar3 = 0;
    uVar4 = (unsigned __int64)lbl_8321132C;
    *(unsigned char *)*piVar6 = *(unsigned char *)*piVar7;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      iVar2 = *piVar7 + iVar3;
      iVar5 = *piVar6 + iVar3;
      iVar3 = iVar3 + 1;
      *(unsigned char *)(iVar5 + 1) = *(unsigned char *)(iVar2 + 1);
    }
    iVar3 = fn_8285F118(iVar1);
    if (iVar3 == 0) {
      fn_82859D60(iVar1,param_2,param_3);
    }
  }
  return;
}

