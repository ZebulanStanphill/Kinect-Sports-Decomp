extern int fn_82CE5410();


void fn_82DDE1E0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  
  uVar1 = *(unsigned int *)(param_1 + 8);
  uVar2 = *(unsigned int *)(param_4 + 0x18);
  iVar3 = fn_82CE5410();
  (*(int (**)())(**(int **)(iVar3 + 0x18) + 0x10))(*(int **)(iVar3 + 0x18),uVar2,uVar1,1);
  return;
}

