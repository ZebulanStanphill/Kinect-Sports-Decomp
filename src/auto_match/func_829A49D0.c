extern unsigned int *auStack_100;
extern unsigned int *auStack_b0;


unsigned __int64 fn_829A49D0(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned int uVar16;
  unsigned int auStack_100 [20];
  unsigned int auStack_b0 [44];
  
  if (param_2 == (unsigned int *)0x0) {
LAB_829a49e0:
    uVar9 = 1;
  }
  else {
    uVar1 = *param_2;
    if (((uVar1 & 0xfff00000) != 0) && ((uVar1 & 0xfff00000) != 0x20700000)) {
      uVar15 = (unsigned __int64)uVar1 & 0xfffff;
      uVar14 = param_2[1] / uVar15;
      trapWord(6,uVar15,0);
      if (1 < uVar14) {
        iVar2 = *(int *)(param_1 + 0x80);
        iVar3 = *(int *)(param_1 + 0x88);
        iVar4 = *(int *)(param_1 + 0x7c);
        iVar5 = *(int *)(param_1 + 0x94);
        auStack_100[iVar2] = 0;
        auStack_100[iVar3] = 0;
        auStack_100[iVar4] = 0;
        auStack_b0[iVar2] = 2;
        auStack_b0[iVar3] = 3;
        uVar13 = 0;
        auStack_b0[iVar4] = 2;
        uVar16 = 0;
        auStack_100[iVar5] = 0;
        auStack_b0[iVar5] = 1;
        if (uVar14 != 0) {
          uVar6 = param_2[2];
          uVar15 = (unsigned __int64)uVar6;
          lVar8 = ((unsigned __int64)uVar1 & 0xfffff) * 4;
          iVar2 = *(int *)(param_1 + 0x14);
          iVar3 = *(int *)(param_1 + 0x10);
          do {
            uVar11 = 0;
            iVar4 = *(int *)(*(int *)uVar15 * 4 + iVar2);
            uVar1 = *(unsigned int *)(iVar4 + 4);
            if (uVar16 != 0) {
              lVar10 = 0;
              do {
                iVar5 = *(int *)(*(int *)((int)lVar10 + uVar6) * 4 + iVar2);
                if ((((uVar1 == *(unsigned int *)(iVar5 + 4)) &&
                     (*(int *)(iVar4 + 8) == *(int *)(iVar5 + 8))) &&
                    (*(int *)(iVar4 + 0xc) == *(int *)(iVar5 + 0xc))) &&
                   ((((*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x10) + uVar1 * 4) + 4) & 0x100) == 0
                     || ((*(unsigned int *)(*(int *)(*(unsigned int *)(iVar5 + 4) * 4 + *(int *)(param_1 + 0x10)) +
                                   4) & 0x100) == 0)) ||
                    (*(double *)(iVar4 + 0x20) == *(double *)(iVar5 + 0x20))))) break;
                uVar11 = uVar11 + 1;
                lVar10 = lVar8 + lVar10;
              } while (uVar11 < uVar16);
            }
            if (uVar11 == uVar16) {
              if (uVar1 == *(unsigned int *)(param_1 + 0x80)) {
                uVar12 = *(unsigned int *)(param_1 + 0x80);
                if (*(char *)(iVar4 + 0x6f) == '\x03') {
                  if (((*(short *)(param_1 + 0xca) == 0x101) && (uVar13 = uVar13 + 1, 2 < uVar13))
                     && (param_3 == (unsigned int *)0x0)) goto LAB_829a49e0;
                  uVar12 = *(unsigned int *)(param_1 + 0x88);
                }
              }
              else {
                uVar11 = *(unsigned int *)(*(int *)(iVar3 + uVar1 * 4) + 4);
                if (((uVar11 & 0x200) == 0) || ((uVar11 & 0x80) != 0)) {
                  uVar12 = uVar1;
                  if ((uVar11 & 0x80) != 0) {
                    uVar12 = *(unsigned int *)(param_1 + 0x94);
                  }
                }
                else {
                  uVar12 = *(unsigned int *)(param_1 + 0x7c);
                }
              }
              if ((((*(int *)(iVar4 + 0x48) != -1) &&
                   (uVar11 = *(unsigned int *)(param_1 + 0x88), uVar1 == uVar11)) &&
                  ((*(short *)(param_1 + 0xca) == 0x101 &&
                   (puVar7 = *(unsigned int **)(*(int *)(iVar4 + 0x48) * 4 + *(int *)(param_1 + 0x18)),
                   uVar12 = uVar11, puVar7 != (unsigned int *)0x0)))) &&
                 (((((uVar1 = *puVar7 & 0xfff00000, uVar1 == 0x60f00000 || (uVar1 == 0x60500000)) ||
                    (uVar1 == 0x60a00000)) || (uVar1 == 0x60000000)) &&
                  ((uVar13 = uVar13 + 1, 2 < uVar13 && (param_3 == (unsigned int *)0x0))))))
              goto LAB_829a49e0;
              if (uVar12 < 0x12) {
                uVar1 = auStack_100[uVar12];
                auStack_100[uVar12] = uVar1 + 1;
                if (auStack_b0[uVar12] < uVar1 + 1) {
                  if (param_3 != (unsigned int *)0x0) {
                    *param_3 = uVar16;
                  }
                  goto LAB_829a49e0;
                }
              }
            }
            uVar16 = uVar16 + 1;
            uVar15 = uVar15 + lVar8;
          } while (uVar16 < uVar14);
        }
      }
    }
    uVar9 = 0;
  }
  return uVar9;
}

