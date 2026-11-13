extern unsigned int uStack_c;


void fn_82423B30(int param_1,int param_2)

{
  int iVar1;
  unsigned int uStack_c;
  
  iVar1 = *(int *)(param_2 + 0x30);
  if ((*(int *)(param_2 + 0x170) != 0) && (*(int *)(param_2 + 0x180) <= iVar1)) {
    iVar1 = *(int *)(param_2 + 0x180);
  }
  *(int *)(param_2 + 0x180) = iVar1;
  iVar1 = *(int *)(param_2 + 0x30);
  if (*(int *)(param_2 + 0x30) < *(int *)(param_2 + 0x170)) {
    iVar1 = *(int *)(param_2 + 0x170);
  }
  *(int *)(param_2 + 0x170) = iVar1;
  *(int *)(param_2 + 0x178) = *(int *)(param_2 + 0x178) + 1;
  iVar1 = *(int *)(param_2 + 0x174);
  if (*(int *)(param_2 + 0x174) <= *(int *)(param_2 + 0xd0)) {
    iVar1 = *(int *)(param_2 + 0xd0);
  }
  *(int *)(param_2 + 0x174) = iVar1;
  uStack_c = (int)(__int64)*(float *)(*(int *)(param_1 + 4) + 0x2e4);
  *(int *)(param_2 + 0x17c) = uStack_c + *(int *)(param_2 + 0x17c);
  return;
}

