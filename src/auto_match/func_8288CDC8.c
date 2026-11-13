typedef unsigned char bool;
extern int fn_8265CA20();
extern int fn_8288B4F8();
extern int fn_8288B838();
extern int fn_828C0218();
extern int fn_82F622E0();
extern unsigned int stack0x00000024;


unsigned int * fn_8288CDC8(unsigned int *param_1,int param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  unsigned char uVar3;
  int *piVar4;
  int iVar5;
  unsigned int *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piStack00000024;
  
  piStack00000024 = param_3;
  if (*(char *)((int)param_3 + 0x21) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821963f4);
  }
  fn_8288B4F8(&stack0x00000024);
  piVar8 = piStack00000024;
  piVar11 = (int *)*param_3;
  if (*(char *)((int)piVar11 + 0x21) == '\0') {
    piVar10 = piVar11;
    if ((*(char *)(param_3[2] + 0x21) == '\0') &&
       (piVar10 = (int *)piStack00000024[2], piStack00000024 != param_3)) {
      piVar11[1] = (int)piStack00000024;
      *piStack00000024 = *param_3;
      piVar11 = piStack00000024;
      if (piStack00000024 != (int *)param_3[2]) {
        piVar11 = (int *)piStack00000024[1];
        if (*(char *)((int)piVar10 + 0x21) == '\0') {
          piVar10[1] = (int)piVar11;
        }
        *piVar11 = (int)piVar10;
        piStack00000024[2] = param_3[2];
        *(int **)(param_3[2] + 4) = piStack00000024;
      }
      if (*(int **)(*(int *)(param_2 + 4) + 4) == param_3) {
        *(int **)(*(int *)(param_2 + 4) + 4) = piStack00000024;
      }
      else {
        puVar6 = (unsigned int *)param_3[1];
        if ((int *)*puVar6 == param_3) {
          *puVar6 = piStack00000024;
        }
        else {
          puVar6[2] = piStack00000024;
        }
      }
      piStack00000024[1] = param_3[1];
      uVar3 = *(unsigned char *)(piStack00000024 + 8);
      *(unsigned char *)(piStack00000024 + 8) = *(unsigned char *)(param_3 + 8);
      *(unsigned char *)(param_3 + 8) = uVar3;
      goto LAB_8288cfc4;
    }
  }
  else {
    piVar10 = (int *)param_3[2];
  }
  piVar11 = (int *)param_3[1];
  if (*(char *)((int)piVar10 + 0x21) == '\0') {
    piVar10[1] = (int)piVar11;
  }
  if (*(int **)(*(int *)(param_2 + 4) + 4) == param_3) {
    *(int **)(*(int *)(param_2 + 4) + 4) = piVar10;
  }
  else if ((int *)*piVar11 == param_3) {
    *piVar11 = (int)piVar10;
  }
  else {
    piVar11[2] = (int)piVar10;
  }
  if ((int *)**(unsigned int **)(param_2 + 4) == param_3) {
    piVar9 = piVar11;
    if (*(char *)((int)piVar10 + 0x21) == '\0') {
      cVar2 = *(char *)(*piVar10 + 0x21);
      piVar4 = (int *)*piVar10;
      piVar9 = piVar10;
      while (piVar7 = piVar4, cVar2 == '\0') {
        piVar4 = (int *)*piVar7;
        cVar2 = *(char *)((int)piVar4 + 0x21);
        piVar9 = piVar7;
      }
    }
    **(unsigned int **)(param_2 + 4) = piVar9;
  }
  iVar5 = *(int *)(param_2 + 4);
  if (*(int **)(iVar5 + 8) == param_3) {
    if (*(char *)((int)piVar10 + 0x21) == '\0') {
      cVar2 = *(char *)(piVar10[2] + 0x21);
      piVar9 = (int *)piVar10[2];
      piVar4 = piVar10;
      while (piVar7 = piVar9, cVar2 == '\0') {
        piVar9 = (int *)piVar7[2];
        cVar2 = *(char *)((int)piVar9 + 0x21);
        piVar4 = piVar7;
      }
      *(int **)(iVar5 + 8) = piVar4;
    }
    else {
      *(int **)(iVar5 + 8) = piVar11;
    }
  }
LAB_8288cfc4:
  if (*(char *)(param_3 + 8) == '\x01') {
    if (piVar10 != *(int **)(*(int *)(param_2 + 4) + 4)) {
      do {
        if (*(char *)(piVar10 + 8) != '\x01') break;
        piVar9 = (int *)*piVar11;
        if (piVar10 == piVar9) {
          piVar9 = (int *)piVar11[2];
          if (*(char *)(piVar9 + 8) == '\0') {
            *(unsigned char *)(piVar9 + 8) = 1;
            *(unsigned char *)(piVar11 + 8) = 0;
            fn_828C0218(param_2,piVar11);
            piVar9 = (int *)piVar11[2];
          }
          if (*(char *)((int)piVar9 + 0x21) == '\0') {
            if ((*(char *)(*piVar9 + 0x20) != '\x01') || (*(char *)(piVar9[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar9[2] + 0x20) == '\x01') {
                *(unsigned char *)(*piVar9 + 0x20) = 1;
                *(unsigned char *)(piVar9 + 8) = 0;
                fn_8288B838(param_2,piVar9);
                piVar9 = (int *)piVar11[2];
              }
              *(unsigned char *)(piVar9 + 8) = *(unsigned char *)(piVar11 + 8);
              *(unsigned char *)(piVar11 + 8) = 1;
              *(unsigned char *)(piVar9[2] + 0x20) = 1;
              fn_828C0218(param_2,piVar11);
              break;
            }
LAB_8288d0f0:
            *(unsigned char *)(piVar9 + 8) = 0;
          }
        }
        else {
          if (*(char *)(piVar9 + 8) == '\0') {
            *(unsigned char *)(piVar9 + 8) = 1;
            *(unsigned char *)(piVar11 + 8) = 0;
            fn_8288B838(param_2,piVar11);
            piVar9 = (int *)*piVar11;
          }
          if (*(char *)((int)piVar9 + 0x21) == '\0') {
            if ((*(char *)(piVar9[2] + 0x20) == '\x01') && (*(char *)(*piVar9 + 0x20) == '\x01'))
            goto LAB_8288d0f0;
            if (*(char *)(*piVar9 + 0x20) == '\x01') {
              *(unsigned char *)(piVar9[2] + 0x20) = 1;
              *(unsigned char *)(piVar9 + 8) = 0;
              fn_828C0218(param_2,piVar9);
              piVar9 = (int *)*piVar11;
            }
            *(unsigned char *)(piVar9 + 8) = *(unsigned char *)(piVar11 + 8);
            *(unsigned char *)(piVar11 + 8) = 1;
            *(unsigned char *)(*piVar9 + 0x20) = 1;
            fn_8288B838(param_2,piVar11);
            break;
          }
        }
        bVar1 = piVar11 != *(int **)(*(int *)(param_2 + 4) + 4);
        piVar10 = piVar11;
        piVar11 = (int *)piVar11[1];
      } while (bVar1);
    }
    *(unsigned char *)(piVar10 + 8) = 1;
  }
  fn_8265CA20(param_3);
  if (*(int *)(param_2 + 8) != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
  }
  *param_1 = piVar8;
  return param_1;
}

