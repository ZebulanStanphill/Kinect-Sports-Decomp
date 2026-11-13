extern int fn_82CE5410();
extern int fn_82D88EF8();
extern int fn_82D962A8();


int fn_82D89050(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int allocated;
  
  iVar1 = fn_82CE5410();
  allocated = (int)(*(int (**)())(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x38);
  *(unsigned short *)((int)allocated + 4) = 0x38;
  iVar1 = fn_82D962A8(allocated,param_2,param_3,param_4,1);
  *(unsigned int *)(iVar1 + 0x2c) = *(unsigned int *)(param_4 + 8);
  fn_82D88EF8(param_1,iVar1);
  return iVar1;
}

