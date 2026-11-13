typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_8262FEC8();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82645838();
extern int fn_8265CA20();
extern unsigned int lbl_8320A898;
extern int (*lbl_832810E4)();


void fn_82574890(unsigned int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  int *piVar9;
  __int64 lVar10;
  
  piVar9 = (int *)param_1[4];
  while (piVar9 != (int *)0x0) {
    piVar2 = (int *)piVar9[4];
    if ((*piVar9 != 0) && ((int (**)())piVar9[3] != (int (**)())0x0)) {
      (*(int (**)())piVar9[3])();
    }
    *piVar9 = 0;
    piVar9[2] = 0;
    piVar9[3] = 0;
    fn_82522ED8(piVar9);
    piVar9 = piVar2;
  }
  piVar9 = (int *)param_1[3];
  while (piVar9 != (int *)0x0) {
    puVar6 = (unsigned int *)*piVar9;
    piVar2 = (int *)piVar9[1];
    if (puVar6 != (unsigned int *)0x0) {
      (**(int (***)())*puVar6)(puVar6,1);
      *piVar9 = 0;
    }
    fn_82522ED8(piVar9);
    piVar9 = piVar2;
  }
  param_1[3] = 0;
  piVar9 = (int *)param_1[5];
  while (piVar9 != (int *)0x0) {
    puVar6 = (unsigned int *)*piVar9;
    piVar2 = (int *)piVar9[1];
    if (puVar6 != (unsigned int *)0x0) {
      (**(int (***)())*puVar6)(puVar6,1);
      *piVar9 = 0;
    }
    fn_82522ED8(piVar9);
    piVar9 = piVar2;
  }
  param_1[5] = 0;
  piVar9 = (int *)param_1[6];
  while (piVar9 != (int *)0x0) {
    puVar6 = (unsigned int *)*piVar9;
    piVar2 = (int *)piVar9[1];
    if (puVar6 != (unsigned int *)0x0) {
      (**(int (***)())*puVar6)(puVar6,1);
      *piVar9 = 0;
    }
    fn_82522ED8(piVar9);
    piVar9 = piVar2;
  }
  param_1[6] = 0;
  piVar9 = (int *)param_1[7];
  while (piVar9 != (int *)0x0) {
    puVar6 = (unsigned int *)*piVar9;
    piVar2 = (int *)piVar9[1];
    if (puVar6 != (unsigned int *)0x0) {
      (**(int (***)())*puVar6)(puVar6,1);
      *piVar9 = 0;
    }
    fn_82522ED8(piVar9);
    piVar9 = piVar2;
  }
  param_1[7] = 0;
  piVar9 = (int *)param_1[8];
  while (piVar9 != (int *)0x0) {
    puVar6 = (unsigned int *)*piVar9;
    piVar2 = (int *)piVar9[1];
    if (puVar6 != (unsigned int *)0x0) {
      (**(int (***)())*puVar6)(puVar6,1);
      *piVar9 = 0;
    }
    fn_82522ED8(piVar9);
    piVar9 = piVar2;
  }
  param_1[8] = 0;
  piVar9 = (int *)param_1[9];
  while (piVar9 != (int *)0x0) {
    puVar6 = (unsigned int *)*piVar9;
    piVar2 = (int *)piVar9[1];
    if (puVar6 != (unsigned int *)0x0) {
      (**(int (***)())*puVar6)(puVar6,1);
      *piVar9 = 0;
    }
    fn_82522ED8(piVar9);
    piVar9 = piVar2;
  }
  puVar6 = (unsigned int *)param_1[0x24];
  param_1[9] = 0;
  if (puVar6 != (unsigned int *)0x0) {
    (**(int (***)())*puVar6)(puVar6,1);
    param_1[0x24] = 0;
  }
  puVar6 = (unsigned int *)param_1[0x29];
  if (puVar6 != (unsigned int *)0x0) {
    (**(int (***)())*puVar6)(puVar6,1);
    param_1[0x29] = 0;
  }
  puVar6 = (unsigned int *)param_1[0x22];
  if (puVar6 != (unsigned int *)0x0) {
    (**(int (***)())*puVar6)(puVar6,1);
    param_1[0x22] = 0;
  }
  puVar6 = (unsigned int *)param_1[0x20];
  if (puVar6 != (unsigned int *)0x0) {
    (**(int (***)())*puVar6)(puVar6,1);
    param_1[0x20] = 0;
  }
  puVar6 = (unsigned int *)param_1[0x21];
  if (puVar6 != (unsigned int *)0x0) {
    (**(int (***)())*puVar6)(puVar6,1);
    param_1[0x21] = 0;
  }
  puVar6 = (unsigned int *)param_1[0x23];
  if (puVar6 != (unsigned int *)0x0) {
    (**(int (***)())*puVar6)(puVar6,1);
    param_1[0x23] = 0;
  }
  puVar6 = (unsigned int *)param_1[0x25];
  if (puVar6 != (unsigned int *)0x0) {
    (**(int (***)())*puVar6)(puVar6,1);
    param_1[0x25] = 0;
  }
  puVar6 = (unsigned int *)param_1[0x26];
  if (puVar6 != (unsigned int *)0x0) {
    (**(int (***)())*puVar6)(puVar6,1);
    param_1[0x26] = 0;
  }
  puVar6 = (unsigned int *)param_1[0x27];
  if (puVar6 != (unsigned int *)0x0) {
    (**(int (***)())*puVar6)(puVar6,1);
    param_1[0x27] = 0;
  }
  puVar6 = (unsigned int *)param_1[0x28];
  if (puVar6 != (unsigned int *)0x0) {
    (**(int (***)())*puVar6)(puVar6,1);
    param_1[0x28] = 0;
  }
  puVar6 = (unsigned int *)param_1[0x2a];
  if (puVar6 != (unsigned int *)0x0) {
    (**(int (***)())*puVar6)(puVar6,1);
    param_1[0x2a] = 0;
  }
  uVar8 = 0;
  do {
    piVar9 = (int *)0x0;
    if (uVar8 == 0) {
      piVar9 = param_1 + 0x18;
    }
    else if (uVar8 == 1) {
      piVar9 = param_1 + 0x1c;
    }
    else if (uVar8 < 3) {
      piVar9 = param_1 + 0x1a;
    }
    else if (uVar8 == 3) {
      piVar9 = param_1 + 0x1e;
    }
    iVar4 = *piVar9;
    while (iVar4 != 0) {
      iVar3 = *(int *)(iVar4 + 0x1e4);
      if (*(int *)(iVar4 + 0x1b4) != 0) {
        if (*(char *)(iVar4 + 0x1a8) == '\0') {
          if (*(char *)(iVar4 + 0x1a7) == '\0') {
            fn_8251FA58();
          }
          else {
            fn_82522ED8();
          }
        }
        *(unsigned int *)(iVar4 + 0x1b4) = 0;
      }
      if ((uVar8 == 0) && (*(int *)(iVar4 + 0x1d0) != 0)) {
        fn_8265CA20();
        *(unsigned int *)(iVar4 + 0x1d0) = 0;
      }
      fn_82522ED8(iVar4);
      iVar4 = iVar3;
    }
    uVar8 = uVar8 + 1;
    *piVar9 = 0;
    piVar9[1] = 0;
  } while (uVar8 < 4);
  puVar5 = (unsigned int *)param_1[0x16];
  if (puVar5 != (unsigned int *)0x0) {
    bVar1 = false;
    uVar8 = *puVar5 & 0xf;
    if (uVar8 - 1 < 9) {
      if (uVar8 == 2) {
        if (*(unsigned int **)(lbl_8320A898 + 0x3144) == puVar5) goto LAB_82574e10;
      }
      else {
        if (uVar8 == 3) {
          puVar6 = (unsigned int *)(lbl_8320A898 + 0x31b0);
          lVar10 = 0x1a;
          do {
            if ((unsigned int *)*puVar6 == puVar5) {
              bVar1 = true;
            }
            puVar6 = puVar6 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        else if (uVar8 == 4) {
          bVar1 = *(unsigned int **)(lbl_8320A898 + 0x3148) == puVar5;
          if (*(unsigned int **)(lbl_8320A898 + 0x3158) == puVar5) {
            bVar1 = true;
          }
        }
        else {
          if (uVar8 == 5) {
            puVar7 = *(unsigned int **)(lbl_8320A898 + 0x2ed8);
          }
          else if (uVar8 == 6) {
            puVar7 = *(unsigned int **)(lbl_8320A898 + 0x3248);
          }
          else {
            if (uVar8 != 7) {
              if ((uVar8 == 8) || (uVar8 != 1)) {
                bVar1 = false;
              }
              else {
                puVar6 = (unsigned int *)(lbl_8320A898 + 0x315c);
                lVar10 = 0x10;
                do {
                  if ((unsigned int *)*puVar6 == puVar5) {
                    bVar1 = true;
                  }
                  puVar6 = puVar6 + 1;
                  lVar10 = lVar10 + -1;
                } while (lVar10 != 0);
              }
              goto LAB_82574e08;
            }
            puVar7 = *(unsigned int **)(lbl_8320A898 + 0x3244);
          }
          bVar1 = puVar5 == puVar7;
        }
LAB_82574e08:
        if (bVar1) {
LAB_82574e10:
          fn_82631920(lbl_8320A898,0);
        }
      }
    }
    fn_82645838(param_1[0x16]);
    fn_8262FEC8(param_1[0x16]);
    param_1[0x16] = 0;
  }
  puVar5 = (unsigned int *)param_1[0x17];
  if (puVar5 == (unsigned int *)0x0) goto LAB_82574f4c;
  bVar1 = false;
  uVar8 = *puVar5 & 0xf;
  if (uVar8 - 1 < 9) {
    if (uVar8 == 2) {
      if (*(unsigned int **)(lbl_8320A898 + 0x3144) == puVar5) goto LAB_82574f30;
    }
    else {
      if (uVar8 == 3) {
        puVar6 = (unsigned int *)(lbl_8320A898 + 0x31b0);
        lVar10 = 0x1a;
        do {
          if ((unsigned int *)*puVar6 == puVar5) {
            bVar1 = true;
          }
          puVar6 = puVar6 + 1;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      else if (uVar8 == 4) {
        bVar1 = *(unsigned int **)(lbl_8320A898 + 0x3148) == puVar5;
        if (*(unsigned int **)(lbl_8320A898 + 0x3158) == puVar5) {
          bVar1 = true;
        }
      }
      else {
        if (uVar8 == 5) {
          puVar7 = *(unsigned int **)(lbl_8320A898 + 0x2ed8);
        }
        else if (uVar8 == 6) {
          puVar7 = *(unsigned int **)(lbl_8320A898 + 0x3248);
        }
        else {
          if (uVar8 != 7) {
            if ((uVar8 == 8) || (uVar8 != 1)) {
              bVar1 = false;
            }
            else {
              puVar6 = (unsigned int *)(lbl_8320A898 + 0x315c);
              lVar10 = 0x10;
              do {
                if ((unsigned int *)*puVar6 == puVar5) {
                  bVar1 = true;
                }
                puVar6 = puVar6 + 1;
                lVar10 = lVar10 + -1;
              } while (lVar10 != 0);
            }
            goto LAB_82574f28;
          }
          puVar7 = *(unsigned int **)(lbl_8320A898 + 0x3244);
        }
        bVar1 = puVar5 == puVar7;
      }
LAB_82574f28:
      if (bVar1) {
LAB_82574f30:
                    /* WARNING: Subroutine does not return */
        fn_82631578(lbl_8320A898,0);
      }
    }
  }
  fn_82645838(param_1[0x17]);
  fn_8262FEC8(param_1[0x17]);
  param_1[0x17] = 0;
LAB_82574f4c:
  if (lbl_832810E4 != (int (**)())0x0) {
    (*lbl_832810E4)(*param_1,param_1);
  }
  return;
}

