int fn_82E06B90(int *param_1,unsigned short param_2,int param_3)

{
  int iVar1;
  unsigned short *psVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  if (0 < param_1[1]) {
    psVar2 = (short *)(*param_1 + 6);
    do {
      if (*psVar2 == param_2) {
        if (iVar1 == param_3) {
          return iVar3 * 0xc + *param_1;
        }
        iVar1 = iVar1 + 1;
      }
      iVar3 = iVar3 + 1;
      psVar2 = psVar2 + 6;
    } while (iVar3 < param_1[1]);
  }
  return 0;
}

