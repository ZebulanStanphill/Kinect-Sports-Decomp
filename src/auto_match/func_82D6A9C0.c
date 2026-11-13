int fn_82D6A9C0(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = (int *)*param_1;
  if (piVar1[3] == 0x1e) {
    piVar4 = (int *)param_2[3];
    piVar2 = param_2;
    while (piVar5 = piVar4, piVar5 != (int *)0x0) {
      piVar2 = piVar5;
      piVar4 = (int *)piVar5[3];
    }
    piVar5 = (int *)param_1[3];
    piVar4 = param_1;
    while (piVar3 = piVar5, piVar3 != (int *)0x0) {
      piVar4 = piVar3;
      piVar5 = (int *)piVar3[3];
    }
    (*(int (**)())(*piVar1 + 0x2c))(piVar1,piVar4,piVar2,param_3);
  }
  piVar1 = (int *)*param_2;
  if (piVar1[3] == 0x1e) {
    piVar5 = param_1;
    piVar2 = (int *)param_1[3];
    while (piVar4 = piVar2, piVar4 != (int *)0x0) {
      piVar5 = piVar4;
      piVar2 = (int *)piVar4[3];
    }
    piVar2 = (int *)param_2[3];
    piVar3 = param_2;
    while (piVar4 = piVar2, piVar4 != (int *)0x0) {
      piVar3 = piVar4;
      piVar2 = (int *)piVar4[3];
    }
    (*(int (**)())(*piVar1 + 0x2c))(piVar1,piVar3,piVar5,param_3);
  }
  return 0;
}

