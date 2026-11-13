extern int fn_82E50BE8();
extern unsigned int iStack0000002c;
extern unsigned int stack0x0000002c;


unsigned __int64 fn_82EE5CC8(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  int *piVar5;
  int iStack0000002c;
  
  if (param_2 == (int *)0x0) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    iStack0000002c = param_4;
    if (param_4 == 0) {
      uVar3 = (**(int (***)())(*param_2 + 0x14))(param_2,0,&stack0x0000002c);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      iStack0000002c = iStack0000002c - param_3;
    }
    if (param_1[3] == 0) {
      piVar4 = (int *)fn_82E50BE8(0x14,0,0,0,0);
    }
    else {
      piVar4 = (int *)param_1[4];
      param_1[3] = param_1[3] + -1;
      iVar1 = *piVar4;
      piVar5 = (int *)piVar4[1];
      *piVar5 = iVar1;
      *(int **)(iVar1 + 4) = piVar5;
    }
    iVar1 = iStack0000002c;
    if (piVar4 == (int *)0x0) {
      uVar3 = 0xffffffff8007000e;
    }
    else {
      piVar4[2] = (int)param_2;
      (**(int (***)())(*param_2 + 4))(param_2);
      piVar4[3] = param_3;
      piVar5 = param_1 + 1;
      piVar4[4] = iVar1;
      param_1[6] = param_1[6] + iStack0000002c;
      puVar2 = (unsigned int *)param_1[2];
      piVar4[1] = (int)puVar2;
      *piVar4 = (int)piVar5;
      *puVar2 = piVar4;
      param_1[2] = (int)piVar4;
      *param_1 = *param_1 + 1;
      piVar4 = (int *)(-(unsigned int)(piVar5 != (int *)param_1[1]) & (unsigned int)param_1[1]);
      do {
        if (piVar4 == (int *)0x0) break;
        piVar4 = (int *)*piVar4;
      } while (piVar4 != piVar5);
      uVar3 = 0;
    }
  }
  return uVar3;
}

