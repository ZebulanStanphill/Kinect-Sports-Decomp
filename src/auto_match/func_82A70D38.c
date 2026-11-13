extern unsigned int lbl_82090FB8;
extern unsigned int lbl_82090FC0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

__int64 fn_82A70D38(int param_1,int param_2)

{
  __int64 lVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  double *pdVar5;
  
  iVar4 = 0;
  pdVar5 = *(double **)(param_1 + 0x30);
  lVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x34) - 1;
  pdVar3 = pdVar5 + 1;
  pdVar2 = pdVar5 + 2;
  if (0 < lVar1) {
    do {
      if (((int)(*pdVar5 * lbl_82090FC0) <= param_2) &&
         (param_2 <= (int)(pdVar5[3] * lbl_82090FC0))) {
        return (__int64)
               (int)((__int64)(int)(*pdVar2 * lbl_82090FC0) *
                     (__int64)(param_2 - (int)(*pdVar5 * lbl_82090FC0)) >> 0x14) -
               (unsigned __int64)(unsigned int)(int)(*pdVar3 * lbl_82090FB8);
      }
      iVar4 = iVar4 + 1;
      pdVar5 = pdVar5 + 3;
      pdVar3 = pdVar3 + 3;
      pdVar2 = pdVar2 + 3;
    } while (iVar4 < (int)lVar1);
  }
  return 0;
}

