extern int fn_827DE130();
extern unsigned int iStack00000014;


unsigned int * fn_827DE348(int param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  int iStack00000014;
  
  iStack00000014 = param_1;
  puVar1 = (unsigned int *)
           (**(int (***)())(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),0x28,param_1 + 0xc);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  fn_827DE130(param_1 + 0x24,puVar1 + 2,param_4);
  return puVar1;
}

