extern int fn_8227EB10();
extern int fn_8227F500();


void fn_8227E820(int param_1,int param_2,int param_3)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int *piVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned int uVar11;
  
  if ((*(int *)(param_1 + 0x34) == 0) && (param_2 != 0)) {
    piVar1 = *(int **)(param_1 + 0xc);
    uVar4 = 0;
    uVar9 = 0;
    iVar10 = 0;
    uVar11 = (*(int *)(param_1 + 0x10) - (int)piVar1 >> 2) - 1;
    uVar6 = 0;
    piVar5 = piVar1;
    uVar7 = uVar11;
    if (piVar1 != *(int **)(param_1 + 0x10)) {
      do {
        uVar3 = (unsigned __int64)*(unsigned int *)(*piVar5 + 0x6c);
        uVar2 = *(unsigned int *)(*piVar5 + 0x18);
        if ((((~uVar3 & 0xffffffff) >> 1 & 1) != 0) && ((~uVar3 & 1) != 0)) {
          iVar10 = iVar10 + 1;
          if (uVar4 < uVar2) {
            uVar4 = uVar2;
            uVar9 = uVar6;
          }
          if (uVar2 < uVar11) {
            uVar11 = uVar2;
            uVar7 = uVar6;
          }
        }
        piVar5 = piVar5 + 1;
        uVar6 = uVar6 + 1;
      } while (piVar5 != *(int **)(param_1 + 0x10));
      if (iVar10 != 0) {
        if (param_3 == 0) {
          *(unsigned int *)(param_1 + 0x2c) = uVar7;
        }
        else {
          *(unsigned int *)(param_1 + 0x2c) = uVar9;
        }
      }
    }
    if (*(int *)(param_1 + 0x2c) == -1) {
      uVar8 = 1;
      if (param_3 == 0) {
        uVar8 = 2;
      }
      *(unsigned int *)(param_1 + 0x4c) = uVar8;
    }
    else {
      fn_8227F500(piVar1[*(int *)(param_1 + 0x2c)]);
      fn_8227EB10(param_1,100);
    }
  }
  *(int *)(param_1 + 0x34) = param_2;
  *(unsigned int *)(param_1 + 0x40) = 0;
  *(unsigned int *)(param_1 + 0x44) = 0;
  return;
}

