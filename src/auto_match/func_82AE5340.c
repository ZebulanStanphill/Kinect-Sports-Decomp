/* WARNING: Removing unreachable block (ram,0x82ae535c) */

__int64 fn_82AE5340(__int64 param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  
  uVar2 = (unsigned __int64)(param_2 >> 5);
  uVar1 = (unsigned __int64)(unsigned int)(2 << (param_2 & 0x1f)) - 1;
  param_1 = uVar2 * 4 + param_1;
  do {
    uVar1 = uVar1 & ~(unsigned __int64)*(unsigned int *)param_1;
    if (uVar1 != 0) {
      lVar3 = 0x1f - LZCOUNT((int)uVar1);
      *param_3 = *(unsigned int *)param_1 >> ((unsigned int)lVar3 & 0x3c) & 0xf;
      return (uVar2 & 0x7ffffff) * 0x20 + lVar3;
    }
    uVar2 = uVar2 - 1;
    uVar1 = 0xffffffffffffffff;
    param_1 = param_1 + -4;
  } while (-1 < (__int64)uVar2);
  return -1;
}

