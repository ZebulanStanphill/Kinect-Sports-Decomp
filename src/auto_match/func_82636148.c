__int64 fn_82636148(int *param_1,__int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  
  uVar4 = (unsigned int)param_2;
  iVar2 = *param_1;
  if (param_1[iVar2 * 0x9b4 + 0x18] < 0) {
    return 0;
  }
  if (param_3 != (unsigned int *)0x0) {
    puVar6 = (unsigned int *)param_1[iVar2 * 0x9b4 + 0x1f];
    puVar5 = puVar6 + param_1[iVar2 * 0x9b4 + 0x20] * 2;
    for (; puVar6 < puVar5; puVar6 = puVar6 + 2) {
      if (((1 << (puVar6[1] >> 0xc & 0xf) & 0x607eU) != 0) && ((puVar6[1] & 0x800) == 0)) {
        uVar1 = *puVar6;
        uVar3 = uVar1 & 0xfff;
        if ((uVar3 <= uVar4) && (uVar4 < (uVar1 >> 0xc & 7) + uVar3)) {
          *param_3 = (unsigned int)((1 << ((uVar4 - uVar3) * 2 & 0x3e) & uVar1 >> 0x10 & 0xfff) != 0);
          break;
        }
      }
    }
  }
  return (unsigned __int64)(unsigned int)param_1[iVar2 * 0x9b4 + 0x1c] + param_2 * 0xc;
}

