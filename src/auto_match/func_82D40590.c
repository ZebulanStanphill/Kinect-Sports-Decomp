extern int fn_82CE5410();


void fn_82D40590(int param_1)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int iVar3;
  
  uVar1 = *(unsigned short *)(param_1 + 0x22);
  uVar2 = *(unsigned int *)(param_1 + 0x24);
  iVar3 = fn_82CE5410();
  (**(int (***)())(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),uVar2,(unsigned __int64)uVar1 << 5);
  uVar1 = *(unsigned short *)(param_1 + 0x22);
  uVar2 = *(unsigned int *)(param_1 + 0x28);
  iVar3 = fn_82CE5410();
  (**(int (***)())(**(int **)(iVar3 + 0x10) + 8))
            (*(int **)(iVar3 + 0x10),uVar2,((unsigned __int64)uVar1 + 3) * 4 & 0xfffffff0);
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned short *)(param_1 + 0x20) = 0;
  *(unsigned short *)(param_1 + 0x22) = 0;
  return;
}

