typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82265538();
extern int fn_82265B10();
extern int fn_82266628();
extern int fn_822841B8();
extern int fn_82536590();
extern int fn_8265CA20();


void fn_82267890(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int *puVar10;
  
  puVar10 = (unsigned int *)*param_2;
  param_2[0x10] = 1;
  bVar7 = true;
  for (puVar1 = (unsigned int *)*puVar10; puVar1 != puVar10; puVar1 = (unsigned int *)*puVar1) {
    iVar4 = puVar1[2];
    fn_82265B10(param_1,iVar4);
    if (param_2[0x15] != 0) {
      if ((bVar7) && (*(int *)(iVar4 + 0xdc) != 0)) {
        bVar7 = true;
        if (*(int *)(iVar4 + 0x50c) != 2) goto LAB_82267908;
      }
      bVar7 = false;
    }
LAB_82267908:
    puVar10 = (unsigned int *)*param_2;
  }
  if ((param_2[0x15] != 0) && (bVar7)) {
    puVar10 = (unsigned int *)*param_2;
    param_2[0x15] = 0;
    for (puVar1 = (unsigned int *)*puVar10; puVar1 != puVar10; puVar1 = (unsigned int *)*puVar1) {
      iVar4 = puVar1[2];
      iVar2 = *(int *)(iVar4 + 0xdc);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1d0) != 0)) {
        *(int *)(iVar2 + 0x1d0) = *(int *)(iVar2 + 0x1d0) + -1;
      }
      iVar2 = *(int *)(iVar4 + 0xe0);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1d0) != 0)) {
        *(int *)(iVar2 + 0x1d0) = *(int *)(iVar2 + 0x1d0) + -1;
      }
      if (*(int *)(iVar4 + 0x50c) == 4) {
        if ((*(unsigned int *)(iVar4 + 0xa0) & 1) == 0) {
          uVar9 = 2;
          uVar8 = 3;
        }
        else {
          uVar9 = 0;
          uVar8 = 1;
        }
        fn_82266628(iVar4,uVar8,uVar9);
        *(unsigned int *)(iVar4 + 0x50c) = 3;
      }
      puVar10 = (unsigned int *)*param_2;
    }
  }
  piVar3 = (int *)param_2[3];
  piVar6 = (int *)*piVar3;
  while (piVar6 != piVar3) {
    iVar4 = piVar6[2];
    fn_82265B10(param_1,iVar4);
    if (*(int *)(iVar4 + 0x52c) == 8) {
      piVar5 = (int *)*piVar6;
      if (piVar6 != (int *)param_2[3]) {
        *(int **)piVar6[1] = piVar5;
        *(int *)(*piVar6 + 4) = piVar6[1];
        fn_8265CA20(piVar6);
        param_2[4] = param_2[4] + -1;
      }
      fn_82265538(iVar4);
      fn_8265CA20(iVar4);
    }
    else {
      piVar5 = (int *)*piVar6;
    }
    piVar6 = piVar5;
    piVar3 = (int *)param_2[3];
  }
  if (param_2[0x16] == 0) {
    if (param_2[0x17] == 0) goto LAB_82267a94;
    puVar10 = param_2 + 0x19;
  }
  else {
    if (param_2[0x17] != 0) goto LAB_82267a94;
    puVar10 = param_2 + 0x18;
  }
  fn_82536590(puVar10,0);
LAB_82267a94:
  if (param_2[0x1b] != 0) {
    fn_822841B8(param_1);
  }
  param_2[0x10] = 0;
  param_2[0x17] = param_2[0x16];
  return;
}

