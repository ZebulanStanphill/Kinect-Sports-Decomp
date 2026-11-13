extern int fn_82CE5410();
extern int fn_830911E0();


void fn_83093D40(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  
  iVar1 = fn_82CE5410();
  iVar1 = (*(int (**)())(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0xe0);
  *(unsigned short *)(iVar1 + 4) = 0xe0;
  fn_830911E0(iVar1,param_1,param_2,param_3);
  return;
}

