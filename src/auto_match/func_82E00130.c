int fn_82E00130(int self,unsigned int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(((param_2 & 0xff) + (param_2 & 0xff) * 2) * 0x20 + *(int *)(self + 0x10));
  (*(int (**)())(*piVar1 + 0x28))(piVar1);
  return piVar1[0x35];
}

