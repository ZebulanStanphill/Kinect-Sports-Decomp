extern int fn_82F41C68();


int fn_82F41770(int param_1,int param_2,int param_3)

{
  int uVar1;
  
  if (*(int *)(param_1 + 0x5c) != 0) {
    uVar1 = fn_82F41C68(param_2,param_3,*(unsigned int *)(param_1 + 0x60),
                         *(unsigned int *)(param_1 + 100));
    return uVar1;
  }
  return 0x8000ffff;
}

