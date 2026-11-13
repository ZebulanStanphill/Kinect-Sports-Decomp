extern int fn_82508078();


int fn_822B7600(int param_1,int param_2)

{
  int uVar1;
  
  if (*(unsigned int *)(param_1 + 0x170) != 0) {
    uVar1 = fn_82508078(*(int *)(param_1 + 0x170),param_2,0);
    return uVar1;
  }
  return 0;
}

