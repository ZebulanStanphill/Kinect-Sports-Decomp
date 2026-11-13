extern unsigned int *auStack_50;
extern int fn_8224ED20();
extern int fn_8265CA20();
extern int fn_8288B4F8();
extern int fn_8288B838();
extern int fn_828C0218();
extern int fn_82F622E0();
extern unsigned int stack0x00000024;


unsigned int * fn_82896520(unsigned int *param_1,int param_2,int *param_3)

{
  char cVar1;
  unsigned char uVar2;
  int *piVar3;
  int iVar4;
  unsigned int *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piStack00000024;
  unsigned char auStack_50 [16];
  
  piStack00000024 = param_3;
  if (*(char *)((int)param_3 + 0x21) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821963f4);
  }
  fn_8288B4F8(&stack0x00000024);
  piVar7 = piStack00000024;
  piVar9 = (int *)*param_3;
  if (*(char *)((int)piVar9 + 0x21) == '\0') {
    piVar10 = piVar9;
    if ((*(char *)(param_3[2] + 0x21) == '\0') &&
       (piVar10 = (int *)piStack00000024[2], piStack00000024 != param_3)) {
      piVar9[1] = (int)piStack00000024;
      *piStack00000024 = *param_3;
      piVar9 = piStack00000024;
      if (piStack00000024 != (int *)param_3[2]) {
        piVar9 = (int *)piStack00000024[1];
        if (*(char *)((int)piVar10 + 0x21) == '\0') {
          piVar10[1] = (int)piVar9;
        }
        *piVar9 = (int)piVar10;
        piStack00000024[2] = param_3[2];
        *(int **)(param_3[2] + 4) = piStack00000024;
      }
      if (*(int **)(*(int *)(param_2 + 4) + 4) == param_3) {
        *(int **)(*(int *)(param_2 + 4) + 4) = piStack00000024;
      }
      else {
        puVar5 = (unsigned int *)param_3[1];
        if ((int *)*puVar5 == param_3) {
          *puVar5 = piStack00000024;
        }
        else {
          puVar5[2] = piStack00000024;
        }
      }
      piStack00000024[1] = param_3[1];
      uVar2 = *(unsigned char *)(piStack00000024 + 8);
      *(unsigned char *)(piStack00000024 + 8) = *(unsigned char *)(param_3 + 8);
      *(unsigned char *)(param_3 + 8) = uVar2;
      goto LAB_8289671c;
    }
  }
  else {
    piVar10 = (int *)param_3[2];
  }
  piVar9 = (int *)param_3[1];
  if (*(char *)((int)piVar10 + 0x21) == '\0') {
    piVar10[1] = (int)piVar9;
  }
  if (*(int **)(*(int *)(param_2 + 4) + 4) == param_3) {
    *(int **)(*(int *)(param_2 + 4) + 4) = piVar10;
  }
  else if ((int *)*piVar9 == param_3) {
    *piVar9 = (int)piVar10;
  }
  else {
    piVar9[2] = (int)piVar10;
  }
  if ((int *)**(unsigned int **)(param_2 + 4) == param_3) {
    piVar8 = piVar9;
    if (*(char *)((int)piVar10 + 0x21) == '\0') {
      cVar1 = *(char *)(*piVar10 + 0x21);
      piVar3 = (int *)*piVar10;
      piVar8 = piVar10;
      while (piVar6 = piVar3, cVar1 == '\0') {
        piVar3 = (int *)*piVar6;
        cVar1 = *(char *)((int)piVar3 + 0x21);
        piVar8 = piVar6;
      }
    }
    **(unsigned int **)(param_2 + 4) = piVar8;
  }
  iVar4 = *(int *)(param_2 + 4);
  if (*(int **)(iVar4 + 8) == param_3) {
    if (*(char *)((int)piVar10 + 0x21) == '\0') {
      cVar1 = *(char *)(piVar10[2] + 0x21);
      piVar8 = (int *)piVar10[2];
      piVar3 = piVar10;
      while (piVar6 = piVar8, cVar1 == '\0') {
        piVar8 = (int *)piVar6[2];
        cVar1 = *(char *)((int)piVar8 + 0x21);
        piVar3 = piVar6;
      }
      *(int **)(iVar4 + 8) = piVar3;
    }
    else {
      *(int **)(iVar4 + 8) = piVar9;
    }
  }
LAB_8289671c:
  if (*(char *)(param_3 + 8) == '\x01') {
    if (piVar10 != *(int **)(*(int *)(param_2 + 4) + 4)) {
      do {
        piVar8 = piVar9;
        if (*(char *)(piVar10 + 8) != '\x01') break;
        piVar9 = (int *)*piVar8;
        if (piVar10 == piVar9) {
          piVar9 = (int *)piVar8[2];
          if (*(char *)(piVar9 + 8) == '\0') {
            *(unsigned char *)(piVar9 + 8) = 1;
            *(unsigned char *)(piVar8 + 8) = 0;
            fn_828C0218(param_2,piVar8);
            piVar9 = (int *)piVar8[2];
          }
          if (*(char *)((int)piVar9 + 0x21) == '\0') {
            if ((*(char *)(*piVar9 + 0x20) != '\x01') || (*(char *)(piVar9[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar9[2] + 0x20) == '\x01') {
                *(unsigned char *)(*piVar9 + 0x20) = 1;
                *(unsigned char *)(piVar9 + 8) = 0;
                fn_8288B838(param_2,piVar9);
                piVar9 = (int *)piVar8[2];
              }
              *(unsigned char *)(piVar9 + 8) = *(unsigned char *)(piVar8 + 8);
              *(unsigned char *)(piVar8 + 8) = 1;
              *(unsigned char *)(piVar9[2] + 0x20) = 1;
              fn_828C0218(param_2,piVar8);
              break;
            }
LAB_82896848:
            *(unsigned char *)(piVar9 + 8) = 0;
          }
        }
        else {
          if (*(char *)(piVar9 + 8) == '\0') {
            *(unsigned char *)(piVar9 + 8) = 1;
            *(unsigned char *)(piVar8 + 8) = 0;
            fn_8288B838(param_2,piVar8);
            piVar9 = (int *)*piVar8;
          }
          if (*(char *)((int)piVar9 + 0x21) == '\0') {
            if ((*(char *)(piVar9[2] + 0x20) == '\x01') && (*(char *)(*piVar9 + 0x20) == '\x01'))
            goto LAB_82896848;
            if (*(char *)(*piVar9 + 0x20) == '\x01') {
              *(unsigned char *)(piVar9[2] + 0x20) = 1;
              *(unsigned char *)(piVar9 + 8) = 0;
              fn_828C0218(param_2,piVar9);
              piVar9 = (int *)*piVar8;
            }
            *(unsigned char *)(piVar9 + 8) = *(unsigned char *)(piVar8 + 8);
            *(unsigned char *)(piVar8 + 8) = 1;
            *(unsigned char *)(*piVar9 + 0x20) = 1;
            fn_8288B838(param_2,piVar8);
            break;
          }
        }
        piVar9 = (int *)piVar8[1];
        piVar10 = piVar8;
      } while (piVar8 != *(int **)(*(int *)(param_2 + 4) + 4));
    }
    *(unsigned char *)(piVar10 + 8) = 1;
  }
  fn_8224ED20(auStack_50,param_3 + 4,*(unsigned int *)param_3[5]);
  fn_8265CA20(param_3[5]);
  fn_8265CA20(param_3);
  if (*(int *)(param_2 + 8) != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
  }
  *param_1 = piVar7;
  return param_1;
}

