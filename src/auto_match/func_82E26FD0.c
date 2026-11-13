extern unsigned int lbl_82005730;
extern unsigned int lbl_82005778;
extern unsigned int lbl_8209A960;
extern unsigned int lbl_83187460;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82E26FD0(unsigned int param_1,unsigned int param_2,__int64 *param_3)

{
  double *pdVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  double dVar5;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    lVar4 = 0;
  }
  else {
    iVar2 = 0;
    pdVar1 = (double *)&lbl_83187460;
    uVar3 = 0;
    dVar5 = (double)param_1 / (double)param_2;
    while ((dVar5 < *pdVar1 - lbl_82005778 || (*pdVar1 + lbl_82005778 < dVar5))) {
      uVar3 = uVar3 + 0x18;
      iVar2 = iVar2 + 1;
      pdVar1 = pdVar1 + 3;
      if ((uVar3 & 0xffffffff) == 0xc0) {
        *param_3 = (__int64)(lbl_8209A960 / dVar5 + lbl_82005730);
        return;
      }
    }
    lVar4 = *(__int64 *)(iVar2 * 0x18 + -0x7ce78bb0);
  }
  *param_3 = lVar4;
  return;
}

