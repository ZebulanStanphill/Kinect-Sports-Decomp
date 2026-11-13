extern int fn_82BA9020();


void fn_82BABB08(int param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_4 + 0xab0) + 8);
  *(unsigned int *)(*(int *)(param_1 + 0xa8) * 8 + iVar1) = *(unsigned int *)(param_2 + 0x10);
  if (*(int *)(param_1 + 0xac) >= 6) {
    fn_82BA9020(param_2,*(unsigned int *)(param_2 + 0x18) - *(unsigned int *)(param_2 + 0x14));
    *(unsigned int *)(*(int *)(param_1 + 0xa8) * 8 + iVar1 + 4) = *(unsigned int *)(param_2 + 0x18);
    *(unsigned char *)(param_2 + 0x30) = 1;
    *(unsigned int *)(param_2 + 0x24) = *(unsigned int *)(param_2 + 0xc);
    *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_2 + 0x18);
  }
  return;
}

