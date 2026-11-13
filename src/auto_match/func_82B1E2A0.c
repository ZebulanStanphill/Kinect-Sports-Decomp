typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82AD18C0();
extern int fn_82AD1978();
extern int fn_82B841E8();
extern int fn_82B84350();


void fn_82B1E2A0(int param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar4;
  unsigned int uVar7;
  int iVar8;
  unsigned int *puVar9;
  unsigned int *puVar11;
  unsigned __int64 uVar10;
  unsigned int *puVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  unsigned int *puVar15;
  unsigned __int64 uVar16;
  
  uVar16 = (unsigned __int64)(*(unsigned int *)(param_3 + 8) >> 0xe) & 7;
  uVar14 = uVar16 - param_4;
  uVar5 = fn_82B841E8(param_1,*(unsigned int *)(param_3 + 0x1c),0,0x71,0,uVar14);
  uVar13 = uVar5 & 0xfffffffe;
  puVar11 = (unsigned int *)((param_3 & 0xfffffffe) + 0x24);
  *(unsigned int *)(uVar13 + 0x24) = *puVar11;
  *(unsigned int *)(*puVar11 & 0xfffffffe) = uVar13;
  *(unsigned int *)(uVar13 + 0x28) = param_3 & 0xfffffffe;
  *puVar11 = uVar13 + 0x28;
  *(unsigned int *)(uVar5 + 8) = *(unsigned int *)(uVar5 + 8) | 0x800000;
  uVar6 = fn_82B84350(param_1,*(unsigned int *)(param_3 + 0x1c),0,uVar16);
  iVar8 = *(int *)(param_3 + 0x1c);
  uVar13 = uVar6 & 0xfffffffe;
  uVar16 = 0;
  *(unsigned int *)(uVar13 + 0x28) = *(unsigned int *)(iVar8 + 0x1c);
  *(unsigned int *)((*(unsigned int *)(iVar8 + 0x1c) & 0xfffffffe) + 0x24) = uVar13 + 0x28;
  *(unsigned int *)(uVar13 + 0x24) = iVar8 + 0x1cU | 1;
  *(unsigned int *)(iVar8 + 0x1c) = uVar13;
  if ((param_4 & 0xffffffff) != 0) {
    puVar15 = (unsigned int *)(uVar6 + 0x28);
    do {
      uVar4 = fn_82AD18C0(param_1,param_3,uVar16);
      uVar7 = fn_82AD1978(uVar6,uVar4);
      uVar16 = uVar16 + 1;
      puVar15 = puVar15 + 1;
      *puVar15 = uVar7;
    } while ((uVar16 & 0xffffffff) < (param_4 & 0xffffffff));
  }
  uVar16 = 0;
  if ((uVar14 & 0xffffffff) != 0) {
    do {
      uVar4 = fn_82AD18C0(param_1,uVar5,uVar16);
      uVar7 = fn_82AD1978(uVar6,uVar4);
      uVar10 = param_4 + 0xb + uVar16;
      uVar16 = uVar16 + 1;
      *(unsigned int *)((int)((uVar10 & 0xffffffff) << 2) + uVar6) = uVar7;
    } while ((uVar16 & 0xffffffff) < (uVar14 & 0xffffffff));
  }
  puVar11 = (unsigned int *)(param_3 + 4);
  while (puVar1 = (unsigned int *)*puVar11, puVar1 != (unsigned int *)0x0) {
    uVar13 = puVar1[4];
    if ((uVar13 != 0) && (uVar13 != uVar6)) {
      if ((*(unsigned int *)(uVar13 + 8) & 0x3f80) == 0x3a80) {
        iVar8 = fn_82ABDD90(param_1,0x75,0,0);
        uVar2 = *(unsigned int *)(iVar8 + (uVar13 - 0x10)) & 7;
        if ((uVar2 < 4) || (bVar3 = true, 6 < uVar2)) {
          bVar3 = false;
        }
        if (!bVar3) {
          *puVar1 = (unsigned int)((param_4 & 0xffffffff) << 0x19) & 0xe000000 | *puVar1 & 0xf1ffffff;
          puVar9 = (unsigned int *)fn_82AD17B0(param_1,uVar5);
          *puVar9 = (unsigned int)((uVar14 & 0xffffffff) << 0x19) & 0xe000000 | *puVar9 & 0xf1ffffff;
          fn_82AD1270(puVar9,0);
          *puVar9 = *puVar9 & 0xffffe01f | 0x1c80;
          fn_82AD1978(uVar13,puVar9);
          goto LAB_82b1e4fc;
        }
      }
      puVar12 = (unsigned int *)(puVar1[3] + 4);
      for (puVar9 = (unsigned int *)*puVar12; puVar9 != puVar1; puVar9 = (unsigned int *)puVar9[2]) {
        puVar12 = puVar9 + 2;
      }
      *puVar12 = puVar1[2];
      puVar1[2] = *(unsigned int *)(uVar6 + 4);
      *(unsigned int **)(uVar6 + 4) = puVar1;
      puVar1[3] = uVar6;
    }
LAB_82b1e4fc:
    if ((unsigned int *)*puVar11 == puVar1) {
      puVar11 = puVar1 + 2;
    }
  }
  uVar13 = 0;
  *(unsigned int *)(param_3 + 8) =
       (unsigned int)((param_4 & 0xffffffff) << 0xe) & 0x1c000 | *(unsigned int *)(param_3 + 8) & 0xfffe3fff;
  *(short *)(uVar5 + 0xe) = (short)*(unsigned int *)(param_3 + 0xc);
  if (*(int *)(param_1 + 0x218) != 0) {
    puVar11 = (unsigned int *)(param_1 + 0x160);
    do {
      if (*puVar11 == param_3) {
        iVar8 = (uVar13 + 0x1d) * 0xc;
        *(unsigned int *)(iVar8 + param_1) =
             ((1 << ((unsigned int)param_4 & 0x3f)) + -1) * 0x200 & 0x1e00U |
             *(unsigned int *)(iVar8 + param_1) & 0xffffe1ff;
        break;
      }
      uVar13 = uVar13 + 1;
      puVar11 = puVar11 + 3;
    } while (uVar13 < *(unsigned int *)(param_1 + 0x218));
  }
  if (*(int *)(param_1 + 0x218) != 0x10) {
    iVar8 = (*(int *)(param_1 + 0x218) + 0x1d) * 0xc;
    *(unsigned int *)(iVar8 + param_1) = param_2 & 0x1f | *(unsigned int *)(iVar8 + param_1) & 0xffffffe0;
    iVar8 = (*(int *)(param_1 + 0x218) + 0x1d) * 0xc;
    *(unsigned int *)(iVar8 + param_1) = *(unsigned int *)(iVar8 + param_1) & 0xfffffe1f | 0x20;
    *(unsigned int *)(*(int *)(param_1 + 0x218) * 0xc + param_1 + 0x160) = uVar5;
    iVar8 = (*(int *)(param_1 + 0x218) + 0x1d) * 0xc;
    *(unsigned int *)(iVar8 + param_1) =
         ((1 << ((unsigned int)uVar14 & 0x3f)) + -1) * 0x200 & 0x1e00U |
         *(unsigned int *)(iVar8 + param_1) & 0xffffe1ff;
    *(char **)(*(int *)(param_1 + 0x218) * 0xc + param_1 + 0x158) = "<tessellator input>";
    *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c1);
}

