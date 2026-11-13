#define true 1


int * fn_8268E388(int *param_1,int param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  *(unsigned int *)(param_2 + 0x10) = 0;
  *(unsigned int *)(param_2 + 0xc) = 0;
  *(unsigned int *)(param_2 + 8) = 0;
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    *param_1 = param_2;
  }
  else {
    uVar4 = (unsigned __int64)*(unsigned int *)(param_2 + 0x24);
    uVar5 = uVar4;
    param_1 = piVar1;
    if ((unsigned int)piVar1[9] == uVar4) {
      return piVar1;
    }
    while( true ) {
      uVar2 = uVar5 >> 0x1f;
      uVar5 = (uVar5 & 0x7fffffff) << 1;
      iVar3 = (int)uVar2 + 3;
      piVar1 = (int *)param_1[iVar3];
      if (piVar1 == (int *)0x0) break;
      param_1 = piVar1;
      if ((unsigned int)piVar1[9] == uVar4) {
        return piVar1;
      }
    }
    param_1[iVar3] = param_2;
  }
  *(int **)(param_2 + 8) = param_1;
  return (int *)0x0;
}

