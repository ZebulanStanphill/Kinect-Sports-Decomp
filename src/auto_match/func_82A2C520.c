typedef unsigned char bool;
extern int fn_82A2C3E8();
extern int fn_82A2C4A8();


int * fn_82A2C520(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (((*(unsigned char *)((int)param_1 + 0x35) & 4) == 0) &&
     ((bool)(*(unsigned char *)((int)param_1 + 0x35) & 1) != (param_2 != 0))) {
    piVar5 = (int *)param_1[3];
    if (piVar5 == (int *)0x0) {
      piVar2 = (int *)fn_82A2C3E8(param_1,param_2);
      piVar5 = param_1;
      piVar4 = (int *)0x0;
      if (piVar2 != (int *)0x0) {
        do {
          piVar3 = piVar2;
          if (piVar4 != (int *)0x0) {
            piVar4[2] = (int)piVar3;
            iVar1 = *piVar3;
            piVar4[0x13] = (int)piVar3;
            piVar4[0x12] = iVar1;
            *(int **)(iVar1 + 4) = piVar4 + 0x12;
            *piVar3 = (int)(piVar4 + 0x12);
          }
          piVar5 = (int *)piVar5[2];
          if ((*(unsigned char *)((int)piVar5 + 0x35) & 4) != 0) {
            piVar2 = piVar5;
            piVar4 = piVar5;
            if ((param_2 & 0xffffffff) == 0) {
              piVar4 = piVar5 + 0x10;
            }
LAB_82a2c618:
            piVar3[2] = (int)piVar2;
            piVar2[4] = piVar2[4] + 1;
            iVar1 = *piVar4;
            piVar3[0x12] = iVar1;
            piVar3[0x13] = (int)piVar4;
            *(int **)(iVar1 + 4) = piVar3 + 0x12;
            *piVar4 = (int)(piVar3 + 0x12);
            return (int *)param_1[3];
          }
          piVar2 = (int *)piVar5[3];
          piVar4 = piVar2;
          if (piVar2 != (int *)0x0) goto LAB_82a2c618;
          piVar2 = (int *)fn_82A2C3E8(piVar5,param_2);
          piVar4 = piVar3;
        } while (piVar2 != (int *)0x0);
        if (piVar5 != param_1) {
          fn_82A2C4A8(param_1[3]);
        }
      }
      param_1 = (int *)0x0;
    }
    else {
      piVar5[4] = piVar5[4] + 1;
      param_1 = piVar5;
    }
  }
  else {
    param_1[4] = param_1[4] + 1;
  }
  return param_1;
}

