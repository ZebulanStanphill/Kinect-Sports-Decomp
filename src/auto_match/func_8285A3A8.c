extern int fn_82859CE0();
extern int fn_8285F118();
extern int fn_8285F128();
extern unsigned int lbl_8321132C;
extern unsigned int lbl_83211330;


void fn_8285A3A8(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(*(int *)(param_1 + 0x54) + *(int *)(param_3 + 8));
  lbl_83211330 = *(unsigned int *)(param_1 + 0x34);
  if ((param_2 & 0xff) != 0) {
    *piVar5 = (int)(piVar5 + 1);
  }
  lbl_8321132C = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    lbl_8321132C = *(unsigned int *)(*(int *)(param_1 + 0x44) + 0x44);
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    iVar2 = fn_8285F128();
    piVar5 = (int *)(iVar2 + *(int *)(param_3 + 8));
    if ((param_2 & 0xff) != 0) {
      *piVar5 = (int)(piVar5 + 1);
    }
    iVar2 = 0;
    uVar3 = (unsigned __int64)lbl_8321132C;
    *(unsigned char *)*piVar5 = 0;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      iVar4 = *piVar5 + iVar2;
      iVar2 = iVar2 + 1;
      *(unsigned char *)(iVar4 + 1) = 0;
    }
    iVar2 = fn_8285F118(iVar1);
    if (iVar2 == 0) {
      fn_82859CE0(iVar1,param_2,param_3);
    }
  }
  return;
}

