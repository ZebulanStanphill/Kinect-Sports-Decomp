typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8279AE60();


unsigned __int64 fn_8279AED8(int param_1,unsigned int param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  
  if (*(unsigned int *)(param_1 + 0x28) <= param_2) {
    param_2 = *(unsigned int *)(param_1 + 0x28) - 1;
  }
  if ((((int *)(param_1 + 0x24) == (int *)0x0) || (*(unsigned int *)(param_1 + 0x28) <= param_2)) ||
     (bVar3 = false, (int)param_2 < 0)) {
    bVar3 = true;
  }
  if (bVar3) {
    uVar4 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24);
    iVar6 = param_2 * 4;
    piVar2 = *(int **)(iVar1 + iVar6);
    if (*piVar2 < 0) {
      uVar7 = (unsigned int)*(unsigned short *)((int)piVar2 + 0x16);
      uVar8 = (unsigned __int64)*(char *)((int)piVar2 + 0x1d);
    }
    else {
      uVar7 = piVar2[6];
      uVar8 = (unsigned __int64)*(short *)(piVar2 + 10);
    }
    uVar5 = param_2;
    if (-1 < (int)param_2) {
      uVar9 = param_2;
      do {
        if ((*(unsigned int *)(param_1 + 0x28) <= param_2) || (bVar3 = false, (int)param_2 < 0)) {
          bVar3 = true;
        }
        if ((bVar3) ||
           ((float)(__int64)*(int *)(*(int *)(iVar6 + iVar1) + 0x10) <
            ((float)(__int64)
                    (int)(piVar2[4] +
                         ((int)((uVar8 & 0xffffffff) >> 0x1f) + -1 + (unsigned int)(uVar8 == 0) &
                         (unsigned int)uVar8) + uVar7) - *(float *)(param_1 + 0x48)) +
            *(float *)(param_1 + 0x40))) break;
        uVar10 = uVar9 - 1;
        if (-1 < (int)param_2) {
          param_2 = param_2 - 1;
          iVar6 = iVar6 + -4;
        }
        uVar5 = uVar9;
        uVar9 = uVar10;
      } while (-1 < (int)uVar10);
    }
    uVar4 = fn_8279AE60(param_1,uVar5);
  }
  return uVar4;
}

