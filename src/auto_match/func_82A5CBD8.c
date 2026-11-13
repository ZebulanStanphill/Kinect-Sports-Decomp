extern int fn_82A40B38();
extern int fn_82A5C960();
extern int fn_82A5CA80();


unsigned __int64 fn_82A5CBD8(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = fn_82A5C960();
  piVar3 = *(int **)(param_1 + 0xd4);
  while (piVar4 = piVar3, piVar4 != (int *)0x0) {
    if (piVar4 == (int *)0x0) {
      iVar2 = 0;
      piVar3 = piVar4;
    }
    else {
      iVar2 = *piVar4;
      piVar3 = (int *)piVar4[1];
    }
    if ((*(int *)(iVar2 + 4) == param_2) || (param_2 == 0)) {
      fn_82A40B38(param_1 + 8,piVar4);
      uVar1 = fn_82A5CA80(param_1,iVar2);
    }
  }
  return uVar1;
}

