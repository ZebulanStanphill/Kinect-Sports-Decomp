extern unsigned int uStack_c;


void fn_82428FD8(int param_1,int param_2)

{
  int iVar1;
  unsigned int uStack_c;
  
  iVar1 = *(int *)(param_2 + 0x30);
  if ((*(int *)(param_2 + 0x184) != 0) && (*(int *)(param_2 + 0x198) <= iVar1)) {
    iVar1 = *(int *)(param_2 + 0x198);
  }
  *(int *)(param_2 + 0x198) = iVar1;
  iVar1 = *(int *)(param_2 + 0x30);
  if (*(int *)(param_2 + 0x30) < *(int *)(param_2 + 0x184)) {
    iVar1 = *(int *)(param_2 + 0x184);
  }
  *(int *)(param_2 + 0x184) = iVar1;
  *(int *)(param_2 + 0x18c) = *(int *)(param_2 + 0x18c) + *(int *)(param_2 + 0x30);
  iVar1 = *(int *)(param_2 + 0x188);
  if (*(int *)(param_2 + 0x188) <= *(int *)(param_2 + 0xe4)) {
    iVar1 = *(int *)(param_2 + 0xe4);
  }
  *(int *)(param_2 + 0x188) = iVar1;
  *(int *)(param_2 + 400) = *(int *)(param_2 + 400) + 1;
  uStack_c = (int)(__int64)*(float *)(*(int *)(param_1 + 4) + 0x2e4);
  *(int *)(param_2 + 0x194) = uStack_c + *(int *)(param_2 + 0x194);
  return;
}

