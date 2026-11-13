extern int fn_8269B4A0();
extern int fn_8269DD58();


void fn_8269D028(int *param_1,unsigned __int64 param_2,int *param_3,unsigned int param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  
  fn_8269DD58();
  piVar6 = (int *)*param_1;
  param_4 = piVar6[1] & param_4;
  *piVar6 = *piVar6 + 1;
  iVar1 = *param_1;
  iVar7 = param_4 * 0xc + iVar1;
  iVar2 = *(int *)(iVar7 + 8);
  puVar10 = (unsigned int *)(iVar7 + 8);
  uVar9 = param_4;
  if (iVar2 == -2) {
    *puVar10 = 0xffffffff;
    iVar1 = *param_3;
    *(int *)(iVar7 + 0xc) = iVar1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    *(unsigned char *)(iVar7 + 0x10) = *(unsigned char *)(param_3 + 1);
  }
  else {
    do {
      uVar9 = uVar9 + 1 & *(unsigned int *)(iVar1 + 4);
      iVar5 = uVar9 * 0xc + iVar1;
      piVar6 = (int *)(iVar5 + 8);
    } while (*piVar6 != -2);
    piVar4 = (int *)(iVar7 + 0xc);
    uVar3 = *(unsigned int *)(*(int *)(iVar7 + 0xc) + 0xc) & *(unsigned int *)(iVar1 + 4);
    if (uVar3 == param_4) {
      if (piVar6 != (int *)0x0) {
        *piVar6 = iVar2;
        iVar1 = *piVar4;
        *(int *)(iVar5 + 0xc) = iVar1;
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
        *(unsigned char *)(iVar5 + 0x10) = *(unsigned char *)(iVar7 + 0x10);
      }
      fn_8269B4A0(piVar4,param_3);
      *puVar10 = uVar9;
    }
    else {
      while (puVar8 = (unsigned int *)(uVar3 * 0xc + iVar1 + 8), *puVar8 != param_4) {
        uVar3 = *puVar8;
      }
      if (piVar6 != (int *)0x0) {
        *piVar6 = iVar2;
        iVar1 = *piVar4;
        *(int *)(iVar5 + 0xc) = iVar1;
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
        *(unsigned char *)(iVar5 + 0x10) = *(unsigned char *)(iVar7 + 0x10);
      }
      *puVar8 = uVar9;
      fn_8269B4A0(piVar4,param_3);
      *puVar10 = 0xffffffff;
    }
  }
  return;
}

