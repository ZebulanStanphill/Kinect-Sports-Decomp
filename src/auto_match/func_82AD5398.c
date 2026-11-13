typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82ABDAA0();
extern int fn_82ABDBE8();
extern int fn_82AC9F80();
extern int fn_82AD1400();
extern int fn_82AD17B0();
extern int fn_82AD18C0();
extern int fn_82AD1978();
extern int fn_82AD2020();
extern int fn_82AD2128();
extern int fn_82AD4E58();
extern int fn_82B841E8();
extern int fn_82B8AE98();


void fn_82AD5398(unsigned __int64 param_1,unsigned int param_2,int param_3,int param_4,unsigned int param_5)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  bool bVar4;
  char cVar15;
  unsigned int uVar8;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned int uVar9;
  unsigned __int64 uVar7;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  int iVar13;
  int iVar14;
  __int64 lVar16;
  unsigned int uVar17;
  unsigned int *puVar18;
  
  uVar11 = *(unsigned int *)(param_2 + 0x30);
  uVar12 = param_2;
  puVar18 = (unsigned int *)(param_2 + 0x30);
  while ((1 << ((unsigned int)((unsigned __int64)uVar11 & 0x7ffff) & 0x1f) &
         *(unsigned int *)(((int)(((unsigned __int64)uVar11 & 0x7ffff) >> 5) + 1) * 4 + *(int *)(param_5 + 0x28)))
         == 0) {
    uVar12 = *(unsigned int *)(uVar12 + 0x34);
    puVar18 = (unsigned int *)(uVar12 + 0x30);
    uVar11 = *(unsigned int *)(uVar12 + 0x30);
  }
  for (iVar14 = *(int *)(uVar12 + 8); iVar14 != 0; iVar14 = *(int *)(iVar14 + 0xc)) {
    uVar3 = (unsigned __int64)*puVar18 & 0x7ffff;
    if ((*(unsigned int *)(((int)(uVar3 >> 5) + 1) * 4 + *(int *)(*(int *)(iVar14 + 4) + 0x28)) &
        1 << ((unsigned int)uVar3 & 0x1f)) != 0) {
      if ((1 << ((unsigned int)uVar3 & 0x1f) &
          *(unsigned int *)(((int)(uVar3 >> 5) + 1) * 4 + *(int *)(param_5 + 0x28))) != 0) break;
      if ((*(unsigned int *)(uVar12 & 0xfffffffe) & 1) == 0) {
        uVar11 = *(unsigned int *)(uVar12 & 0xfffffffe) & 0xfffffffe;
        uVar12 = uVar11 - 4;
        if ((uVar12 != 0) && ((*(unsigned int *)(uVar11 + 0x20) & 1) == 0)) {
          if ((*(unsigned int *)(uVar11 + 0x20) & 1) == 0) {
            iVar14 = (*(unsigned int *)(uVar11 + 0x1c) & 0xfffffffe) - 0x28;
          }
          else {
            iVar14 = 0;
          }
          if ((*(unsigned int *)(iVar14 + 8) & 0x3f80) == 0x2a00) break;
        }
      }
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0xdcf);
    }
  }
  uVar11 = *(unsigned int *)(param_5 + 0x24);
  if ((uVar11 & 1) == 0) {
    while (uVar11 != 0) {
      if ((*(unsigned int *)(uVar11 + 8) & 0x3f80) == 0x2100) {
        for (uVar9 = *(unsigned int *)(uVar12 + 0x1c); ((uVar9 & 1) == 0 && (uVar9 != 0));
            uVar9 = *(unsigned int *)((uVar9 & 0xfffffffe) + 0x28)) {
          uVar17 = *(unsigned int *)(uVar9 + 8) >> 7 & 0x7f;
          if ((((uVar17 == 0x6d) || ((uVar17 == 0x42 && ((*(unsigned int *)(uVar9 + 8) & 0x80000000) != 0)))
               ) && (cVar15 = fn_82ABDBE8(*(unsigned int *)(uVar11 + 0x2c),
                                           *(unsigned int *)(uVar9 + 0x2c)), cVar15 != '\0')) &&
             ((uVar17 = *(unsigned int *)((param_2 & 0xfffffffe) + 4), (uVar17 & 1) == 0 && (uVar17 != 0))))
          {
            while (uVar3 = (unsigned __int64)*(unsigned int *)(param_2 + 0x30) & 0x7ffff,
                  (*(unsigned int *)(((**(unsigned int **)(uVar17 + 0x28) & 0x7ffff) + 0x1f >> 3 & 0x1ffffffc) +
                             ((int)(uVar3 >> 5) + 1) * 4 + (int)*(unsigned int **)(uVar17 + 0x28)) &
                  1 << ((unsigned int)uVar3 & 0x1f)) != 0) {
              for (uVar1 = *(unsigned int *)(uVar17 + 0x24); ((uVar1 & 1) == 0 && (uVar1 != 0));
                  uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28)) {
                if (((*(unsigned int *)(uVar1 + 8) & 0x3f80) == 0x2080) &&
                   (uVar8 = fn_82AD1400(param_1,uVar1), uVar8 == uVar9)) goto LAB_82ad57c4;
              }
              uVar17 = *(unsigned int *)((uVar17 & 0xfffffffe) + 4);
              if (((uVar17 & 1) != 0) || (uVar17 == 0)) break;
            }
          }
        }
      }
      uVar11 = *(unsigned int *)((uVar11 & 0xfffffffe) + 0x28);
      if ((uVar11 & 1) != 0) break;
    }
  }
  iVar14 = *(int *)(param_3 + 0x1c);
  while (uVar3 = (unsigned __int64)*(unsigned int *)(iVar14 + 0x30) & 0x7ffff,
        (1 << ((unsigned int)uVar3 & 0x1f) &
        *(unsigned int *)(((int)(uVar3 >> 5) + 1) * 4 + *(int *)(uVar12 + 0x28))) == 0) {
    cVar15 = fn_82ABDAA0(param_3);
    if (cVar15 == '\0') {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    param_3 = fn_82AD1400(param_1,param_3);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    iVar14 = *(int *)(param_3 + 0x1c);
  }
  cVar15 = fn_82ABDAA0(param_3);
  if (cVar15 == '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c0);
  }
  lVar5 = fn_82AD1400(param_1,param_3);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c0);
  }
  uVar6 = fn_82B841E8(param_1,uVar12,uVar12 + 0x18,0x78,0,1);
  uVar9 = fn_82B841E8(param_1,uVar12,uVar12 + 0x18,0x6d,2,1);
  uVar7 = fn_82AD18C0(param_1,lVar5,0);
  uVar10 = fn_82AD1978(uVar9,uVar7);
  *(unsigned int *)(uVar9 + 0x2c) = uVar10;
  uVar6 = fn_82AD18C0(param_1,uVar6,0);
  uVar10 = fn_82AD1978(uVar9,uVar6);
  *(unsigned int *)(uVar9 + 0x30) = uVar10;
  *(unsigned int *)(uVar9 + 8) = *(unsigned int *)(uVar9 + 8) | 0x80000000;
  if ((*(unsigned int *)(param_5 & 0xfffffffe) & 1) == 0) {
    lVar16 = ((unsigned __int64)*(unsigned int *)(param_5 & 0xfffffffe) & 0xfffffffe) - 4;
  }
  else {
    lVar16 = 0;
  }
  fn_82AD4E58(param_1,uVar12,param_5,lVar16,0x42,lVar5);
