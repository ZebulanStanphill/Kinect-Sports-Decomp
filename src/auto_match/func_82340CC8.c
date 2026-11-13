extern int fn_823400C8();
extern int fn_828EA608();


unsigned int fn_82340CC8(int *param_1,int param_2)

{
  unsigned int *puVar1;
  char cVar5;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar6;
  
  iVar6 = *(int *)(*(int *)(*param_1 + 0x10) + 0x74);
  if ((iVar6 == 0) || (cVar5 = fn_828EA608(iVar6), cVar5 == '\0')) {
    iVar6 = 0;
  }
  if (iVar6 == 0) {
    uVar4 = 0;
  }
  else {
    puVar1 = (unsigned int *)*param_1;
    for (piVar2 = (int *)*puVar1; (piVar2 != (int *)puVar1[1] && (*piVar2 != param_2));
        piVar2 = piVar2 + 7) {
    }
    if (puVar1[7] == 0) {
      iVar3 = fn_823400C8();
    }
    else {
      iVar3 = piVar2[5];
    }
    uVar4 = *(unsigned int *)(*(int *)(iVar6 + 0x100) + iVar3 * 4);
  }
  return uVar4;
}

