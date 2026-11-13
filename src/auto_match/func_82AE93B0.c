typedef unsigned char bool;
#define true 1
#define false 0


void fn_82AE93B0(int *param_1)

{
  unsigned int *puVar1;
  bool bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  uVar4 = 0;
  uVar3 = (unsigned int)param_1[2] >> 7 & 0x7f;
  if ((uVar3 < 0x60) || (bVar2 = true, 0x66 < uVar3)) {
    bVar2 = false;
  }
  if (bVar2) {
    uVar4 = 1;
  }
  else {
    for (puVar1 = (unsigned int *)*param_1; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[1]) {
      uVar3 = *(unsigned int *)(puVar1[3] + 8) >> 7 & 0x7f;
      if ((uVar3 < 0x60) || (bVar2 = true, 0x66 < uVar3)) {
        bVar2 = false;
      }
      if (bVar2) {
        uVar5 = 1;
      }
      else {
        uVar3 = *puVar1 >> 0x1c & 3;
        uVar5 = (*(unsigned int *)(puVar1[3] + 0x14) >> 0xd & 0x1fff) + uVar3;
        if ((uVar3 == 3) || (0x1fff < uVar5)) {
          uVar5 = 0x1fff;
        }
      }
      if (uVar4 < uVar5) {
        uVar4 = uVar5;
      }
    }
  }
  param_1[5] = (uVar4 & 0x1fff) << 0xd | param_1[5] & 0xfc001fffU;
  return;
}

