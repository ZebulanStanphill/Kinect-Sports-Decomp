extern unsigned int *auStack_90;
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AC6560();
extern int fn_82AC9F80();
extern int fn_82AD17B0();
extern int fn_82AD18C0();
extern int fn_82AD1978();
extern int fn_82B47660();
extern int fn_82B479B0();
extern int fn_82B482B0();
extern int fn_82B48AF8();
extern int fn_82B4BAA8();
extern int fn_82B4CED0();
extern int fn_82B841E8();
extern int fn_82B843F0();
extern int fn_82B866A0();
extern int fn_82B89810();
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;


unsigned __int64
fn_82B4F350(int param_1,int param_2,unsigned __int64 param_3,unsigned int param_4,__int64 param_5,
             __int64 param_6)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned int *puVar6;
  unsigned __int64 *puVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  int *piVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  __int64 lVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned __int64 uStack00000020;
  unsigned __int64 auStack_90 [18];
  
  uVar14 = 0xffffffff;
  uVar23 = 0;
  uVar11 = 4;
  uVar22 = 0xffffffff;
  uVar20 = 0;
  uVar16 = 0;
  lVar21 = param_6;
  uVar10 = uVar23;
  uVar19 = uVar11;
  uStack00000020 = param_3;
  uVar15 = 0xffffffff;
  uVar17 = 0xffffffff;
  if (param_4 != 0) {
    do {
      uVar8 = *(unsigned int *)(param_2 + 4);
      uVar1 = *(unsigned int *)(param_2 + 8);
      fn_82B47660(param_2,lVar21);
      iVar5 = *(int *)(param_2 + 8);
      iVar2 = *(int *)(param_2 + 4);
      lVar21 = lVar21 + param_5;
      *(unsigned int *)(param_2 + 4) = uVar8;
      *(unsigned int *)(param_2 + 8) = uVar1;
      puVar6 = (unsigned int *)((iVar5 + 2) * 8 + iVar2);
      uVar11 = puVar6[1];
      if ((uVar11 & 3) == 1) {
        uVar23 = *puVar6;
        uVar14 = 0;
        uVar11 = uVar11 >> 2 & 0x3fff;
      }
      else {
        if ((uVar11 & 3) != 2) {
          return 0;
        }
        uVar3 = *(unsigned int *)*puVar6;
        uVar23 = ((unsigned int *)*puVar6)[3];
        uVar14 = uVar3 & 0x1f;
        uVar11 = (uVar3 >> 5 & 0xff) >> (uVar11 >> 1 & 0x3e) & 3;
      }
      if ((uVar14 & 0x18) != 0) {
        return 0;
      }
      uVar3 = *(unsigned int *)(uVar23 + 8) >> 7 & 0x7f;
      if (uVar3 == 0x7c) {
        uVar3 = *(unsigned int *)(uVar23 + 8);
        iVar5 = fn_82ABDD90(param_1,uVar3 >> 7 & 0x7f,uVar3 >> 0x13 & 7,uVar3 >> 0xe & 7);
        puVar6 = (unsigned int *)(iVar5 + (uVar23 - 8));
        if ((puVar6[1] & 0x100000) == 0) {
          return 0;
        }
        uVar3 = *puVar6;
      }
      else {
        if (uVar3 != 0x61) {
          return 0;
        }
        uVar3 = *(unsigned int *)(uVar23 + 8);
        iVar5 = fn_82ABDD90(param_1,uVar3 >> 7 & 0x7f,uVar3 >> 0x13 & 7,uVar3 >> 0xe & 7);
        iVar5 = iVar5 + (uVar23 - 0x18);
        if ((*(unsigned int *)(iVar5 + 0xc) & 0x20000) == 0) {
          return 0;
        }
        uVar3 = *(unsigned int *)(iVar5 + 0x10);
      }
      uVar18 = uVar3 & 0x7fff;
      uVar13 = uVar3 >> 0xf & 0x3fff;
      uVar3 = uVar13;
      if (uVar16 != 0) {
        if (uVar16 == 1) {
          if (uVar13 <= uVar22) {
            return 0;
          }
          uVar20 = uVar13 - uVar22;
        }
        if ((((uVar17 != uVar18) || (uVar15 != uVar14)) || (uVar19 != uVar11)) ||
           (uVar23 = uVar10, uVar11 = uVar19, uVar3 = uVar22, uVar14 = uVar15, uVar18 = uVar17,
           uVar16 * uVar20 + uVar22 != uVar13)) {
          return 0;
        }
      }
      uVar22 = uVar3;
      uVar16 = uVar16 + 1;
      uVar10 = uVar23;
      uVar19 = uVar11;
      uVar15 = uVar14;
      uVar17 = uVar18;
    } while (uVar16 < param_4);
  }
  uVar4 = fn_82B4BAA8(param_1,&stack0x00000020);
  uVar4 = fn_82B482B0(param_1,uVar4);
  puVar6 = (unsigned int *)fn_82AD17B0(param_1,uVar4);
  if (uVar20 != 1) {
    auStack_90[0] = (unsigned __int64)uVar20;
    puVar7 = (unsigned __int64 *)
             fn_82B866A0((double)auStack_90[0],(double)lbl_821AAD20,(double)lbl_821AAD20,
                               auStack_90,param_1,1);
    uVar4 = fn_82B4CED0(param_1,puVar6,*puVar7);
    puVar6 = (unsigned int *)fn_82AD17B0(param_1,uVar4);
  }
  uVar10 = *(unsigned int *)(uVar23 + 8) >> 7 & 0x7f;
  if (uVar10 == 0x7c) {
    *puVar6 = *puVar6 & 0xf1ffe01f | 0x4000000;
    uVar4 = fn_82B48AF8(param_1,puVar6);
    puVar6 = (unsigned int *)fn_82AD17B0(param_1,uVar23);
    *puVar6 = (uVar11 & 0x1b) << 5 | 0x2001c80 | *puVar6 & 0xf3fffc9f;
    iVar5 = fn_82B841E8(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0x234),
                              (unsigned __int64)*(unsigned int *)(param_1 + 0x234) + 0x18,0x76,2,1);
    uVar8 = fn_82AD1978(iVar5,puVar6);
    *(unsigned int *)(iVar5 + 0x2c) = uVar8;
    uVar4 = fn_82AC9F80(param_1,uVar4,0);
    uVar8 = fn_82AD1978(iVar5,uVar4);
    *(unsigned int *)(iVar5 + 0x30) = uVar8;
    puVar9 = (unsigned int *)fn_82AC6560(param_1,0xc,0x16);
    *puVar9 = 0;
    puVar9[2] = puVar9[2] & 0xf0000000 | (uVar20 & 0x3fff) << 0xe | param_4 & 0x3fff;
    puVar9[1] = *(unsigned int *)(iVar5 + 0x10);
    *(unsigned int **)(iVar5 + 0x10) = puVar9;
    puVar6 = (unsigned int *)fn_82AD17B0(param_1,iVar5);
    *puVar6 = *puVar6 & 0xffffffe0 | 8;
    fn_82B89810(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0x234),
                      (unsigned __int64)*(unsigned int *)(param_1 + 0x234) + 0x18 | 3,puVar6);
  }
  else {
    if (uVar10 != 0x61) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    uVar4 = fn_82B479B0(param_1,puVar6,*(unsigned int *)(uVar23 + 0x30));
    uVar10 = fn_82B843F0(param_1,uVar23);
    uVar11 = uVar10 & 0xfffffffe;
    *(unsigned int *)(uVar10 + 0x1c) = *(unsigned int *)(param_1 + 0x234);
    iVar5 = *(int *)(param_1 + 0x234);
    puVar6 = (unsigned int *)(iVar5 + 0x18);
    *(unsigned int *)(uVar11 + 0x24) = *puVar6;
    *(unsigned int *)(*puVar6 & 0xfffffffe) = uVar11;
    *(unsigned int *)(uVar11 + 0x28) = iVar5 - 0xcU | 1;
    *puVar6 = uVar11 + 0x28;
    uVar8 = fn_82AD1978(uVar10,*(unsigned int *)(uVar23 + 0x2c));
    *(unsigned int *)(uVar10 + 0x2c) = uVar8;
    uVar4 = fn_82AD18C0(param_1,uVar4,0);
    uVar8 = fn_82AD1978(uVar10,uVar4);
    *(unsigned int *)(uVar10 + 0x30) = uVar8;
    if ((*(unsigned int *)(*(int *)(*(int *)(uVar10 + 0x2c) + 0xc) + 8) & 0x3f80) == 0x3c00) {
      uVar11 = fn_82B843F0(param_1);
      uVar23 = uVar11 & 0xfffffffe;
      *(unsigned int *)(uVar11 + 0x1c) = *(unsigned int *)(param_1 + 0x234);
      iVar5 = *(int *)(param_1 + 0x234);
      puVar6 = (unsigned int *)(iVar5 + 0x10);
      *(unsigned int *)(uVar23 + 0x24) = *puVar6;
      *(unsigned int *)(*puVar6 & 0xfffffffe) = uVar23;
      *(unsigned int *)(uVar23 + 0x28) = iVar5 - 0x14U | 1;
      *puVar6 = uVar23 + 0x28;
      iVar5 = *(int *)(uVar10 + 0x2c);
      piVar12 = (int *)(*(int *)(iVar5 + 0xc) + 4);
      for (iVar2 = *piVar12; iVar2 != iVar5; iVar2 = *(int *)(iVar2 + 8)) {
        piVar12 = (int *)(iVar2 + 8);
      }
      *piVar12 = *(int *)(iVar5 + 8);
      *(unsigned int *)(iVar5 + 8) = *(unsigned int *)(uVar11 + 4);
      *(int *)(uVar11 + 4) = iVar5;
      *(unsigned int *)(iVar5 + 0xc) = uVar11;
    }
    puVar6 = (unsigned int *)fn_82AD17B0(param_1,uVar10);
  }
  *puVar6 = uVar14 & 0x1f | *puVar6 & 0xffffffe0;
  uVar8 = *(unsigned int *)(param_2 + 8);
  uVar1 = *(unsigned int *)(param_2 + 4);
  fn_82B47660(param_2,param_6);
  iVar5 = *(int *)(param_2 + 8);
  *(unsigned int *)(param_2 + 8) = uVar8;
  iVar2 = *(int *)(param_2 + 4);
  *(unsigned int *)(param_2 + 4) = uVar1;
  puVar9 = (unsigned int *)((iVar5 + 2) * 8 + iVar2);
  *puVar9 = puVar6;
  puVar9[1] = puVar9[1] & 0x10000 | 2;
  return 1;
}

