extern unsigned int fStack_20;
extern int fn_8278FFF0();
extern unsigned int lbl_8200571C;
extern unsigned int lbl_82011710;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1a;


void fn_827A5E20(unsigned __int64 param_1,int *param_2,int *param_3)

{
  int iVar1;
  double dVar2;
  unsigned int uVar3;
  int iVar4;
  int *piVar5;
  double dVar6;
  double dVar7;
  float fStack_20;
  unsigned short uStack_1a;
  
  iVar4 = 0;
  if ((*(int *)*param_3 == 2) && (iVar4 = 1, (unsigned int)param_3[1] < 2)) {
    return;
  }
  piVar5 = (int *)*param_3 + iVar4 * 3;
  if (*piVar5 == 3) {
    dVar7 = (double)lbl_821AAD20;
    fStack_20 = lbl_821AAD20;
    fn_8278FFF0(&fStack_20,piVar5[1],piVar5[2]);
    dVar2 = lbl_82011710;
    dVar6 = (double)fStack_20;
    if ((dVar6 != dVar7) && (uVar3 = 0, param_2[1] != 0)) {
      iVar4 = 0;
      dVar7 = (double)lbl_8200571C;
      do {
        iVar1 = *(int *)(*param_2 + iVar4);
        if (dVar2 <= dVar6) {
          uStack_1a = 0xffff;
        }
        else {
          uStack_1a = (unsigned short)(__int64)(dVar6 * dVar7);
        }
        uVar3 = uVar3 + 1;
        *(unsigned short *)(iVar1 + 0x26) = uStack_1a;
        iVar4 = iVar4 + 4;
        *(unsigned short *)(iVar1 + 0x2a) = *(unsigned short *)(iVar1 + 0x2a) | 8;
      } while (uVar3 < (unsigned int)param_2[1]);
    }
  }
  return;
}

