extern int fn_82CE5410();


void fn_82D40610(int param_1,unsigned short param_2)

{
  unsigned short uVar1;
  int iVar2;
  unsigned int uVar3;
  
  *(unsigned short *)(param_1 + 0x20) = param_2;
  *(unsigned short *)(param_1 + 0x22) = param_2;
  iVar2 = fn_82CE5410();
  uVar3 = (**(int (***)())(**(int **)(iVar2 + 0x10) + 4))
                    (*(int **)(iVar2 + 0x10),(unsigned __int64)param_2 << 5);
  *(unsigned int *)(param_1 + 0x24) = uVar3;
  uVar1 = *(unsigned short *)(param_1 + 0x22);
  iVar2 = fn_82CE5410();
  uVar3 = (**(int (***)())(**(int **)(iVar2 + 0x10) + 4))
                    (*(int **)(iVar2 + 0x10),((unsigned __int64)uVar1 + 3) * 4 & 0xfffffff0);
  *(unsigned int *)(param_1 + 0x28) = uVar3;
  return;
}

