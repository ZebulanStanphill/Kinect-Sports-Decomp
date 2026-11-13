extern int fn_82A3FF60();
extern int fn_82A47CE0();
extern int fn_82A48578();
extern int fn_82A4F4E0();


int fn_82A48D88(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  unsigned int uVar6;
  int *piVar7;
  
  piVar7 = (int *)0x0;
  uVar6 = 0xffffffff;
  piVar5 = (int *)0x0;
  for (piVar4 = *(int **)(param_1 + 0xe8); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    uVar1 = ((int *)*piVar4)[1];
    if ((param_2 <= uVar1) && (uVar1 < uVar6)) {
      piVar5 = piVar4;
      piVar7 = (int *)*piVar4;
      uVar6 = uVar1;
    }
    if (piVar4 == (int *)0x0) break;
  }
  fn_82A47CE0(param_1 + 0x7c,piVar5);
  iVar3 = fn_82A48578(param_1,piVar7);
  if (iVar3 != 0) {
    if (uVar6 == param_2) {
LAB_82a48e88:
      if (uVar6 == *(unsigned int *)(param_1 + 0x104)) {
        piVar4 = *(int **)(param_1 + 0xe8);
        uVar6 = 0;
        while (*(unsigned int *)(param_1 + 0x104) = uVar6, piVar4 != (int *)0x0) {
          if (piVar4 == (int *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *piVar4;
            piVar4 = (int *)piVar4[1];
          }
          uVar6 = *(unsigned int *)(param_1 + 0x104);
          if (*(unsigned int *)(param_1 + 0x104) <= *(unsigned int *)(iVar3 + 4)) {
            uVar6 = *(unsigned int *)(iVar3 + 4);
          }
        }
      }
      return *piVar7;
    }
    piVar7[1] = param_2;
    piVar4 = (int *)fn_82A3FF60(0xffffffff83219d50,8,0x20970000,0);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      iVar3 = piVar7[1];
      iVar2 = *piVar7;
      piVar4[1] = uVar6 - param_2;
      *piVar4 = iVar3 + iVar2;
    }
    if (piVar4 != (int *)0x0) {
      iVar3 = fn_82A48578(param_1 + 0x7c,piVar4);
      if (iVar3 != 0) goto LAB_82a48e88;
      fn_82A4F4E0(piVar4);
    }
  }
  return 0;
}

