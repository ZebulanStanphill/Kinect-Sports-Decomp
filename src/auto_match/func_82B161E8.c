#define true 1
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82AD1B28();
extern int fn_82AD6090();
extern int fn_82ADD120();
extern int fn_82AEFCD8();
extern int fn_82B0FC78();
extern int fn_82B103B8();
extern int fn_82B1E978();
extern int fn_82B8AC10();


unsigned int fn_82B161E8(int param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned short uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned int *puVar13;
  unsigned int *puVar14;
  unsigned int auStack_80 [4];
  unsigned int auStack_70 [4];
  unsigned int auStack_60 [4];
  unsigned int auStack_50 [20];
  
  uVar6 = *(unsigned int *)(param_2 + 8);
  uVar12 = uVar6 >> 7 & 0x7f;
  if (uVar12 == 0x6e) {
    fn_82B0FC78(param_1,param_2);
LAB_82b162d8:
    if ((*(unsigned int *)(param_2 + 8) & 0x1c000) <= (*(unsigned int *)(param_2 + 8) >> 5 & 0x1c000)) {
      uVar6 = *(unsigned int *)(param_2 + 8);
      uVar8 = 0;
      iVar5 = 0;
      do {
        if (((unsigned __int64)(uVar6 >> 0x13) & 7) <= (uVar8 & 0xffffffff)) {
          return param_2;
        }
        puVar14 = *(unsigned int **)(param_2 + 0x2c + iVar5);
        uVar10 = 0;
        uVar12 = *puVar14;
        uVar1 = puVar14[3];
        uVar4 = uVar12 & 0x1f;
        uVar12 = uVar12 >> 5 & 3;
        *(unsigned int *)((int)auStack_60 + iVar5) = uVar4;
        *(unsigned int *)((int)auStack_50 + iVar5) = uVar12;
        *(unsigned int *)((int)auStack_70 + iVar5) = uVar1;
        if ((uVar8 & 0xffffffff) != 0) {
          iVar11 = 0;
          do {
            if (((*(unsigned int *)((int)auStack_70 + iVar11) == uVar1) &&
                (*(unsigned int *)((int)auStack_60 + iVar11) == uVar4)) &&
               (*(unsigned int *)((int)auStack_50 + iVar11) == uVar12)) break;
            uVar10 = uVar10 + 1;
            iVar11 = iVar11 + 4;
          } while ((uVar10 & 0xffffffff) < (uVar8 & 0xffffffff));
          if ((uVar10 & 0xffffffff) < (uVar8 & 0xffffffff)) goto LAB_82b16524;
        }
        uVar8 = uVar8 + 1;
        iVar5 = iVar5 + 4;
      } while( true );
    }
    uVar6 = fn_82B103B8(param_1,param_2);
    goto LAB_82b162fc;
  }
  if (uVar12 == 0x71) {
    return param_2;
  }
  if (uVar12 == 0x7c) {
    return param_2;
  }
  if (uVar12 == 0x7d) {
    fn_82AEFCD8(param_2);
    return param_2;
  }
  fn_82AD1B28();
  uVar12 = *(unsigned int *)(param_2 + 8);
  if ((uVar6 >> 1 & 0xf) == (uVar12 >> 1 & 0xf)) {
    return param_2;
  }
  if (*(int *)(param_1 + 0x28c) == 0) {
    return param_2;
  }
  if ((uVar12 >> 0x1a & 1) != 0) {
    return param_2;
  }
  *(unsigned int *)(param_2 + 8) = uVar12 | 0x4000000;
  puVar14 = *(unsigned int **)(param_1 + 0x28c);
  if ((puVar14[1] & 1) == 0) {
    uVar6 = *puVar14 & 0xfffffffe;
    iVar5 = uVar6 - 4;
    if ((iVar5 != 0) && (*(int *)(uVar6 + 4) + 1U <= *(unsigned int *)(uVar6 + 8))) goto LAB_82b162a0;
  }
  iVar5 = fn_82AD6090(puVar14,1);
LAB_82b162a0:
  iVar11 = *(int *)(iVar5 + 8);
  *(int *)(iVar5 + 8) = iVar11 + 1;
  *(unsigned int *)((iVar11 + 4) * 4 + iVar5) = param_2;
  return param_2;
LAB_82b16524:
  uVar9 = uVar8;
  if (*(int *)(*(int *)((int)((uVar10 + 0xb & 0xffffffff) << 2) + param_2) + 0xc) !=
      *(int *)((int)auStack_70 + (int)((uVar10 & 0xffffffff) << 2))) {
    uVar9 = uVar10;
    uVar10 = uVar8;
  }
  uVar6 = fn_82B1E978(param_1,param_2,uVar9,uVar10,auStack_80);
  puVar14 = (unsigned int *)(param_2 + 4);
  while (puVar2 = (unsigned int *)*puVar14, puVar2 != (unsigned int *)0x0) {
    uVar12 = puVar2[4];
    if (uVar12 != 0) {
      uVar1 = *puVar2;
      if ((((uVar1 & 0xe000000) != 0) &&
          (*puVar2 = ((((auStack_80[0] >> (uVar1 >> 10 & 6) & 3) << 2 |
                       auStack_80[0] >> (uVar1 >> 8 & 6) & 3) << 2 |
                      auStack_80[0] >> (uVar1 >> 6 & 6) & 3) << 2 |
                     auStack_80[0] >> (uVar1 >> 4 & 6) & 3) << 5 | uVar1 & 0xffffe01f,
          *(int *)(param_1 + 0x28c) != 0)) && ((*(unsigned int *)(uVar12 + 8) >> 0x1a & 1) == 0)) {
        *(unsigned int *)(uVar12 + 8) = *(unsigned int *)(uVar12 + 8) | 0x4000000;
        puVar3 = *(unsigned int **)(param_1 + 0x28c);
        if ((puVar3[1] & 1) == 0) {
          uVar1 = *puVar3 & 0xfffffffe;
          iVar5 = uVar1 - 4;
          if ((iVar5 == 0) || (*(unsigned int *)(uVar1 + 8) < *(int *)(uVar1 + 4) + 1U)) goto LAB_82b16628;
        }
        else {
LAB_82b16628:
          iVar5 = fn_82AD6090(puVar3,1);
        }
        iVar11 = *(int *)(iVar5 + 8);
        *(int *)(iVar5 + 8) = iVar11 + 1;
        *(unsigned int *)((iVar11 + 4) * 4 + iVar5) = uVar12;
      }
      puVar13 = (unsigned int *)(puVar2[3] + 4);
      for (puVar3 = (unsigned int *)*puVar13; puVar3 != puVar2; puVar3 = (unsigned int *)puVar3[2]) {
        puVar13 = puVar3 + 2;
      }
      *puVar13 = puVar2[2];
      puVar2[2] = *(unsigned int *)(uVar6 + 4);
      *(unsigned int **)(uVar6 + 4) = puVar2;
      puVar2[3] = uVar6;
    }
    if ((unsigned int *)*puVar14 == puVar2) {
      puVar14 = puVar2 + 2;
    }
  }
LAB_82b162fc:
  fn_82B0FC78(param_1,uVar6);
  uVar12 = *(unsigned int *)(uVar6 + 8);
  *(unsigned int *)(uVar6 + 8) = uVar12 | 0x1000000;
  if ((*(unsigned int *)(param_2 + 8) >> 0x17 & 1) != 0) {
    *(unsigned int *)(uVar6 + 8) = uVar12 | 0x1800000;
    *(unsigned int *)(uVar6 + 0x10) =
         (*(unsigned short *)(param_2 + 0x10) & 7) << 0x10 | *(unsigned int *)(uVar6 + 0x10) & 0xfff8ffff;
    uVar7 = fn_82ADD120(param_2);
    *(unsigned short *)(uVar6 + 0x12) = uVar7;
    if ((param_3[1] & 1) == 0) {
      uVar12 = *param_3 & 0xfffffffe;
      iVar5 = uVar12 - 4;
      if ((iVar5 == 0) || (*(unsigned int *)(uVar12 + 8) < *(int *)(uVar12 + 4) + 1U)) goto LAB_82b16374;
    }
    else {
LAB_82b16374:
      iVar5 = fn_82AD6090(param_3,1);
    }
    iVar11 = *(int *)(iVar5 + 8);
    *(int *)(iVar5 + 8) = iVar11 + 1;
    *(unsigned int *)((iVar11 + 4) * 4 + iVar5) = uVar6;
    if ((*(int *)(param_1 + 0x2c4) != 0) &&
       (uVar12 = *(unsigned int *)(param_2 + 0x10), (uVar12 & 0x70000) != 0)) {
      iVar5 = (uVar12 & 0xffff) * 4;
      *(unsigned int *)(*(int *)(param_1 + 0x2c4) + iVar5) = uVar6;
      *(unsigned int *)(*(int *)(param_1 + 0x2c4) + iVar5 + 4) = uVar6;
      *(unsigned int *)(((uVar12 & 0xffff) + 2) * 4 + *(int *)(param_1 + 0x2c4)) = uVar6;
      *(unsigned int *)(((uVar12 & 0xffff) + 3) * 4 + *(int *)(param_1 + 0x2c4)) = uVar6;
    }
  }
  fn_82B8AC10(param_1,param_2,0,1);
  param_2 = uVar6;
  if (*(int *)(param_1 + 0x28c) == 0) goto LAB_82b162d8;
  *(unsigned int *)(uVar6 + 8) = *(unsigned int *)(uVar6 + 8) | 0x4000000;
  puVar14 = *(unsigned int **)(param_1 + 0x28c);
  if ((puVar14[1] & 1) == 0) {
    uVar12 = *puVar14 & 0xfffffffe;
    iVar5 = uVar12 - 4;
    if ((iVar5 != 0) && (*(int *)(uVar12 + 4) + 1U <= *(unsigned int *)(uVar12 + 8))) goto LAB_82b16458;
  }
  iVar5 = fn_82AD6090(puVar14,1);
LAB_82b16458:
  iVar11 = *(int *)(iVar5 + 8);
  *(int *)(iVar5 + 8) = iVar11 + 1;
  *(unsigned int *)((iVar11 + 4) * 4 + iVar5) = uVar6;
  goto LAB_82b162d8;
}