LAB_82ad57c4:
  uVar12 = *(unsigned int *)(param_4 + 0x24);
  puVar18 = (unsigned int *)(param_4 + 0x20);
  while( true ) {
    if (((uVar12 & 1) != 0) || (uVar12 == 0)) {
      uVar12 = fn_82B841E8(param_1,param_4,0,0x41,0,1);
      *(unsigned int *)(uVar12 + 8) = *(unsigned int *)(uVar12 + 8) | 0x60000;
      uVar6 = fn_82AD17B0(param_1,uVar9);
      fn_82AD1978(uVar12,uVar6);
      cVar15 = fn_82ABDAA0(uVar9);
      iVar14 = param_4;
      if (cVar15 != '\0') {
        *(unsigned int *)(uVar9 + 8) = *(unsigned int *)(uVar9 + 8) | 0x80000000;
      }
      do {
        if ((*(int *)(iVar14 + 0xc) == 0) ||
           (bVar4 = true, *(int *)(*(int *)(iVar14 + 0xc) + 8) == 0)) {
          bVar4 = false;
        }
        if (((!bVar4) && (iVar13 = fn_82AD2020(param_1,iVar14), iVar13 != 0)) &&
           ((*(unsigned int *)(iVar13 + 8) & 0x3f80) == 0x2a80)) {
          fn_82B8AE98(param_1);
        }
        piVar2 = (int *)(iVar14 + 0x34);
        iVar14 = *piVar2;
      } while (*piVar2 != 0);
      uVar11 = uVar12 & 0xfffffffe;
      *(unsigned int *)(uVar11 + 0x24) = *puVar18;
      *(unsigned int *)(*puVar18 & 0xfffffffe) = uVar11;
      *(unsigned int *)(uVar11 + 0x28) = param_4 - 4U | 1;
      *puVar18 = uVar11 + 0x28;
      iVar14 = *(int *)(param_4 + 0x60);
      if (iVar14 == 0) {
        iVar14 = fn_82B841E8(param_1,param_4,param_4 + 0x18,0x78,0,0);
        *(unsigned int *)(iVar14 + 8) = *(unsigned int *)(iVar14 + 8) | 0x40;
      }
      uVar6 = fn_82AC9F80(param_1,iVar14,7);
      fn_82AD1978(uVar12,uVar6);
      if (*(int *)(param_4 + 0x60) != 0) {
        fn_82AD2128(uVar12,1,*(int *)(param_4 + 0x60),param_1);
      }
      *(unsigned int *)(param_4 + 0x60) = uVar12;
      *(unsigned int *)(uVar12 + 8) = *(unsigned int *)(uVar12 + 8) | 0x2000000;
      return;
    }
    if (((*(unsigned int *)(uVar12 + 8) & 0x3f80) == 0x2080) &&
       (uVar11 = fn_82AD1400(param_1,uVar12), uVar11 == uVar9)) break;
    uVar12 = *(unsigned int *)((uVar12 & 0xfffffffe) + 0x28);
  }
  return;
}

