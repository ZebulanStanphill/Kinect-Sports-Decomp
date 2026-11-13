extern int fn_82E85718();
extern int fn_82F02410();


void fn_82E86A10(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  if (*(int *)(param_1 + 0x6f4c) != 0) {
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),0,1);
  }
  if ((*(int *)(param_1 + 0x76c8) == 0) || (*(int *)(param_1 + 0x76e0) != 0)) {
    uVar3 = 4;
    uVar2 = 0xf;
  }
  else {
    uVar3 = 5;
    uVar2 = 0x1f;
  }
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),uVar2,uVar3);
  if (*(int *)(param_1 + 0x6f48) != 0) {
    if ((*(int *)(param_1 + 0x6f4c) == 0) || (*(int *)(param_1 + 0x6f7c) != 0)) {
      uVar1 = *(unsigned int *)(param_1 + 0x6f60);
      uVar2 = 2;
    }
    else {
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x6f50),1);
      uVar1 = *(unsigned int *)(param_1 + 0x6f54);
      uVar2 = 1;
    }
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),uVar1,uVar2);
  }
  if (*(int *)(param_1 + 0x4fc) != 0) {
    fn_82E85718(param_1);
  }
  return;
}

