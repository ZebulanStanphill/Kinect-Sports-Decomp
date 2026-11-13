extern int fn_828A1D70();


void fn_828E8A40(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  iVar2 = fn_828A1D70();
  if ((unsigned int *)(iVar2 + 0xc) != (unsigned int *)0x0) {
    puVar4 = (unsigned int *)(iVar2 + 0x14);
    puVar3 = param_2 + 2;
    *(unsigned int *)(iVar2 + 0xc) = *param_2;
    *(unsigned int *)(iVar2 + 0x10) = param_2[1];
    *(unsigned int *)(iVar2 + 0x14) = 0;
    *(unsigned int *)(iVar2 + 0x18) = 0;
    if (puVar4 != puVar3) {
      uVar1 = *(unsigned int *)(iVar2 + 0x18);
      *(unsigned int *)(iVar2 + 0x18) = param_2[3];
      param_2[3] = uVar1;
      uVar1 = *puVar4;
      *puVar4 = *puVar3;
      *puVar3 = uVar1;
    }
  }
  return;
}

