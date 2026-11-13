extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_828B9180();


void fn_828B6B60(int param_1,int param_2,int param_3,unsigned int *param_4)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  double dVar8;
  double dVar9;
  unsigned int auStack_60 [1];
  
  uVar6 = param_2 - 1;
  iVar2 = ((int)uVar6 >> 1) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 1) != 0);
  while (param_3 < param_2) {
    uVar5 = *param_4;
    puVar7 = (unsigned int *)(iVar2 * 8 + param_1);
    dVar8 = (double)fn_828B9180(*(unsigned int *)(iVar2 * 8 + param_1));
    dVar9 = (double)fn_828B9180(uVar5);
    if (dVar8 <= dVar9) break;
    puVar3 = (unsigned int *)(param_2 * 8 + param_1);
    uVar4 = 0;
    uVar5 = 0;
    if (auStack_60 != puVar7) {
      uVar5 = puVar7[1];
      puVar7[1] = 0;
      uVar4 = *puVar7;
      *puVar7 = 0;
    }
    iVar1 = puVar3[1];
    puVar3[1] = uVar5;
    *puVar3 = uVar4;
    if (iVar1 != 0) {
      fn_822315A0();
    }
    uVar6 = iVar2 - 1;
    param_2 = iVar2;
    iVar2 = ((int)uVar6 >> 1) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 1) != 0);
  }
  puVar7 = (unsigned int *)(param_2 * 8 + param_1);
  uVar4 = 0;
  uVar5 = 0;
  if (auStack_60 != param_4) {
    uVar5 = param_4[1];
    param_4[1] = 0;
    uVar4 = *param_4;
    *param_4 = 0;
  }
  iVar2 = puVar7[1];
  puVar7[1] = uVar5;
  *puVar7 = uVar4;
  if (iVar2 != 0) {
    fn_822315A0();
  }
  return;
}

