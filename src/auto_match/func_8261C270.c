extern int fn_82A29AC0();


void fn_8261C270(int param_1)

{
  int iVar1;
  unsigned int aiStack_20 [2];
  
  if ((*(int *)(param_1 + 0x308) != 0) && (*(unsigned int *)(param_1 + 0x30c) != 0x103)) {
    *(unsigned int *)(param_1 + 0x308) = 0;
    iVar1 = fn_82A29AC0(*(unsigned int *)(param_1 + 0x304),param_1 + 0x30c,aiStack_20,1);
    if ((iVar1 == 0) || (aiStack_20[0] == 0)) {
      *(unsigned int *)(param_1 + 800) = 0x1e;
    }
    else {
      *(unsigned int *)(param_1 + 800) = 0;
    }
  }
  return;
}

