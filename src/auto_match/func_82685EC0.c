extern int fn_826859B0();
extern int fn_82685C28();


void fn_82685EC0(int param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) {
    iVar2 = fn_82685C28(param_1 + 0x40);
    *(int *)(iVar2 + 8) = param_2;
    *(int *)(param_2 + 0x1c) = iVar2;
    *(int *)(param_2 + 0x18) = param_1;
  }
  *(int *)(param_1 + 0x88) = iVar2;
  puVar3 = (unsigned int *)fn_826859B0(param_1 + 0x1c);
  puVar3[4] = param_3;
  puVar3[5] = iVar2;
  *puVar3 = *(unsigned int *)(param_1 + 0x30);
  puVar3[1] = param_1 + 0x30;
  *(unsigned int **)(*(int *)(param_1 + 0x30) + 4) = puVar3;
  *(unsigned int **)(param_1 + 0x30) = puVar3;
  uVar1 = *(unsigned int *)(iVar2 + 0x18);
  puVar3[3] = iVar2 + 0x10;
  puVar3[2] = uVar1;
  *(unsigned int **)(*(int *)(iVar2 + 0x18) + 0xc) = puVar3;
  *(unsigned int **)(iVar2 + 0x18) = puVar3;
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
  *(unsigned int *)(param_1 + 0x88) = 0;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}

