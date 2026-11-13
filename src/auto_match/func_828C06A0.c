typedef unsigned char bool;
extern int fn_825089A0();
extern int fn_8288B4F8();
extern int fn_8288B838();
extern int fn_828C0218();
extern int fn_82F622E0();
extern unsigned int stack0x00000024;


unsigned int * fn_828C06A0(unsigned int *param_1,int param_2,int *param_3)

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
  piVar9 = (int *)*param_3;
  if (*(char *)((int)piVar9 + 0x21) == '\0') {
    piVar11 = piVar9;
    if ((*(char *)(param_3[2] + 0x21) == '\0') &&
       (piVar11 = (int *)piStack00000024[2], piStack00000024 != param_3)) {
      piVar9[1] = (int)piStack00000024;
      *piStack00000024 = *param_3;
      piVar9 = piStack00000024;
      if (piStack00000024 != (int *)param_3[2]) {
        piVar9 = (int *)piStack00000024[1];
        if (*(char *)((int)piVar11 + 0x21) == '\0') {
          piVar11[1] = (int)piVar9;
        }
        *piVar9 = (int)piVar11;
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
      goto LAB_828c089c;
    }
  }
  else {
    piVar11 = (int *)param_3[2];
  }
  piVar9 = (int *)param_3[1];
  if (*(char *)((int)piVar11 + 0x21) == '\0') {
    piVar11[1] = (int)piVar9;
  }
  if (*(int **)(*(int *)(param_2 + 4) + 4) == param_3) {
    *(int **)(*(int *)(param_2 + 4) + 4) = piVar11;
  }
  else if ((int *)*piVar9 == param_3) {
    *piVar9 = (int)piVar11;
  }
  else {
    piVar9[2] = (int)piVar11;
  }
  if ((int *)**(unsigned int **)(param_2 + 4) == param_3) {
    piVar10 = piVar9;
    if (*(char *)((int)piVar11 + 0x21) == '\0') {
      cVar2 = *(char *)(*piVar11 + 0x21);
      piVar4 = (int *)*piVar11;
      piVar10 = piVar11;
      while (piVar7 = piVar4, cVar2 == '\0') {
        piVar4 = (int *)*piVar7;
        cVar2 = *(char *)((int)piVar4 + 0x21);
        piVar10 = piVar7;
      }
    }
    **(unsigned int **)(param_2 + 4) = piVar10;
  }
  iVar5 = *(int *)(param_2 + 4);
  if (*(int **)(iVar5 + 8) == param_3) {
    if (*(char *)((int)piVar11 + 0x21) == '\0') {
      cVar2 = *(char *)(piVar11[2] + 0x21);
      piVar10 = (int *)piVar11[2];
      piVar4 = piVar11;
      while (piVar7 = piVar10, cVar2 == '\0') {
        piVar10 = (int *)piVar7[2];
        cVar2 = *(char *)((int)piVar10 + 0x21);
        piVar4 = piVar7;
      }
      *(int **)(iVar5 + 8) = piVar4;
    }
    else {
      *(int **)(iVar5 + 8) = piVar9;
    }
  }
LAB_828c089c:
  if (*(char *)(param_3 + 8) == '\x01') {
    if (piVar11 != *(int **)(*(int *)(param_2 + 4) + 4)) {
      do {
        if (*(char *)(piVar11 + 8) != '\x01') break;
        piVar10 = (int *)*piVar9;
        if (piVar11 == piVar10) {
          piVar10 = (int *)piVar9[2];
          if (*(char *)(piVar10 + 8) == '\0') {
            *(unsigned char *)(piVar10 + 8) = 1;
            *(unsigned char *)(piVar9 + 8) = 0;
            fn_828C0218(param_2,piVar9);
            piVar10 = (int *)piVar9[2];
          }
          if (*(char *)((int)piVar10 + 0x21) == '\0') {
            if ((*(char *)(*piVar10 + 0x20) != '\x01') || (*(char *)(piVar10[2] + 0x20) != '\x01'))
            {
              if (*(char *)(piVar10[2] + 0x20) == '\x01') {
                *(unsigned char *)(*piVar10 + 0x20) = 1;
                *(unsigned char *)(piVar10 + 8) = 0;
                fn_8288B838(param_2,piVar10);
                piVar10 = (int *)piVar9[2];
              }
              *(unsigned char *)(piVar10 + 8) = *(unsigned char *)(piVar9 + 8);
              *(unsigned char *)(piVar9 + 8) = 1;
              *(unsigned char *)(piVar10[2] + 0x20) = 1;
              fn_828C0218(param_2,piVar9);
              break;
            }
LAB_828c09c8:
            *(unsigned char *)(piVar10 + 8) = 0;
          }
        }
        else {
          if (*(char *)(piVar10 + 8) == '\0') {
            *(unsigned char *)(piVar10 + 8) = 1;
            *(unsigned char *)(piVar9 + 8) = 0;
            fn_8288B838(param_2,piVar9);
            piVar10 = (int *)*piVar9;
          }
          if (*(char *)((int)piVar10 + 0x21) == '\0') {
            if ((*(char *)(piVar10[2] + 0x20) == '\x01') && (*(char *)(*piVar10 + 0x20) == '\x01'))
            goto LAB_828c09c8;
            if (*(char *)(*piVar10 + 0x20) == '\x01') {
              *(unsigned char *)(piVar10[2] + 0x20) = 1;
              *(unsigned char *)(piVar10 + 8) = 0;
              fn_828C0218(param_2,piVar10);
              piVar10 = (int *)*piVar9;
            }
            *(unsigned char *)(piVar10 + 8) = *(unsigned char *)(piVar9 + 8);
            *(unsigned char *)(piVar9 + 8) = 1;
            *(unsigned char *)(*piVar10 + 0x20) = 1;
            fn_8288B838(param_2,piVar9);
            break;
          }
        }
        bVar1 = piVar9 != *(int **)(*(int *)(param_2 + 4) + 4);
        piVar11 = piVar9;
        piVar9 = (int *)piVar9[1];
      } while (bVar1);
    }
    *(unsigned char *)(piVar11 + 8) = 1;
  }
  piVar9 = (int *)fn_825089A0();
  (**(int (***)())(*piVar9 + 0x28))(piVar9,param_3);
  if (*(int *)(param_2 + 8) != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
  }
  *param_1 = piVar8;
  return param_1;
}

