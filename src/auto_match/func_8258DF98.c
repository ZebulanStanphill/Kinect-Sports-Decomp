extern int fn_82230300();
extern int fn_822CA028();
extern int fn_822CA090();
extern int fn_8265CA20();
extern int fn_82F622E0();


unsigned int * fn_8258DF98(unsigned int *param_1,int param_2,int *param_3)

{
  unsigned char uVar1;
  int *piVar2;
  unsigned int *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  if (*(char *)((int)param_3 + 0x31) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821963f4);
  }
  piVar7 = (int *)param_3[2];
  piVar6 = param_3 + 2;
  if (*(char *)((int)piVar7 + 0x31) == '\0') {
    piVar8 = (int *)*piVar7;
    while (piVar5 = piVar8, *(char *)((int)piVar5 + 0x31) == '\0') {
      piVar7 = piVar5;
      piVar8 = (int *)*piVar5;
    }
  }
  else {
    piVar8 = (int *)param_3[1];
    piVar5 = param_3;
    while ((piVar7 = piVar8, *(char *)((int)piVar7 + 0x31) == '\0' && (piVar5 == (int *)piVar7[2])))
    {
      piVar5 = piVar7;
      piVar8 = (int *)piVar7[1];
    }
  }
  piVar8 = (int *)*param_3;
  if (*(char *)((int)piVar8 + 0x31) == '\0') {
    piVar5 = piVar8;
    if ((*(char *)(*piVar6 + 0x31) == '\0') && (piVar5 = (int *)piVar7[2], piVar7 != param_3)) {
      piVar8[1] = (int)piVar7;
      *piVar7 = *param_3;
      piVar8 = piVar7;
      if (piVar7 != (int *)*piVar6) {
        piVar8 = (int *)piVar7[1];
        if (*(char *)((int)piVar5 + 0x31) == '\0') {
          piVar5[1] = (int)piVar8;
        }
        *piVar8 = (int)piVar5;
        piVar7[2] = *piVar6;
        *(int **)(*piVar6 + 4) = piVar7;
      }
      if (*(int **)(*(int *)(param_2 + 4) + 4) == param_3) {
        *(int **)(*(int *)(param_2 + 4) + 4) = piVar7;
      }
      else {
        puVar3 = (unsigned int *)param_3[1];
        if ((int *)*puVar3 == param_3) {
          *puVar3 = piVar7;
        }
        else {
          puVar3[2] = piVar7;
        }
      }
      piVar7[1] = param_3[1];
      uVar1 = *(unsigned char *)(piVar7 + 0xc);
      *(unsigned char *)(piVar7 + 0xc) = *(unsigned char *)(param_3 + 0xc);
      *(unsigned char *)(param_3 + 0xc) = uVar1;
      goto LAB_8258e1d0;
    }
  }
  else {
    piVar5 = (int *)*piVar6;
  }
  piVar8 = (int *)param_3[1];
  if (*(char *)((int)piVar5 + 0x31) == '\0') {
    piVar5[1] = (int)piVar8;
  }
  if (*(int **)(*(int *)(param_2 + 4) + 4) == param_3) {
    *(int **)(*(int *)(param_2 + 4) + 4) = piVar5;
  }
  else if ((int *)*piVar8 == param_3) {
    *piVar8 = (int)piVar5;
  }
  else {
    piVar8[2] = (int)piVar5;
  }
  if ((int *)**(unsigned int **)(param_2 + 4) == param_3) {
    piVar6 = piVar8;
    if (*(char *)((int)piVar5 + 0x31) == '\0') {
      piVar4 = (int *)*piVar5;
      piVar6 = piVar5;
      while (piVar2 = piVar4, *(char *)((int)piVar2 + 0x31) == '\0') {
        piVar6 = piVar2;
        piVar4 = (int *)*piVar2;
      }
    }
    **(unsigned int **)(param_2 + 4) = piVar6;
  }
  if (*(int **)(*(int *)(param_2 + 4) + 8) == param_3) {
    piVar6 = piVar8;
    if (*(char *)((int)piVar5 + 0x31) == '\0') {
      piVar4 = (int *)piVar5[2];
      piVar6 = piVar5;
      while (piVar2 = piVar4, *(char *)((int)piVar2 + 0x31) == '\0') {
        piVar6 = piVar2;
        piVar4 = (int *)piVar2[2];
      }
    }
    *(int **)(*(int *)(param_2 + 4) + 8) = piVar6;
  }
LAB_8258e1d0:
  if (*(char *)(param_3 + 0xc) == '\x01') {
    if (piVar5 != *(int **)(*(int *)(param_2 + 4) + 4)) {
      do {
        piVar6 = piVar8;
        if (*(char *)(piVar5 + 0xc) != '\x01') break;
        piVar8 = (int *)*piVar6;
        if (piVar5 == piVar8) {
          piVar8 = (int *)piVar6[2];
          if (*(char *)(piVar8 + 0xc) == '\0') {
            *(unsigned char *)(piVar8 + 0xc) = 1;
            *(unsigned char *)(piVar6 + 0xc) = 0;
            fn_822CA028(param_2,piVar6);
            piVar8 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar8 + 0x31) == '\0') {
            if ((*(char *)(*piVar8 + 0x30) != '\x01') || (*(char *)(piVar8[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar8[2] + 0x30) == '\x01') {
                *(unsigned char *)(*piVar8 + 0x30) = 1;
                *(unsigned char *)(piVar8 + 0xc) = 0;
                fn_822CA090(param_2,piVar8);
                piVar8 = (int *)piVar6[2];
              }
              *(unsigned char *)(piVar8 + 0xc) = *(unsigned char *)(piVar6 + 0xc);
              *(unsigned char *)(piVar6 + 0xc) = 1;
              *(unsigned char *)(piVar8[2] + 0x30) = 1;
              fn_822CA028(param_2,piVar6);
              break;
            }
LAB_8258e2fc:
            *(unsigned char *)(piVar8 + 0xc) = 0;
          }
        }
        else {
          if (*(char *)(piVar8 + 0xc) == '\0') {
            *(unsigned char *)(piVar8 + 0xc) = 1;
            *(unsigned char *)(piVar6 + 0xc) = 0;
            fn_822CA090(param_2,piVar6);
            piVar8 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar8 + 0x31) == '\0') {
            if ((*(char *)(piVar8[2] + 0x30) == '\x01') && (*(char *)(*piVar8 + 0x30) == '\x01'))
            goto LAB_8258e2fc;
            if (*(char *)(*piVar8 + 0x30) == '\x01') {
              *(unsigned char *)(piVar8[2] + 0x30) = 1;
              *(unsigned char *)(piVar8 + 0xc) = 0;
              fn_822CA028(param_2,piVar8);
              piVar8 = (int *)*piVar6;
            }
            *(unsigned char *)(piVar8 + 0xc) = *(unsigned char *)(piVar6 + 0xc);
            *(unsigned char *)(piVar6 + 0xc) = 1;
            *(unsigned char *)(*piVar8 + 0x30) = 1;
            fn_822CA090(param_2,piVar6);
            break;
          }
        }
        piVar8 = (int *)piVar6[1];
        piVar5 = piVar6;
      } while (piVar6 != *(int **)(*(int *)(param_2 + 4) + 4));
    }
    *(unsigned char *)(piVar5 + 0xc) = 1;
  }
  fn_82230300(param_3 + 3,1,0);
  fn_8265CA20(param_3);
  if (*(int *)(param_2 + 8) != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
  }
  *param_1 = piVar7;
  return param_1;
}

