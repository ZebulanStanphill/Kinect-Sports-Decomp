extern int fn_823400C8();
extern int fn_828EA608();


unsigned __int64 fn_82340BD8(int *param_1,int param_2,int param_3)

{
  char cVar2;
  int iVar1;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(*param_1 + 0x10) + 0x1a0) + 0xc) + 0xa0);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x40) != 1)) {
    iVar3 = *(int *)(*(int *)(*param_1 + 0x10) + 0x74);
    if ((iVar3 == 0) || (cVar2 = fn_828EA608(iVar3), cVar2 == '\0')) {
      iVar3 = 0;
    }
    if (iVar3 != 0) {
      for (piVar4 = *(int **)*param_1;
          (piVar4 != (int *)((unsigned int *)*param_1)[1] && (*piVar4 != param_2));
          piVar4 = piVar4 + 7) {
      }
      piVar4[6] = param_3;
      if (*(int *)(*param_1 + 0x1c) == 0) {
        iVar1 = fn_823400C8(piVar4);
      }
      else {
        iVar1 = piVar4[5];
      }
      if (*(int *)(iVar1 * 4 + *(int *)(iVar3 + 0x100)) != piVar4[6]) {
        *(int *)(iVar1 * 4 + *(int *)(iVar3 + 0x100)) = piVar4[6];
      }
      return 1;
    }
  }
  return 0;
}

