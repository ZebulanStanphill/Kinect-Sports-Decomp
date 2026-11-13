extern int fn_82AD1B28();
extern int fn_82AD6090();
extern int fn_82ADD120();
extern int fn_82AFA378();
extern int fn_82B0FC78();
extern int fn_82B8AC10();


void fn_82AFE520(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int param_4,char param_5,char param_6)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned short uVar4;
  int iVar3;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  
  puVar5 = param_2;
  while (puVar1 = (unsigned int *)*puVar5, puVar1 != (unsigned int *)0x0) {
    uVar8 = *puVar1;
    if (((uVar8 & 0xe000000) == 0) &&
       (((param_5 != '\0' || ((uVar8 >> 0x1e & 1) == 0)) || ((uVar8 & 0x1ffe000) != 0)))) {
      puVar6 = (unsigned int *)puVar1[4];
      for (puVar7 = (unsigned int *)*puVar6; puVar7 != puVar1; puVar7 = (unsigned int *)puVar7[1]) {
        puVar6 = puVar7 + 1;
      }
      *puVar6 = puVar1[1];
      puVar1[1] = *param_3;
      *param_3 = (unsigned int)puVar1;
      puVar1[4] = (unsigned int)param_3;
    }
    if ((unsigned int *)*puVar5 == puVar1) {
      puVar5 = puVar1 + 1;
    }
  }
  puVar5 = param_2 + 1;
  while (puVar1 = (unsigned int *)*puVar5, puVar1 != (unsigned int *)0x0) {
    if (puVar1[4] != 0) {
      uVar8 = *puVar1;
      if ((uVar8 & 0xe000000) != 0) {
        *puVar1 = ((((param_4 >> (uVar8 >> 10 & 6) & 3) << 2 | param_4 >> (uVar8 >> 8 & 6) & 3) << 2
                   | param_4 >> (uVar8 >> 6 & 6) & 3) << 2 | param_4 >> (uVar8 >> 4 & 6) & 3) << 5 |
                  uVar8 & 0xffffe01f;
        fn_82AFA378(param_1);
      }
      puVar7 = (unsigned int *)(puVar1[3] + 4);
      for (puVar6 = (unsigned int *)*puVar7; puVar6 != puVar1; puVar6 = (unsigned int *)puVar6[2]) {
        puVar7 = puVar6 + 2;
      }
      *puVar7 = puVar1[2];
      puVar1[2] = param_3[1];
      param_3[1] = (unsigned int)puVar1;
      puVar1[3] = (unsigned int)param_3;
    }
    if ((unsigned int *)*puVar5 == puVar1) {
      puVar5 = puVar1 + 2;
    }
  }
  if (param_6 != '\0') {
    if ((param_3[2] & 0x3f80) == 0x3700) {
      fn_82B0FC78(param_1,param_3);
    }
    else {
      fn_82AD1B28(param_3);
    }
    param_3[2] = param_3[2] | 0x1000000;
  }
  if (((param_3[2] >> 0x17 & 1) != 0) || ((param_2[2] >> 0x17 & 1) == 0)) goto LAB_82afe7b4;
  param_3[2] = param_3[2] | 0x800000;
  if ((param_2[4] & 0x70000) != 0) {
    *(short *)((int)param_3 + 0x12) = (short)param_2[4];
    param_3[4] = param_2[4] & 0x70000 | param_3[4] & 0xfff8ffff;
    uVar8 = (unsigned int)*(unsigned short *)((int)param_2 + 0x12);
    if (uVar8 < (param_2[4] >> 0x10 & 7) + (param_2[4] & 0xffff)) {
      iVar3 = uVar8 << 2;
      do {
        if (*(unsigned int **)(iVar3 + *(int *)(param_1 + 0x2c4)) == param_2) {
          *(unsigned int **)(iVar3 + *(int *)(param_1 + 0x2c4)) = param_3;
        }
        uVar8 = uVar8 + 1;
        iVar3 = iVar3 + 4;
      } while (uVar8 < (param_2[4] >> 0x10 & 7) + (param_2[4] & 0xffff));
    }
    goto LAB_82afe7b4;
  }
  uVar4 = fn_82ADD120(param_2);
  *(unsigned short *)((int)param_3 + 0x12) = uVar4;
  puVar5 = *(unsigned int **)(param_1 + 0x294);
  if ((puVar5[1] & 1) == 0) {
    uVar8 = *puVar5 & 0xfffffffe;
    iVar3 = uVar8 - 4;
    if ((iVar3 == 0) || (*(unsigned int *)(uVar8 + 8) < *(int *)(uVar8 + 4) + 1U)) goto LAB_82afe790;
  }
  else {
LAB_82afe790:
    iVar3 = fn_82AD6090(puVar5,1);
  }
  iVar2 = *(int *)(iVar3 + 8);
  *(int *)(iVar3 + 8) = iVar2 + 1;
  *(unsigned int **)((iVar2 + 4) * 4 + iVar3) = param_3;
LAB_82afe7b4:
  fn_82AFA378(param_1,param_3);
  fn_82B8AC10(param_1,param_2,*(unsigned int *)(param_1 + 0x28c),1);
  return;
}

