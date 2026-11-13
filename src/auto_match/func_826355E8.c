extern int fn_82634AE0();
extern int fn_82637168();
extern int fn_82F691F0();


__int64 fn_826355E8(int *param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  iVar1 = *param_1;
  param_1[iVar1 * 0x9b4 + 0x22] = 0;
  if (((~(unsigned __int64)*(unsigned int *)(param_1[iVar1 * 0x9b4 + 4] + 0x4db4) & 0xffffffff) >> 4 & 1) != 0) {
    uVar4 = param_2[1] >> 0xc & 0xf;
    uVar3 = 1 << uVar4;
    if ((uVar3 & 0x6ff8) != 0) {
      uVar2 = param_1[iVar1 * 0x9b4 + 0x1d];
      fn_82634AE0(param_1 + iVar1 * 0x9b4 + 4);
      if (((unsigned __int64)(unsigned int)param_1[iVar1 * 0x9b4 + 0x1d] - (unsigned __int64)uVar2 != 0) &&
         ((uVar3 & 0x607e) != 0)) {
        *param_2 = *param_2 & 0xfffff000 |
                   *param_2 +
                   (int)((unsigned __int64)(unsigned int)param_1[iVar1 * 0x9b4 + 0x1d] - (unsigned __int64)uVar2) & 0xfff;
      }
    }
    if (((((~(unsigned __int64)*(unsigned int *)(param_1[iVar1 * 0x9b4 + 4] + 0x4db4) & 0xffffffff) >> 5 & 1) != 0)
        && (uVar4 == 0xc)) && ((param_2[1] & 0x100) == 0)) {
      param_1[iVar1 * 0x9b4 + 5] = 0;
      *(unsigned char *)(param_1 + iVar1 * 0x9b4 + 0x23) = 0;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(param_1 + iVar1 * 0x9b4 + 0x24,0,0x20);
    }
  }
  fn_82637168(param_1 + iVar1 * 0x9b4 + 0x1f,param_2,param_1 + iVar1 * 0x9b4 + 0x18);
  return (unsigned __int64)(unsigned int)param_1[iVar1 * 0x9b4 + 0x20] - 1;
}

