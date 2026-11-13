extern int fn_8265CA20();
extern int fn_8284A128();
extern int fn_8284A328();
extern int fn_8284A4E8();
extern int fn_8284A910();
extern int fn_82BA02A8();
extern int fn_82F622E0();
extern unsigned int iStack0000001c;
extern unsigned int stack0x00000024;


unsigned int * fn_8284ADC8(unsigned int *param_1,int param_2,int *param_3)

{
  unsigned char uVar1;
  unsigned int *puStack00000014;
  int iStack0000001c;
  int *piStack00000024;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int *piStack_38;
  int *piStack_30;
  int *piStack_14;
  int *piStack_10;
  
  puStack00000014 = param_1;
  iStack0000001c = param_2;
  piStack00000024 = param_3;
  if (*(char *)((int)param_3 + 0x2d) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821963f4);
  }
  fn_8284A128(&stack0x00000024);
  piStack_48 = param_3;
  if (*(char *)(*param_3 + 0x2d) == '\0') {
    if (*(char *)(param_3[2] + 0x2d) == '\0') {
      piStack_48 = piStack00000024;
      piStack_4c = (int *)piStack00000024[2];
    }
    else {
      piStack_4c = (int *)*param_3;
    }
  }
  else {
    piStack_4c = (int *)param_3[2];
  }
  if (piStack_48 == param_3) {
    piStack_44 = (int *)param_3[1];
    if (*(char *)((int)piStack_4c + 0x2d) == '\0') {
      piStack_4c[1] = (int)piStack_44;
    }
    if (*(int **)(*(int *)(iStack0000001c + 4) + 4) == param_3) {
      *(int **)(*(int *)(iStack0000001c + 4) + 4) = piStack_4c;
    }
    else if ((int *)*piStack_44 == param_3) {
      *piStack_44 = (int)piStack_4c;
    }
    else {
      piStack_44[2] = (int)piStack_4c;
    }
    if ((int *)**(unsigned int **)(iStack0000001c + 4) == param_3) {
      piStack_14 = piStack_44;
      if (*(char *)((int)piStack_4c + 0x2d) == '\0') {
        for (piStack_38 = piStack_4c; *(char *)(*piStack_38 + 0x2d) == '\0';
            piStack_38 = (int *)*piStack_38) {
        }
        piStack_14 = piStack_38;
      }
      **(unsigned int **)(iStack0000001c + 4) = piStack_14;
    }
    if (*(int **)(*(int *)(iStack0000001c + 4) + 8) == param_3) {
      piStack_10 = piStack_44;
      if (*(char *)((int)piStack_4c + 0x2d) == '\0') {
        piStack_30 = piStack_4c;
        while (*(char *)(piStack_30[2] + 0x2d) == '\0') {
          piStack_30 = (int *)piStack_30[2];
        }
        piStack_10 = piStack_30;
      }
      *(int **)(*(int *)(iStack0000001c + 4) + 8) = piStack_10;
    }
  }
  else {
    *(int **)(*param_3 + 4) = piStack_48;
    *piStack_48 = *param_3;
    if (piStack_48 == (int *)param_3[2]) {
      piStack_44 = piStack_48;
    }
    else {
      piStack_44 = (int *)piStack_48[1];
      if (*(char *)((int)piStack_4c + 0x2d) == '\0') {
        piStack_4c[1] = (int)piStack_44;
      }
      *piStack_44 = (int)piStack_4c;
      piStack_48[2] = param_3[2];
      *(int **)(param_3[2] + 4) = piStack_48;
    }
    if (*(int **)(*(int *)(iStack0000001c + 4) + 4) == param_3) {
      *(int **)(*(int *)(iStack0000001c + 4) + 4) = piStack_48;
    }
    else if (*(int **)param_3[1] == param_3) {
      *(int **)param_3[1] = piStack_48;
    }
    else {
      *(int **)(param_3[1] + 8) = piStack_48;
    }
    piStack_48[1] = param_3[1];
    uVar1 = *(unsigned char *)(piStack_48 + 0xb);
    *(unsigned char *)(piStack_48 + 0xb) = *(unsigned char *)(param_3 + 0xb);
    *(unsigned char *)(param_3 + 0xb) = uVar1;
  }
  if (*(char *)(param_3 + 0xb) != '\x01') {
LAB_8284b434:
    fn_8284A910(iStack0000001c + 0xd,param_3 + 3);
    fn_8265CA20(param_3);
    if (*(int *)(iStack0000001c + 8) != 0) {
      *(int *)(iStack0000001c + 8) = *(int *)(iStack0000001c + 8) + -1;
    }
    *puStack00000014 = piStack00000024;
    fn_82BA02A8(puStack00000014,iStack0000001c);
    return puStack00000014;
  }
