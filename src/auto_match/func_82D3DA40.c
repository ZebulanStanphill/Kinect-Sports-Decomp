extern int fn_8307FC58();


void fn_82D3DA40(int param_1,int *param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  short sVar3;
  unsigned int *puVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (0 < param_2[1]) {
    iVar6 = 0;
    puVar4 = (unsigned int *)(param_1 + 0x4c);
    do {
      iVar5 = iVar5 + 1;
      puVar2 = (unsigned int *)(*param_2 + iVar6);
      iVar6 = iVar6 + 4;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar2;
    } while (iVar5 < param_2[1]);
  }
  uVar1 = *(unsigned int *)(param_1 + 0x1c);
  sVar3 = fn_8307FC58(*param_2);
  *(short *)(param_1 + 0x26) = (short)uVar1 - sVar3;
  return;
}

