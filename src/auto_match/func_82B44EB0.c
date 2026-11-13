typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82ABE250();
extern int fn_82ABE9F0();
extern int fn_82ACBB48();
extern int fn_82AD6090();
extern int fn_82AEFC28();
extern int fn_82B43B90();
extern int fn_82B44C38();
extern int memset();


void fn_82B44EB0(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  bool bVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  int iVar8;
  int iVar9;
  unsigned int *puVar10;
  int **ppiVar11;
  unsigned __int64 uVar12;
  int iVar13;
  unsigned int uVar14;
  int *piVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  int *apiStack_60 [4];
  
  uVar12 = 0;
  for (uVar17 = *(unsigned int *)(param_1 + 4); ((uVar17 & 1) == 0 && (uVar17 != 0));
      uVar17 = *(unsigned int *)((uVar17 & 0xfffffffe) + 4)) {
    uVar12 = uVar12 + 1;
  }
  uVar6 = fn_82ABE9F0(param_1,(uVar12 & 0x3fffffff) << 2,0);
  uVar17 = *(unsigned int *)(param_1 + 4);
  *(unsigned int *)(param_1 + 0x60) = uVar6;
  uVar16 = 1;
  if (((uVar17 & 1) == 0) && (uVar17 != 0)) {
    uVar14 = 4;
    uVar16 = 1;
    do {
      if (0x1ffffc < uVar14) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xdc9);
      }
      *(unsigned int *)(uVar17 + 0x54) = 1;
      *(unsigned int *)(uVar17 + 0x30) = uVar16 & 0x7ffff | *(unsigned int *)(uVar17 + 0x30) & 0xfff80000;
      fn_82ACBB48(uVar17 + 0x54,uVar12 + 1);
      iVar13 = *(int *)(param_1 + 0x60) + uVar14;
      uVar16 = uVar16 + 1;
      uVar14 = uVar14 + 4;
      *(unsigned int *)(iVar13 + -4) = uVar17;
      uVar17 = *(unsigned int *)((uVar17 & 0xfffffffe) + 4);
    } while (((uVar17 & 1) == 0) && (uVar17 != 0));
  }
  *(unsigned int *)(param_1 + 0x5c) = uVar16;
  *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x2c) | 0x40000;
  fn_82B43B90(param_1,uVar12);
  if (1 < (uVar12 & 0xffffffff)) {
    fn_82B44C38(param_1,uVar12);
  }
  if ((*(unsigned int *)(param_1 + 0x28) & 0x400) != 0) {
    fn_82AEFC28(apiStack_60,uVar12 + 1,0xffffffff82af07e8,param_1);
    puVar7 = (unsigned int *)fn_82ABE250(param_1,8,6);
    puVar3 = puVar7 + 1;
    puVar7[1] = (unsigned int)puVar7 | 1;
    *puVar7 = (unsigned int)puVar3 | 1;
    uVar17 = *(unsigned int *)(param_1 + 4);
    if (((uVar17 & 1) == 0) && (piVar15 = apiStack_60[0], uVar17 != 0)) {
LAB_82b45018:
      if ((*(unsigned int *)(uVar17 + 0x30) >> 0x13 & 1) != 0) {
        if ((~(unsigned int)piVar15 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          memset(piVar15 + 1,0,*piVar15 << 2);
        }
        piVar15 = (int *)0x1;
        apiStack_60[0] = (int *)0x1;
        iVar13 = *(int *)(param_1 + 0x6c) + 1;
        *(int *)(param_1 + 0x6c) = iVar13;
        *(int *)(uVar17 + 0x2c) = iVar13;
        do {
          for (uVar16 = *(unsigned int *)(param_1 + 4); ((uVar16 & 1) == 0 && (uVar16 != 0));
              uVar16 = *(unsigned int *)((uVar16 & 0xfffffffe) + 4)) {
            uVar12 = (unsigned __int64)*(unsigned int *)(uVar17 + 0x30) & 0x7ffff;
            if (((*(unsigned int *)(((int)(uVar12 >> 5) + 1) * 4 + *(int *)(uVar16 + 0x28)) &
                 1 << ((unsigned int)uVar12 & 0x1f)) != 0) &&
               (((*(unsigned int *)(uVar16 + 0x24) & 1) == 0 &&
                (uVar14 = *(unsigned int *)(uVar16 + 0x20) & 0xfffffffe, uVar14 != 0x28)))) {
              uVar1 = *(unsigned int *)(uVar14 - 0x20) >> 7 & 0x7f;
              if ((uVar1 == 0x56) || (bVar5 = false, uVar1 == 0x57)) {
                bVar5 = true;
              }
              if (bVar5) {
                uVar1 = *(unsigned int *)(uVar14 - 0x20);
                iVar8 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
                ppiVar11 = (int **)(piVar15 + 1);
                iVar8 = *(int *)(iVar8 + (uVar14 - 0x38));
                if ((~(unsigned int)piVar15 & 1) == 0) {
                  ppiVar11 = apiStack_60;
                }
                uVar12 = ((unsigned __int64)*(unsigned int *)(iVar8 + 0x30) & 0x7ffff) + 1;
                uVar14 = (unsigned int)(uVar12 >> 3) & 0x1ffffffc;
                *(unsigned int *)(uVar14 + (int)ppiVar11) =
                     1 << ((unsigned int)uVar12 & 0x1f) | *(unsigned int *)(uVar14 + (int)ppiVar11);
                piVar15 = apiStack_60[0];
                if (*(int *)(iVar8 + 0x2c) != iVar13) {
                  *(int *)(iVar8 + 0x2c) = iVar13;
                  if ((*puVar3 & 1) == 0) {
                    uVar14 = *puVar7 & 0xfffffffe;
                    iVar9 = uVar14 - 4;
                    if ((iVar9 == 0) || (*(unsigned int *)(uVar14 + 8) < *(int *)(uVar14 + 4) + 1U))
                    goto LAB_82b4518c;
                  }
                  else {
LAB_82b4518c:
                    iVar9 = fn_82AD6090(puVar7,1);
                  }
                  iVar2 = *(int *)(iVar9 + 8);
                  *(int *)(iVar9 + 8) = iVar2 + 1;
                  *(int *)((iVar2 + 4) * 4 + iVar9) = iVar8;
                  piVar15 = apiStack_60[0];
                }
              }
            }
          }
          if (((*puVar3 & 1) != 0) || (*puVar3 == 0)) goto LAB_82b4523c;
          puVar4 = (unsigned int *)(*puVar7 & 0xfffffffe);
          puVar10 = puVar4 + -1;
          uVar16 = puVar4[1];
          puVar4[1] = (unsigned int)((unsigned __int64)uVar16 - 1);
          if ((unsigned __int64)uVar16 - 1 == 0) {
            *(unsigned int *)(*puVar4 & 0xfffffffe) = *puVar10;
            *(unsigned int *)(*puVar10 & 0xfffffffe) = *puVar4;
            fn_82AA6648(puVar7,puVar10,((unsigned __int64)puVar4[2] + 4 & 0x3fffffff) << 2);
          }
        } while( true );
      }
      goto LAB_82b45274;
    }
  }
  return;
LAB_82b4523c:
  ppiVar11 = (int **)(piVar15 + 1);
  if ((~(unsigned int)piVar15 & 1) == 0) {
    ppiVar11 = apiStack_60;
  }
  uVar12 = ((unsigned __int64)*(unsigned int *)(uVar17 + 0x30) & 0x7ffff) + 1;
  if ((*(unsigned int *)(((unsigned int)(uVar12 >> 3) & 0x1ffffffc) + (int)ppiVar11) >> ((unsigned int)uVar12 & 0x1f) & 1)
      != 0) {
    if ((((*(int **)(uVar17 + 0x74) == (int *)0x0) ||
         (iVar13 = **(int **)(uVar17 + 0x74), iVar13 == 0)) ||
        (iVar13 = *(int *)(iVar13 + 0x14), iVar13 == 0)) ||
       ((*(int *)(iVar13 + 4) != 3 || (*(int *)(iVar13 + 0x10) != 9)))) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(unsigned int *)(iVar13 + 0x18);
    }
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xe1e,uVar6);
  }
LAB_82b45274:
  uVar17 = *(unsigned int *)((uVar17 & 0xfffffffe) + 4);
  if ((uVar17 & 1) != 0) {
    return;
  }
  if (uVar17 == 0) {
    return;
  }
  goto LAB_82b45018;
}