LAB_8284b18c:
  if ((piStack_4c == *(int **)(*(int *)(iStack0000001c + 4) + 4)) ||
     (*(char *)(piStack_4c + 0xb) != '\x01')) goto LAB_8284b428;
  if (piStack_4c == (int *)*piStack_44) {
    piStack_48 = (int *)piStack_44[2];
    if (*(char *)(piStack_48 + 0xb) == '\0') {
      *(unsigned char *)(piStack_48 + 0xb) = 1;
      *(unsigned char *)(piStack_44 + 0xb) = 0;
      fn_8284A4E8(iStack0000001c,piStack_44);
      piStack_48 = (int *)piStack_44[2];
    }
    if (*(char *)((int)piStack_48 + 0x2d) == '\0') {
      if ((*(char *)(*piStack_48 + 0x2c) != '\x01') || (*(char *)(piStack_48[2] + 0x2c) != '\x01'))
      {
        if (*(char *)(piStack_48[2] + 0x2c) == '\x01') {
          *(unsigned char *)(*piStack_48 + 0x2c) = 1;
          *(unsigned char *)(piStack_48 + 0xb) = 0;
          fn_8284A328(iStack0000001c,piStack_48);
          piStack_48 = (int *)piStack_44[2];
        }
        *(unsigned char *)(piStack_48 + 0xb) = *(unsigned char *)(piStack_44 + 0xb);
        *(unsigned char *)(piStack_44 + 0xb) = 1;
        *(unsigned char *)(piStack_48[2] + 0x2c) = 1;
        fn_8284A4E8(iStack0000001c,piStack_44);
LAB_8284b428:
        *(unsigned char *)(piStack_4c + 0xb) = 1;
        goto LAB_8284b434;
      }
      *(unsigned char *)(piStack_48 + 0xb) = 0;
    }
  }
  else {
    piStack_48 = (int *)*piStack_44;
    if (*(char *)(piStack_48 + 0xb) == '\0') {
      *(unsigned char *)(piStack_48 + 0xb) = 1;
      *(unsigned char *)(piStack_44 + 0xb) = 0;
      fn_8284A328(iStack0000001c,piStack_44);
      piStack_48 = (int *)*piStack_44;
    }
    if (*(char *)((int)piStack_48 + 0x2d) == '\0') {
      if ((*(char *)(piStack_48[2] + 0x2c) != '\x01') || (*(char *)(*piStack_48 + 0x2c) != '\x01'))
      {
        if (*(char *)(*piStack_48 + 0x2c) == '\x01') {
          *(unsigned char *)(piStack_48[2] + 0x2c) = 1;
          *(unsigned char *)(piStack_48 + 0xb) = 0;
          fn_8284A4E8(iStack0000001c,piStack_48);
          piStack_48 = (int *)*piStack_44;
        }
        *(unsigned char *)(piStack_48 + 0xb) = *(unsigned char *)(piStack_44 + 0xb);
        *(unsigned char *)(piStack_44 + 0xb) = 1;
        *(unsigned char *)(*piStack_48 + 0x2c) = 1;
        fn_8284A328(iStack0000001c,piStack_44);
        goto LAB_8284b428;
      }
      *(unsigned char *)(piStack_48 + 0xb) = 0;
    }
  }
  piStack_4c = piStack_44;
  piStack_44 = (int *)piStack_44[1];
  goto LAB_8284b18c;
}

