extern int fn_82CE5410();


void fn_83085238(unsigned int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  
  iVar1 = fn_82CE5410();
  lVar3 = (param_2 & 0xfffffff) << 4;
  uVar2 = (*(int (**)())(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),lVar3);
  *param_1 = uVar2;
  iVar1 = fn_82CE5410();
  uVar2 = (*(int (**)())(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),lVar3);
  param_1[1] = uVar2;
  return;
}

