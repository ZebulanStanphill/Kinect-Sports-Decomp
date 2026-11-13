typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_82AC55A0(unsigned int *param_1,int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  uVar1 = *(unsigned int *)(*param_2 + 0x1c);
  if ((param_1 < (unsigned int *)param_2[0x11]) ||
     ((unsigned int *)(param_2[0x12] + param_2[0x11]) < param_1 + uVar1)) {
    return 0xffffffff80004005;
  }
  bVar4 = false;
  uVar5 = 0;
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = *param_1;
      uVar3 = uVar2 & 0xfff;
      if (uVar3 <= uVar6) {
        return 0xffffffff80004005;
      }
      if ((unsigned int)param_2[0x15] <= (uVar2 & 0xfff) << 1) {
        return 0xffffffff80004005;
      }
      if ((unsigned int)param_2[(uVar3 + 0xb) * 2] >> 0x1e == 1) {
        return 0xffffffff80004005;
      }
      if ((unsigned int)param_2[(uVar3 + 0xb) * 2] >> 0x1e == 2) {
        return 0xffffffff80004005;
      }
      if ((*(unsigned int *)(uVar3 * 0xc + param_2[1]) & 0x1f) != 0) {
        return 0xffffffff80004005;
      }
      uVar6 = uVar2 >> 0x14 & 3;
      if (uVar6 == 1) {
        if (bVar4) {
          return 0xffffffff80004005;
        }
        bVar4 = true;
      }
      else if (uVar6 != 0) {
        if (!bVar4) {
          return 0xffffffff80004005;
        }
        bVar4 = false;
      }
      uVar5 = uVar5 + 1;
      param_1 = param_1 + 1;
      uVar6 = uVar3;
    } while (uVar5 < uVar1);
  }
  return 0;
}

