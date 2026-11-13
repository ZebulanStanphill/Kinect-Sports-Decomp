extern int fn_822A96A8();
extern int fn_822A9B80();


/* WARNING: Removing unreachable block (ram,0x822a992c) */

void fn_822A98E0(int param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  int iVar6;
  char *pcVar7;
  unsigned int uVar8;
  char cVar9;
  char cVar10;
  unsigned int uVar11;
  int iVar12;
  int *piVar13;
  unsigned int uVar14;
  int *piVar15;
  unsigned int *apuStack_50 [20];
  
  apuStack_50[0] = (unsigned int *)(param_1 + 0x70);
  if (0xf < *(unsigned int *)(param_1 + 0x84)) {
    apuStack_50[0] = (unsigned int *)*apuStack_50[0];
  }
  piVar13 = (int *)(param_1 + 0x9c);
  iVar3 = *(int *)(param_1 + 0x9c);
  if (iVar3 != *(int *)(param_1 + 0xa0)) {
    for (iVar12 = iVar3; iVar12 != *(int *)(param_1 + 0xa0); iVar12 = iVar12 + 8) {
    }
    *(int *)(param_1 + 0xa0) = iVar3;
  }
  (**(int (***)())(*param_2 + 0xac))(param_2,apuStack_50,piVar13);
  iVar3 = *piVar13;
  uVar11 = 0;
  if (*(int *)(param_1 + 0xa0) - iVar3 >> 3 != 0) {
    iVar12 = 0;
    do {
      iVar6 = ((unsigned int *)(iVar12 + iVar3))[1];
      if ((iVar6 != 1) && (iVar6 != 2)) {
        if (iVar6 == 3) {
          iVar3 = *(int *)(param_1 + 0x8c);
          uVar8 = 0;
          if (*(int *)(param_1 + 0x90) - iVar3 >> 4 != 0) {
            iVar6 = 0;
            do {
              iVar3 = iVar6 + iVar3;
              uVar8 = uVar8 + 1;
              iVar6 = iVar6 + 0x10;
              *(unsigned int *)(iVar3 + 0xc) = 0;
              *(unsigned int *)(iVar3 + 8) = 0;
              iVar3 = *(int *)(param_1 + 0x8c);
            } while (uVar8 < (unsigned int)(*(int *)(param_1 + 0x90) - iVar3 >> 4));
          }
        }
        else {
          pcVar2 = *(char **)(iVar12 + iVar3);
          if (pcVar2 != (char *)0x0) {
            puVar5 = *(unsigned int **)(param_1 + 0x8c);
            uVar14 = 0;
            uVar8 = *(int *)(param_1 + 0x90) - (int)puVar5 >> 4;
            if (uVar8 != 0) {
              cVar1 = *pcVar2;
              do {
                cVar10 = *(char *)*puVar5;
                cVar9 = cVar1;
                if (cVar1 == cVar10) {
                  pcVar7 = pcVar2;
                  do {
                    pcVar7 = pcVar7 + 1;
                    if (cVar9 == '\0') goto LAB_822a9a9c;
                    cVar9 = *pcVar7;
                    cVar10 = pcVar7[(int)*puVar5 - (int)pcVar2];
                  } while (cVar9 == cVar10);
                }
                if (cVar9 == cVar10) goto LAB_822a9a9c;
                uVar14 = uVar14 + 1;
                puVar5 = puVar5 + 4;
              } while (uVar14 < uVar8);
            }
          }
          uVar14 = 0xffffffff;
LAB_822a9a9c:
          if ((uVar14 != 0xffffffff) &&
             (piVar15 = (int *)(uVar14 * 0x10 + *(int *)(param_1 + 0x8c)), iVar6 == 7)) {
            if (piVar15[3] == 0) {
              piVar15[3] = 1;
              piVar15[2] = 1;
              iVar3 = fn_822A9B80();
              if ((iVar3 != 0) && (uVar8 = *(unsigned int *)(*piVar15 + 0xa0), uVar8 != 0)) {
                iVar3 = *(int *)(*(int *)(iVar3 + 0xf0) + 8);
                *(unsigned char *)((uVar8 >> 3) + iVar3) =
                     (unsigned char)(1 << (uVar8 & 7)) | *(unsigned char *)((uVar8 >> 3) + iVar3);
              }
              if (*(int *)(param_1 + 0x68) != 0) {
                uVar4 = 0;
LAB_822a9b48:
                fn_822A96A8(param_1,uVar14,uVar4);
              }
            }
            else if (((piVar15[2] == 0) && (*(int *)(param_1 + 0x38) == 0)) &&
                    (piVar15[2] = 1, *(int *)(param_1 + 0x68) != 0)) {
              uVar4 = 1;
              goto LAB_822a9b48;
            }
          }
        }
      }
      iVar3 = *piVar13;
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 + 8;
    } while (uVar11 < (unsigned int)(*(int *)(param_1 + 0xa0) - iVar3 >> 3));
  }
  return;
}

