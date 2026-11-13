extern unsigned int lbl_8215F708;


void fn_82E93220(int param_1,int param_2,int param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x77b8) = param_2;
  *(int *)(param_1 + 0x77bc) = param_3;
  iVar2 = param_2 * param_3;
  *(int *)(param_1 + 0x77c4) = param_2;
  *(int *)(param_1 + 0x77c8) = param_3;
  *(int *)(param_1 + 0x77c0) = iVar2;
  uVar1 = lbl_8215F708;
  *(int *)(param_1 + 0x77cc) = iVar2;
  *(unsigned __int64 *)(param_1 + 0x77e0) = uVar1;
  *(int *)(param_1 + 0x77d0) = param_2;
  *(int *)(param_1 + 0x77d4) = param_3;
  *(int *)(param_1 + 0x77d8) = iVar2;
  *(unsigned int *)(param_1 + 0x77e8) = 0;
  *(unsigned int *)(param_1 + 0x77ec) = 0;
  *(unsigned int *)(param_1 + 0x77f0) = 0;
  *(unsigned int *)(param_1 + 0x77f4) = 0;
  *(unsigned int *)(param_1 + 0x77f8) = 0;
  return;
}

