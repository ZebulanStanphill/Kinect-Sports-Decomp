extern unsigned int iStack_c;


void fn_822755F8(unsigned __int64 *param_1,unsigned __int64 *param_2)

{
  unsigned __int64 *puVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 *puVar4;
  unsigned __int64 *puVar5;
  int iStack_c;
  
  puVar4 = param_1;
  if (param_1 == param_2) {
    return;
  }
  while (puVar5 = puVar4 + 1, puVar5 != param_2) {
    uVar3 = *puVar5;
    iStack_c = (int)uVar3;
    puVar1 = puVar5;
    if (iStack_c < *(int *)((int)param_1 + 4)) {
      while (param_1 != puVar1) {
        *(unsigned int *)puVar1 = *(unsigned int *)(puVar1 + -1);
        *(unsigned int *)((int)puVar1 + 4) = *(unsigned int *)((int)puVar1 + -4);
        puVar1 = puVar1 + -1;
      }
      *param_1 = uVar3;
      puVar4 = puVar5;
    }
    else {
      iVar2 = *(int *)((int)puVar4 + 4);
      puVar4 = puVar5;
      while (iStack_c < iVar2) {
        *(unsigned int *)puVar4 = *(unsigned int *)(puVar4 + -1);
        *(unsigned int *)((int)puVar4 + 4) = *(unsigned int *)((int)puVar4 + -4);
        iVar2 = *(int *)((int)puVar4 + -0xc);
        puVar4 = puVar4 + -1;
      }
      *puVar4 = uVar3;
      puVar4 = puVar5;
    }
  }
  return;
}

