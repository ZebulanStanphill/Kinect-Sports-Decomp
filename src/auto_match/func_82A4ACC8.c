extern int fn_82A59A90();


int fn_82A4ACC8(int param_1,int param_2,int param_3)

{
  int uVar1;
  
  (*(int (**)())(*(int *)(param_1 + 0x1c) + 8))(param_1 + 0x1c);
  uVar1 = fn_82A59A90(*(unsigned int *)(param_1 + 0x44),param_2,param_3);
  (*(int (**)())(*(int *)(param_1 + 0x1c) + 0x14))(param_1 + 0x1c);
  return uVar1;
}

