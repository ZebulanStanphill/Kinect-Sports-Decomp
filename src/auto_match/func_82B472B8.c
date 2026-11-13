extern int fn_82AC6560();
extern int fn_82B47118();
extern __int64 fn_82B841E8();


unsigned __int64 fn_82B472B8(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  int *piVar2;
  
  uVar1 = fn_82B841E8(param_1,param_2,param_2 + 0x20,0x58,0,0);
  *(unsigned int *)(param_2 + 0x30) = *(unsigned int *)(param_2 + 0x30) | 0x100000;
  if (*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x10) == 0) {
    *(int *)(*(int *)(param_1 + 0x18) + 0x10) = param_2;
  }
  else {
    piVar2 = (int *)fn_82AC6560(param_1,8,0x38);
    *piVar2 = param_2;
    piVar2[1] = *(int *)(*(int *)(param_1 + 0x18) + 0x14);
    *(int **)(*(int *)(param_1 + 0x18) + 0x14) = piVar2;
  }
  fn_82B47118(param_1,uVar1,*(unsigned int *)(param_1 + 0x18));
  return uVar1;
}

