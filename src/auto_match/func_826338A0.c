typedef unsigned char bool;
#define true 1
#define false 0


__int64 fn_826338A0(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  
  uVar1 = *param_1;
  uVar3 = uVar1 >> 0xf & 1;
  uVar4 = (uVar1 >> 4 | uVar1) >> 0x10 & 0xf;
  if ((uVar3 != 0) && ((uVar1 & 0x4000) != 0)) {
    uVar4 = 0xf;
  }
  if ((uVar3 == 0) || (bVar2 = true, 0xf < (uVar1 & 0x3f))) {
    bVar2 = false;
  }
  if ((!bVar2) || (lVar5 = 1, uVar4 == 0)) {
    lVar5 = 0;
  }
  if (lVar5 == 0) {
    return lVar5;
  }
  if (param_2 == (unsigned int *)0x0) {
    return lVar5;
  }
  *param_2 = uVar4;
  return lVar5;
}

