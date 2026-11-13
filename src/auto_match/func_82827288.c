extern int fn_828223C8();
extern int fn_828267E0();


void fn_82827288(int param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int aiStack_30;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if ((*(unsigned int *)(param_1 + 0x3e4) != 0) && (*(unsigned int *)(param_1 + 0x3e4) <= param_2)) {
    param_2 = param_2 + 1;
  }
  iVar2 = param_1 + 0x2fc;
  while (iVar3 = iVar2, fn_828223C8(iVar3,&aiStack_30), iVar1 == *(int *)(param_1 + 0x24)) {
    iVar2 = aiStack_30;
    if (*(unsigned int *)(aiStack_30 + 0x10) == param_2) {
      fn_828267E0(param_1,aiStack_30);
      iVar2 = iVar3;
    }
  }
  return;
}

