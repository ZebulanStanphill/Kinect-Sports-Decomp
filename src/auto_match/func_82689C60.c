extern int fn_82689BE0();


void fn_82689C60(int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  
  uVar1 = param_1[1];
  fn_82689BE0(param_1,param_1,param_2);
  if ((unsigned __int64)uVar1 < (param_2 & 0xffffffff)) {
    param_2 = param_2 - uVar1;
    piVar4 = (int *)(uVar1 * 4 + *param_1);
    uVar3 = 0;
    if (param_2 != 0) {
      do {
        if (piVar4 != (int *)0x0) {
          iVar2 = param_1[3];
          *piVar4 = iVar2;
          *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 1;
      } while ((uVar3 & 0xffffffff) < (param_2 & 0xffffffff));
    }
  }
  return;
}

