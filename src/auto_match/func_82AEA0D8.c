typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_82AEA0D8(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  
  uVar1 = *param_1;
  uVar2 = *(unsigned int *)(uVar1 + 8) >> 7 & 0x7f;
  if ((uVar2 == 0) || (bVar3 = true, 0x1f < uVar2)) {
    bVar3 = false;
  }
  if (!bVar3) {
    return 0;
  }
  if ((uVar2 == 0) || (bVar3 = true, 0x52 < uVar2)) {
    bVar3 = false;
  }
  if (bVar3) {
    uVar2 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28);
    if ((((uVar2 & 1) == 0) && (uVar2 != 0)) &&
       (((*(unsigned int *)(uVar2 + 0x14) ^ *(unsigned int *)(uVar1 + 0x14)) & 0x1fff) == 0)) {
      uVar1 = *(unsigned int *)(uVar2 + 8) >> 7 & 0x7f;
      if ((uVar1 < 0x20) || (bVar3 = true, 0x52 < uVar1)) {
        bVar3 = false;
      }
      if (bVar3) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

