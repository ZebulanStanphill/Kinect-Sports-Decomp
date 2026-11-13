extern int fn_82230300();
extern int fn_82359C18();
extern int fn_825159C8();
extern int fn_82518EB0();
extern int fn_82518F18();
extern int fn_8265CA20();
extern int fn_82F622E0();
extern unsigned int stack0x00000024;


unsigned int * fn_82518A78(unsigned int *param_1,int param_2,int *param_3)

{
  unsigned char uVar1;
  int *piVar2;
  unsigned int *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piStack00000024;
  
  piStack00000024 = param_3;
  if (*(char *)((int)param_3 + 0x69) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821963f4);
  }
  fn_825159C8(&stack0x00000024);
  piVar4 = piStack00000024;
  piVar7 = (int *)*param_3;
  if (*(char *)((int)piVar7 + 0x69) == '\0') {
    piVar8 = piVar7;
    if ((*(char *)(param_3[2] + 0x69) == '\0') &&
       (piVar8 = (int *)piStack00000024[2], piStack00000024 != param_3)) {
      piVar7[1] = (int)piStack00000024;
      *piStack00000024 = *param_3;
      piVar7 = piStack00000024;
      if (piStack00000024 != (int *)param_3[2]) {
        piVar7 = (int *)piStack00000024[1];
        if (*(char *)((int)piVar8 + 0x69) == '\0') {
          piVar8[1] = (int)piVar7;
        }
        *piVar7 = (int)piVar8;
        piStack00000024[2] = param_3[2];
        *(int **)(param_3[2] + 4) = piStack00000024;
      }
      if (*(int **)(*(int *)(param_2 + 4) + 4) == param_3) {
        *(int **)(*(int *)(param_2 + 4) + 4) = piStack00000024;
      }
      else {
        puVar3 = (unsigned int *)param_3[1];
        if ((int *)*puVar3 == param_3) {
          *puVar3 = piStack00000024;
        }
        else {
          puVar3[2] = piStack00000024;
        }
      }
      piStack00000024[1] = param_3[1];
      uVar1 = *(unsigned char *)(piStack00000024 + 0x1a);
      *(unsigned char *)(piStack00000024 + 0x1a) = *(unsigned char *)(param_3 + 0x1a);
      *(unsigned char *)(param_3 + 0x1a) = uVar1;
      goto LAB_82518c60;
    }
  }
  else {
    piVar8 = (int *)param_3[2];
  }
  piVar7 = (int *)param_3[1];
  if (*(char *)((int)piVar8 + 0x69) == '\0') {
    piVar8[1] = (int)piVar7;
  }
  if (*(int **)(*(int *)(param_2 + 4) + 4) == param_3) {
    *(int **)(*(int *)(param_2 + 4) + 4) = piVar8;
  }
  else if ((int *)*piVar7 == param_3) {
    *piVar7 = (int)piVar8;
  }
  else {
    piVar7[2] = (int)piVar8;
  }
  if ((int *)**(unsigned int **)(param_2 + 4) == param_3) {
    piVar6 = piVar7;
    if (*(char *)((int)piVar8 + 0x69) == '\0') {
      piVar5 = (int *)*piVar8;
      piVar6 = piVar8;
      while (piVar2 = piVar5, *(char *)((int)piVar2 + 0x69) == '\0') {
        piVar6 = piVar2;
        piVar5 = (int *)*piVar2;
      }
    }
    **(unsigned int **)(param_2 + 4) = piVar6;
  }
  if (*(int **)(*(int *)(param_2 + 4) + 8) == param_3) {
    piVar6 = piVar7;
    if (*(char *)((int)piVar8 + 0x69) == '\0') {
      piVar5 = (int *)piVar8[2];
      piVar6 = piVar8;
      while (piVar2 = piVar5, *(char *)((int)piVar2 + 0x69) == '\0') {
        piVar6 = piVar2;
        piVar5 = (int *)piVar2[2];
      }
    }
    *(int **)(*(int *)(param_2 + 4) + 8) = piVar6;
  }
LAB_82518c60:
  if (*(char *)(param_3 + 0x1a) == '\x01') {
    if (piVar8 != *(int **)(*(int *)(param_2 + 4) + 4)) {
      do {
        piVar6 = piVar7;
        if (*(char *)(piVar8 + 0x1a) != '\x01') break;
        piVar7 = (int *)*piVar6;
        if (piVar8 == piVar7) {
          piVar7 = (int *)piVar6[2];
          if (*(char *)(piVar7 + 0x1a) == '\0') {
            *(unsigned char *)(piVar7 + 0x1a) = 1;
            *(unsigned char *)(piVar6 + 0x1a) = 0;
            fn_82518EB0(param_2,piVar6);
            piVar7 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar7 + 0x69) == '\0') {
            if ((*(char *)(*piVar7 + 0x68) != '\x01') || (*(char *)(piVar7[2] + 0x68) != '\x01')) {
              if (*(char *)(piVar7[2] + 0x68) == '\x01') {
                *(unsigned char *)(*piVar7 + 0x68) = 1;
                *(unsigned char *)(piVar7 + 0x1a) = 0;
                fn_82518F18(param_2,piVar7);
                piVar7 = (int *)piVar6[2];
              }
              *(unsigned char *)(piVar7 + 0x1a) = *(unsigned char *)(piVar6 + 0x1a);
              *(unsigned char *)(piVar6 + 0x1a) = 1;
              *(unsigned char *)(piVar7[2] + 0x68) = 1;
              fn_82518EB0(param_2,piVar6);
              break;
            }
LAB_82518d8c:
            *(unsigned char *)(piVar7 + 0x1a) = 0;
          }
        }
        else {
          if (*(char *)(piVar7 + 0x1a) == '\0') {
            *(unsigned char *)(piVar7 + 0x1a) = 1;
            *(unsigned char *)(piVar6 + 0x1a) = 0;
            fn_82518F18(param_2,piVar6);
            piVar7 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar7 + 0x69) == '\0') {
            if ((*(char *)(piVar7[2] + 0x68) == '\x01') && (*(char *)(*piVar7 + 0x68) == '\x01'))
            goto LAB_82518d8c;
            if (*(char *)(*piVar7 + 0x68) == '\x01') {
              *(unsigned char *)(piVar7[2] + 0x68) = 1;
              *(unsigned char *)(piVar7 + 0x1a) = 0;
              fn_82518EB0(param_2,piVar7);
              piVar7 = (int *)*piVar6;
            }
            *(unsigned char *)(piVar7 + 0x1a) = *(unsigned char *)(piVar6 + 0x1a);
            *(unsigned char *)(piVar6 + 0x1a) = 1;
            *(unsigned char *)(*piVar7 + 0x68) = 1;
            fn_82518F18(param_2,piVar6);
            break;
          }
        }
        piVar7 = (int *)piVar6[1];
        piVar8 = piVar6;
      } while (piVar6 != *(int **)(*(int *)(param_2 + 4) + 4));
    }
    *(unsigned char *)(piVar8 + 0x1a) = 1;
  }
  fn_82359C18(param_3 + 0x14);
  fn_82230300(param_3 + 6,1,0);
  fn_8265CA20(param_3);
  if (*(int *)(param_2 + 8) != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
  }
  *param_1 = piVar4;
  return param_1;
}

