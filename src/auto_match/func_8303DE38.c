extern int fn_8302BBA8();


void fn_8303DE38(int param_1,int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x1c);
  if (piVar4 != *(int **)(param_1 + 0x20)) {
    do {
      if (*piVar4 == param_2[3]) {
        return;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != *(int **)(param_1 + 0x20));
  }
  uVar1 = *(unsigned int *)(param_1 + 0x14);
  iVar2 = *param_2;
  uVar3 = fn_8302BBA8();
  (**(int (***)())(iVar2 + 200))(param_2,param_3,uVar1 >> 3 & 0x1f,uVar3);
  return;
}

