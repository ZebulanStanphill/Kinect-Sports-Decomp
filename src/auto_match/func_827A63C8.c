extern int fn_8278FFF0();
extern unsigned int lbl_821AAD20;


void fn_827A63C8(unsigned __int64 param_1,int *param_2,int *param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar4;
  double dVar5;
  float afStack_20;
  
  iVar3 = 0;
  if ((*(int *)*param_3 == 2) && (iVar3 = 1, (unsigned int)param_3[1] < 2)) {
    return;
  }
  piVar4 = (int *)*param_3 + iVar3 * 3;
  if (*piVar4 == 3) {
    dVar5 = (double)lbl_821AAD20;
    afStack_20 = lbl_821AAD20;
    fn_8278FFF0(&afStack_20,piVar4[1],piVar4[2]);
    if (((double)afStack_20 != dVar5) && (uVar2 = 0, param_2[1] != 0)) {
      iVar3 = 0;
      do {
        uVar2 = uVar2 + 1;
        iVar1 = *(int *)(*param_2 + iVar3);
        iVar3 = iVar3 + 4;
        *(short *)(iVar1 + 0x3e) = (short)(__int64)afStack_20;
        *(unsigned short *)(iVar1 + 0x42) = *(unsigned short *)(iVar1 + 0x42) | 0x10;
      } while (uVar2 < (unsigned int)param_2[1]);
    }
  }
  return;
}

