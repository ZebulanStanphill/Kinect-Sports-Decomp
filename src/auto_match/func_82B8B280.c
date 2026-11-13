#define true 1
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABE250();
extern int fn_82AD6090();
extern int fn_82B4B048();


unsigned __int64 fn_82B8B280(int *param_1,int param_2,int param_3,char param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  int iVar9;
  unsigned int *puVar10;
  unsigned int *puVar11;
  int *piVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  unsigned int uVar15;
  
  puVar7 = (unsigned int *)fn_82ABE250(param_5,8,0x26);
  puVar6 = puVar7 + 1;
  puVar7[1] = (unsigned int)puVar7 | 1;
  *puVar7 = (unsigned int)puVar6 | 1;
  puVar8 = (unsigned int *)fn_82ABE250(param_5,8,0x26);
  puVar4 = puVar8 + 1;
  puVar8[1] = (unsigned int)puVar8 | 1;
  *puVar8 = (unsigned int)puVar4 | 1;
  uVar14 = 0;
  uVar15 = 0;
  piVar12 = param_1;
  do {
    iVar1 = *piVar12;
    while( true ) {
      if (iVar1 == 0) break;
      iVar2 = *(int *)(iVar1 + 0xc);
      if (iVar2 == param_2) {
        uVar14 = 1;
        fn_82B4B048(puVar7);
        goto LAB_82b8b4d4;
      }
      if (param_3 == 0) {
LAB_82b8b350:
        if ((param_4 == '\0') ||
           ((*(int *)(iVar2 + 0x1c) == param_1[7] && ((*(unsigned int *)(iVar2 + 8) & 0x3f80) != 0x3800))))
        {
          if ((*(unsigned int *)(iVar2 + 8) & 0x20000000) == 0) {
            *(unsigned int *)(iVar2 + 8) = *(unsigned int *)(iVar2 + 8) | 0x20000000;
            if ((*puVar6 & 1) == 0) {
              uVar13 = *puVar7 & 0xfffffffe;
              iVar9 = uVar13 - 4;
              if ((iVar9 == 0) || (*(unsigned int *)(uVar13 + 8) < *(int *)(uVar13 + 4) + 1U))
              goto LAB_82b8b3b8;
            }
            else {
LAB_82b8b3b8:
              iVar9 = fn_82AD6090(puVar7,1);
            }
            iVar3 = *(int *)(iVar9 + 8);
            *(int *)(iVar9 + 8) = iVar3 + 1;
            *(int *)((iVar3 + 4) * 4 + iVar9) = iVar2;
            if ((*puVar4 & 1) == 0) {
              uVar13 = *puVar8 & 0xfffffffe;
              iVar9 = uVar13 - 4;
              if ((iVar9 == 0) || (*(unsigned int *)(uVar13 + 8) < *(int *)(uVar13 + 4) + 1U))
              goto LAB_82b8b40c;
            }
            else {
LAB_82b8b40c:
              iVar9 = fn_82AD6090(puVar8,1);
            }
            iVar3 = *(int *)(iVar9 + 8);
            *(int *)(iVar9 + 8) = iVar3 + 1;
            *(int *)((iVar3 + 4) * 4 + iVar9) = iVar2;
          }
        }
      }
      else {
        uVar5 = (unsigned __int64)*(unsigned int *)(param_3 + 0x30) & 0x7ffff;
        if ((*(unsigned int *)(((int)(uVar5 >> 5) + 1) * 4 + *(int *)(*(int *)(iVar2 + 0x1c) + 0x28)) &
            1 << ((unsigned int)uVar5 & 0x1f)) != 0) goto LAB_82b8b350;
      }
      iVar1 = *(int *)(iVar1 + 4);
    }
    if ((*puVar6 & 1) != 0) break;
    if (*puVar6 == 0) break;
    puVar11 = (unsigned int *)(*puVar7 & 0xfffffffe);
    puVar10 = puVar11 + -1;
    uVar13 = puVar11[1] - 1;
    piVar12 = (int *)puVar10[puVar11[1] + 3];
    puVar11[1] = uVar13;
    if (uVar13 == 0) {
      *(unsigned int *)(*puVar11 & 0xfffffffe) = *puVar10;
      *(unsigned int *)(*puVar10 & 0xfffffffe) = *puVar11;
      fn_82AA6648(puVar7,puVar10,((unsigned __int64)puVar11[2] + 4 & 0x3fffffff) << 2);
    }
    uVar15 = uVar15 + 1;
    if (40000 < uVar15) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_5,0x12c0);
    }
  } while( true );
LAB_82b8b4d4:
  if ((*puVar4 & 1) != 0) {
LAB_82b8b558:
    *puVar8 = *(unsigned int *)(param_5 + 0x3d0);
    *(unsigned int **)(param_5 + 0x3d0) = puVar8;
    *puVar7 = (unsigned int)puVar8;
    *(unsigned int **)(param_5 + 0x3d0) = puVar7;
    return uVar14;
  }
  if (*puVar4 == 0) goto LAB_82b8b558;
  puVar6 = (unsigned int *)(*puVar8 & 0xfffffffe);
  puVar11 = puVar6 + -1;
  uVar13 = puVar6[1] - 1;
  uVar15 = puVar11[puVar6[1] + 3];
  puVar6[1] = uVar13;
  if (uVar13 == 0) {
    *(unsigned int *)(*puVar6 & 0xfffffffe) = *puVar11;
    *(unsigned int *)(*puVar11 & 0xfffffffe) = *puVar6;
    fn_82AA6648(puVar8,puVar11,((unsigned __int64)puVar6[2] + 4 & 0x3fffffff) << 2);
  }
  *(unsigned int *)(uVar15 + 8) = *(unsigned int *)(uVar15 + 8) & 0xdfffffff;
  goto LAB_82b8b4d4;
}

