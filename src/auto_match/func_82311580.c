extern unsigned int *auStack_40;
extern int fn_823119C8();
extern int fn_8265CA20();
extern int fn_82E21DB0();


void fn_82311580(int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned int auStack_40 [2];
  int *piStack_38;
  unsigned int *puStack_34;
  
  auStack_40[1] = 8;
  if ((param_1[1] - *param_1 & 0xfffffffcU) != 0x20) {
    puVar2 = (unsigned int *)fn_82E21DB0(8,0);
    auStack_40[0] = param_1[4];
    puVar5 = (unsigned int *)0x0;
    if (auStack_40[0] != 0) {
      puVar5 = (unsigned int *)param_1[2];
    }
    puVar4 = auStack_40;
    if (7 < auStack_40[0]) {
      puVar4 = auStack_40 + 1;
    }
    piStack_38 = param_1;
    puStack_34 = puVar5;
    iVar3 = fn_823119C8(&piStack_38,*puVar4);
    puVar1 = *(unsigned int **)(iVar3 + 4);
    puVar7 = puVar2;
    for (; puVar5 != puVar1;
        puVar5 = (unsigned int *)(-(unsigned int)((unsigned int *)param_1[3] != puVar5) & (unsigned int)puVar5)) {
      if (puVar7 != (unsigned int *)0x0) {
        *puVar7 = *puVar5;
      }
      puVar5 = puVar5 + 1;
      if (puVar5 == (unsigned int *)param_1[1]) {
        puVar5 = (unsigned int *)*param_1;
      }
      puVar7 = puVar7 + 1;
    }
    uVar6 = 0;
    if (param_1[4] != 0) {
      do {
        iVar3 = param_1[2];
        uVar6 = uVar6 + 1;
        param_1[2] = iVar3 + 4;
        if (iVar3 + 4 == param_1[1]) {
          param_1[2] = *param_1;
        }
      } while (uVar6 < (unsigned int)param_1[4]);
    }
    if (*param_1 != 0) {
      fn_8265CA20();
    }
    *param_1 = (int)puVar2;
    param_1[2] = (int)puVar2;
    param_1[1] = (int)(puVar2 + 8);
    param_1[4] = (int)puVar7 - (int)puVar2 >> 2;
    if (puVar7 == puVar2 + 8) {
      puVar7 = puVar2;
    }
    param_1[3] = (int)puVar7;
  }
  return;
}

