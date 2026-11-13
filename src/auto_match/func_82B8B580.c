#define true 1
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABE250();
extern int fn_82AD6090();
extern int fn_82AEB338();
extern int fn_82AF4968();
extern int fn_82B4B048();


unsigned __int64 fn_82B8B580(int param_1,int *param_2,unsigned int param_3,char param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  char cVar9;
  int iVar8;
  unsigned int *puVar10;
  unsigned int *puVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  unsigned int uVar15;
  int *piVar16;
  
  iVar1 = param_2[7];
  puVar6 = (unsigned int *)fn_82ABE250(param_1,8,0x26);
  puVar5 = puVar6 + 1;
  puVar6[1] = (unsigned int)puVar6 | 1;
  *puVar6 = (unsigned int)puVar5 | 1;
  puVar7 = (unsigned int *)fn_82ABE250(param_1,8,0x26);
  puVar4 = puVar7 + 1;
  puVar7[1] = (unsigned int)puVar7 | 1;
  *puVar7 = (unsigned int)puVar4 | 1;
  uVar14 = 1;
  uVar15 = 0;
  piVar16 = param_2;
  do {
    for (iVar2 = *piVar16; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      uVar12 = *(unsigned int *)(iVar2 + 0xc);
      if (uVar12 == param_3) {
        if ((piVar16 != param_2) || (param_4 != '\0')) {
          uVar14 = 0;
          fn_82B4B048(puVar6);
          goto LAB_82b8b630;
        }
      }
      else {
        cVar9 = fn_82AEB338(uVar12);
        if ((cVar9 != '\0') && (*(int *)(uVar12 + 0x1c) == iVar1)) {
          uVar13 = uVar12;
          if (param_5 == '\0') {
            do {
              uVar13 = *(unsigned int *)((uVar13 & 0xfffffffe) + 0x24);
              if (((uVar13 & 1) != 0) || (uVar13 = (uVar13 & 0xfffffffe) - 0x28, uVar13 == 0)) {
                cVar9 = '\0';
                goto LAB_82b8b714;
              }
            } while (uVar13 != param_3);
            cVar9 = '\x01';
          }
          else {
            cVar9 = fn_82AF4968(uVar12,param_3);
          }
LAB_82b8b714:
          if ((cVar9 != '\0') && ((*(unsigned int *)(uVar12 + 8) & 0x20000000) == 0)) {
            *(unsigned int *)(uVar12 + 8) = *(unsigned int *)(uVar12 + 8) | 0x20000000;
            if ((*puVar5 & 1) == 0) {
              uVar13 = *puVar6 & 0xfffffffe;
              iVar8 = uVar13 - 4;
              if ((iVar8 == 0) || (*(unsigned int *)(uVar13 + 8) < *(int *)(uVar13 + 4) + 1U))
              goto LAB_82b8b760;
            }
            else {
LAB_82b8b760:
              iVar8 = fn_82AD6090(puVar6,1);
            }
            iVar3 = *(int *)(iVar8 + 8);
            *(int *)(iVar8 + 8) = iVar3 + 1;
            *(unsigned int *)((iVar3 + 4) * 4 + iVar8) = uVar12;
            if ((*puVar4 & 1) == 0) {
              uVar13 = *puVar7 & 0xfffffffe;
              iVar8 = uVar13 - 4;
              if ((iVar8 == 0) || (*(unsigned int *)(uVar13 + 8) < *(int *)(uVar13 + 4) + 1U))
              goto LAB_82b8b7b4;
            }
            else {
LAB_82b8b7b4:
              iVar8 = fn_82AD6090(puVar7,1);
            }
            iVar3 = *(int *)(iVar8 + 8);
            *(int *)(iVar8 + 8) = iVar3 + 1;
            *(unsigned int *)((iVar3 + 4) * 4 + iVar8) = uVar12;
          }
        }
      }
    }
    if (((*puVar5 & 1) != 0) || (*puVar5 == 0)) {
LAB_82b8b630:
      while (((*puVar4 & 1) == 0 && (*puVar4 != 0))) {
        puVar5 = (unsigned int *)(*puVar7 & 0xfffffffe);
        puVar10 = puVar5 + -1;
        uVar12 = puVar5[1] - 1;
        uVar15 = puVar10[puVar5[1] + 3];
        puVar5[1] = uVar12;
        if (uVar12 == 0) {
          *(unsigned int *)(*puVar5 & 0xfffffffe) = *puVar10;
          *(unsigned int *)(*puVar10 & 0xfffffffe) = *puVar5;
          fn_82AA6648(puVar7,puVar10,((unsigned __int64)puVar5[2] + 4 & 0x3fffffff) << 2);
        }
        *(unsigned int *)(uVar15 + 8) = *(unsigned int *)(uVar15 + 8) & 0xdfffffff;
      }
      *puVar7 = *(unsigned int *)(param_1 + 0x3d0);
      *(unsigned int **)(param_1 + 0x3d0) = puVar7;
      *puVar6 = (unsigned int)puVar7;
      *(unsigned int **)(param_1 + 0x3d0) = puVar6;
      return uVar14;
    }
    puVar10 = (unsigned int *)(*puVar6 & 0xfffffffe);
    puVar11 = puVar10 + -1;
    uVar12 = puVar10[1] - 1;
    piVar16 = (int *)puVar11[puVar10[1] + 3];
    puVar10[1] = uVar12;
    if (uVar12 == 0) {
      *(unsigned int *)(*puVar10 & 0xfffffffe) = *puVar11;
      *(unsigned int *)(*puVar11 & 0xfffffffe) = *puVar10;
      fn_82AA6648(puVar6,puVar11,((unsigned __int64)puVar10[2] + 4 & 0x3fffffff) << 2);
    }
    uVar15 = uVar15 + 1;
    if (10000 < uVar15) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
  } while( true );
}

