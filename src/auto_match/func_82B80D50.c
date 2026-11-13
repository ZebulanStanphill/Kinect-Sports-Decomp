typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_82B80D50(int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
  unsigned int *puVar1;
  bool bVar2;
  bool bVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  
  uVar4 = *(unsigned int *)(param_1 + 8) >> 7 & 0x7f;
  if ((uVar4 == 0) || (bVar2 = true, 0x66 < uVar4)) {
    bVar2 = false;
  }
  if (bVar2) {
    uVar4 = *(unsigned int *)(param_3 + 8) >> 7 & 0x7f;
    if ((uVar4 == 0x7d) || (bVar2 = false, uVar4 == 0x7c)) {
      bVar2 = true;
    }
    if (bVar2) {
      if ((*(unsigned int *)(param_1 + 8) & 0x380000) < 0x100001) goto LAB_82b80db0;
      uVar4 = *(unsigned int *)((*(unsigned int **)(param_1 + 0x2c))[3] + 8) >> 7 & 0x7f;
      if ((uVar4 == 0x7d) || (bVar2 = false, uVar4 == 0x7c)) {
        bVar2 = true;
      }
      uVar4 = *(unsigned int *)((*(unsigned int **)(param_1 + 0x30))[3] + 8) >> 7 & 0x7f;
      if ((uVar4 == 0x7d) || (bVar3 = false, uVar4 == 0x7c)) {
        bVar3 = true;
      }
      if (((bVar2) && (bVar3)) && (((**(unsigned int **)(param_1 + 0x30) ^ param_5) & 0x18) != 0)) {
        return 0;
      }
      if ((!bVar2) && (!bVar3)) goto LAB_82b80db0;
      bVar2 = ((**(unsigned int **)(param_1 + 0x2c) >> 1 & 0xff ^ param_5 >> 1) & 1) == 0;
    }
    else {
      bVar2 = (param_5 & 8) == 0;
    }
  }
  else {
    if ((param_5 & 0xfffffffe) != 0) {
      return 0;
    }
    uVar4 = *(unsigned int *)(param_3 + 8) >> 7 & 0x7f;
    if ((uVar4 == 0x7d) || (bVar2 = false, uVar4 == 0x7c)) {
      bVar2 = true;
    }
    bVar2 = !bVar2;
  }
  if (!bVar2) {
    return 0;
  }
LAB_82b80db0:
  puVar5 = (unsigned int *)(param_2[3] + 4);
  for (puVar1 = (unsigned int *)*puVar5; puVar1 != param_2; puVar1 = (unsigned int *)puVar1[2]) {
    puVar5 = puVar1 + 2;
  }
  *puVar5 = param_2[2];
  param_2[2] = *(unsigned int *)(param_3 + 4);
  *(unsigned int **)(param_3 + 4) = param_2;
  param_2[3] = param_3;
  *param_2 = param_5 & 0x1f | (param_4 & 0xff) << 5 | *param_2 & 0xffffe000;
  return 1;
}

