typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AD18C0();
extern int fn_82AD1978();
extern int fn_82AD1B28();
extern int fn_82AD20C0();
extern int fn_82AD6090();
extern int fn_82ADD120();
extern int fn_82AF04D0();
extern int fn_82AFA378();
extern int fn_82AFE520();
extern int fn_82B0FC78();
extern int fn_82B84350();
extern int fn_82B85910();
extern int fn_82B8D488();


void fn_82AFE7E0(int param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  unsigned short uVar7;
  int iVar6;
  char cVar8;
  int *piVar9;
  unsigned int uVar10;
  bool bVar13;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int *puVar14;
  unsigned int *puVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int *puVar18;
  unsigned int uVar19;
  unsigned int *puVar20;
  unsigned int *puVar21;
  
  if (((unsigned int)param_2[2] >> 0xe & 7) == 1) {
    fn_82AFE520(param_1,param_2,param_4,0,0,1);
    return;
  }
  puVar21 = (unsigned int *)(param_2 + 1);
  bVar13 = true;
  puVar15 = (unsigned int *)param_2[1];
  for (puVar14 = puVar15; puVar14 != (unsigned int *)0x0; puVar14 = (unsigned int *)puVar14[2]) {
    if (((puVar14[4] != 0) && ((*puVar14 >> 0x19 & 7) != 0)) && ((*puVar14 >> 0x19 & 7) != 1)) {
      bVar13 = false;
      break;
    }
  }
  uVar4 = 0;
  uVar19 = 0;
  if (!bVar13) {
    for (; puVar15 != (unsigned int *)0x0; puVar15 = (unsigned int *)puVar15[2]) {
      uVar4 = puVar15[4];
      if (((uVar4 != 0) && ((*(unsigned int *)(uVar4 + 8) & 0x3f80) == 0x3700)) &&
         ((*puVar15 & 0xe000000) != 0)) goto LAB_82afe8c4;
    }
    uVar4 = 0;
LAB_82afe8c4:
    if (uVar4 == 0) {
      uVar4 = fn_82B84350(param_1,param_2[7],0);
      uVar16 = (unsigned int)param_2 & 0xfffffffe;
      uVar19 = uVar4 & 0xfffffffe;
      puVar20 = (unsigned int *)(uVar4 + 0x28);
      *(unsigned int *)(uVar19 + 0x28) = *(unsigned int *)(uVar16 + 0x28);
      *(unsigned int *)((*(unsigned int *)(uVar16 + 0x28) & 0xfffffffe) + 0x24) = uVar19 + 0x28;
      *(unsigned int *)(uVar19 + 0x24) = uVar16 + 0x28;
      *(unsigned int *)(uVar16 + 0x28) = uVar19;
      for (uVar19 = (unsigned int)param_2[2] >> 1 & 0xf; uVar19 != 0;
          uVar19 = uVar19 - (uVar19 & ~(uVar19 - 1))) {
        uVar3 = fn_82AD18C0(param_1,param_2,0x1f - LZCOUNT(uVar19 & ~(uVar19 - 1)));
        uVar5 = fn_82AD1978(uVar4,uVar3);
        puVar20 = puVar20 + 1;
        *puVar20 = uVar5;
      }
      if (((unsigned int)param_2[2] >> 0x17 & 1) != 0) {
        *(unsigned int *)(uVar4 + 8) = *(unsigned int *)(uVar4 + 8) | 0x800000;
        uVar7 = fn_82ADD120(param_2);
        *(unsigned short *)(uVar4 + 0x12) = uVar7;
        puVar14 = *(unsigned int **)(param_1 + 0x294);
        if ((puVar14[1] & 1) == 0) {
          uVar19 = *puVar14 & 0xfffffffe;
          iVar6 = uVar19 - 4;
          if ((iVar6 == 0) || (*(unsigned int *)(uVar19 + 8) < *(int *)(uVar19 + 4) + 1U))
          goto LAB_82afe9c4;
        }
        else {
LAB_82afe9c4:
          iVar6 = fn_82AD6090(puVar14,1);
        }
        iVar1 = *(int *)(iVar6 + 8);
        *(int *)(iVar6 + 8) = iVar1 + 1;
        *(unsigned int *)((iVar1 + 4) * 4 + iVar6) = uVar4;
      }
    }
    piVar9 = (int *)(uVar4 + 0x2c);
    uVar19 = 0;
    for (uVar16 = 0; uVar16 < (*(unsigned int *)(uVar4 + 8) >> 0x13 & 7); uVar16 = uVar16 + 1) {
      if ((int *)((unsigned int *)*piVar9)[3] == param_2) {
        uVar11 = *(unsigned int *)*piVar9 >> 4 & 6;
        uVar19 = uVar19 & ~(3 << uVar11) | uVar16 << uVar11;
      }
      piVar9 = piVar9 + 1;
    }
    iVar6 = ((uVar19 >> ((param_3 & 0x1f) << 1) & 3) + 0xb) * 4;
    fn_82AFA378(param_1,*(unsigned int *)(*(int *)(iVar6 + uVar4) + 0xc));
    uVar3 = fn_82AD18C0(param_1,param_4,0);
    fn_82AD20C0(uVar4,*(unsigned int *)(iVar6 + uVar4),param_1);
    uVar5 = fn_82AD1978(uVar4,uVar3);
    *(unsigned int *)(iVar6 + uVar4) = uVar5;
  }
  for (puVar14 = (unsigned int *)*param_2; puVar14 != (unsigned int *)0x0; puVar14 = (unsigned int *)puVar14[1]) {
    uVar16 = *puVar14;
    if (((uVar16 & 0xe000000) == 0) && (((uVar16 >> 0x1e & 1) == 0 || ((uVar16 & 0x1ffe000) != 0))))
    {
      fn_82AD1978(param_4,puVar14);
    }
  }
  while (puVar14 = (unsigned int *)*puVar21, puVar14 != (unsigned int *)0x0) {
    uVar16 = puVar14[4];
    if (uVar16 != 0) {
      uVar11 = *puVar14;
      uVar2 = uVar11 >> 0x19 & 7;
      if ((uVar2 != 0) && (uVar16 != uVar4)) {
        uVar10 = 0;
        uVar12 = 0;
        if (uVar2 != 0) {
          uVar17 = 0;
          do {
            uVar12 = uVar12 + 1;
            uVar10 = 1 << ((uVar11 >> 5 & 0xff) >> (uVar17 & 0x3f) & 3) | uVar10;
            uVar17 = uVar17 + 2;
          } while (uVar12 < (uVar11 >> 0x19 & 7));
        }
        if ((1 << (param_3 & 0x3f) & uVar10) != 0) {
          if (uVar2 == 1) {
            puVar18 = (unsigned int *)(puVar14[3] + 4);
            for (puVar15 = (unsigned int *)*puVar18; puVar15 != puVar14; puVar15 = (unsigned int *)puVar15[2]) {
              puVar18 = puVar15 + 2;
            }
            *puVar18 = puVar14[2];
            puVar14[2] = *(unsigned int *)(param_4 + 4);
            *(unsigned int **)(param_4 + 4) = puVar14;
            puVar14[3] = param_4;
            uVar11 = *puVar14 & 0xffffe01f | 0x1c80;
          }
          else {
            if ((uVar4 != 0) && (cVar8 = fn_82B85910(uVar4,uVar16), cVar8 != '\0')) {
              fn_82B8D488(param_1,uVar4,uVar16,0);
            }
            puVar18 = (unsigned int *)(puVar14[3] + 4);
            for (puVar15 = (unsigned int *)*puVar18; puVar15 != puVar14; puVar15 = (unsigned int *)puVar15[2]) {
              puVar18 = puVar15 + 2;
            }
            *puVar18 = puVar14[2];
            puVar14[2] = *(unsigned int *)(uVar4 + 4);
            *(unsigned int **)(uVar4 + 4) = puVar14;
            uVar11 = *puVar14 >> 5 & 0xff;
            puVar14[3] = uVar4;
            uVar11 = ((((uVar19 >> (uVar11 >> 5 & 6) & 3) << 2 | uVar19 >> (uVar11 >> 3 & 6) & 3) <<
                       2 | uVar19 >> (uVar11 >> 1 & 6) & 3) << 2 |
                     uVar19 >> ((*puVar14 >> 5 & 3) << 1) & 3) << 5 | *puVar14 & 0xffffe01e;
          }
          *puVar14 = uVar11;
          fn_82AFA378(param_1,uVar16);
        }
      }
    }
    if ((unsigned int *)*puVar21 == puVar14) {
      puVar21 = puVar14 + 2;
    }
  }
  fn_82AF04D0(param_2,param_1);
  fn_82AD1B28(param_2);
  fn_82AD1B28(param_4);
  *(unsigned int *)(param_4 + 8) = *(unsigned int *)(param_4 + 8) | 0x1000000;
  if (uVar4 != 0) {
    fn_82B0FC78(param_1,uVar4);
    *(unsigned int *)(uVar4 + 8) = *(unsigned int *)(uVar4 + 8) | 0x1000000;
  }
  if (((*(unsigned int *)(param_4 + 8) >> 0x17 & 1) != 0) || (((unsigned int)param_2[2] >> 0x17 & 1) == 0))
  goto LAB_82afed60;
  *(unsigned int *)(param_4 + 8) = *(unsigned int *)(param_4 + 8) | 0x800000;
  if ((param_2[4] & 0x70000U) == 0) {
    uVar7 = fn_82ADD120(param_2);
    *(unsigned short *)(param_4 + 0x12) = uVar7;
  }
  else {
    *(short *)(param_4 + 0x12) = (short)param_2[4] + (short)param_3;
  }
  *(unsigned int *)(param_4 + 0x10) = *(unsigned int *)(param_4 + 0x10) & 0xfff8ffff;
  puVar14 = *(unsigned int **)(param_1 + 0x294);
  if ((puVar14[1] & 1) == 0) {
    uVar19 = *puVar14 & 0xfffffffe;
    iVar6 = uVar19 - 4;
    if ((iVar6 == 0) || (*(unsigned int *)(uVar19 + 8) < *(int *)(uVar19 + 4) + 1U)) goto LAB_82afed3c;
  }
  else {
LAB_82afed3c:
    iVar6 = fn_82AD6090(puVar14,1);
  }
  iVar1 = *(int *)(iVar6 + 8);
  *(int *)(iVar6 + 8) = iVar1 + 1;
  *(unsigned int *)((iVar1 + 4) * 4 + iVar6) = param_4;
LAB_82afed60:
  if (uVar4 != 0) {
    fn_82AFA378(param_1,uVar4);
  }
  fn_82AFA378(param_1,param_4);
  fn_82AFA378(param_1,param_2);
  return;
}

