extern int fn_82859D60();
extern int fn_8285F118();
extern int fn_8285F128();
extern unsigned int lbl_8321132C;


void fn_8285A498(unsigned __int64 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  if ((param_1 & 0xffffffff) != 0) {
    iVar2 = fn_8285F128();
    piVar6 = (int *)(iVar2 + *(int *)(param_2 + 8));
    iVar2 = fn_8285F128(param_1);
    piVar5 = (int *)(iVar2 + *(int *)(param_3 + 8));
    iVar2 = 0;
    uVar3 = (unsigned __int64)lbl_8321132C;
    *(unsigned char *)*piVar5 = *(unsigned char *)*piVar6;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      iVar1 = *piVar6 + iVar2;
      iVar4 = *piVar5 + iVar2;
      iVar2 = iVar2 + 1;
      *(unsigned char *)(iVar4 + 1) = *(unsigned char *)(iVar1 + 1);
    }
    iVar2 = fn_8285F118(param_1);
    if (iVar2 == 0) {
      fn_82859D60(param_1,param_2,param_3);
    }
  }
  return;
}

