extern int fn_82859CE0();
extern int fn_8285F118();
extern int fn_8285F128();
extern unsigned int lbl_8321132C;


void fn_8285A300(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  if ((param_1 & 0xffffffff) != 0) {
    iVar2 = fn_8285F128();
    piVar1 = (int *)(iVar2 + *(int *)(param_3 + 8));
    if ((param_2 & 0xff) != 0) {
      *piVar1 = (int)(piVar1 + 1);
    }
    iVar2 = 0;
    uVar3 = (unsigned __int64)lbl_8321132C;
    *(unsigned char *)*piVar1 = 0;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      iVar4 = *piVar1 + iVar2;
      iVar2 = iVar2 + 1;
      *(unsigned char *)(iVar4 + 1) = 0;
    }
    iVar2 = fn_8285F118(param_1);
    if (iVar2 == 0) {
      fn_82859CE0(param_1,param_2,param_3);
    }
  }
  return;
}

