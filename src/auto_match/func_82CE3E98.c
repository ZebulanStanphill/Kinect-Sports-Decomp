extern int fn_82CE4530();
extern int fn_82CE5410();


void fn_82CE3E98(void)

{
  int iVar1;
  
  iVar1 = fn_82CE5410();
  iVar1 = (*(int (**)())(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x34);
  *(unsigned short *)(iVar1 + 4) = 0x34;
  fn_82CE4530();
  return;
}

