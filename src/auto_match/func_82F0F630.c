extern unsigned int *auStack_1030;
extern int fn_82F68CC0();


void fn_82F0F630(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  __int64 lVar3;
  unsigned char auStack_1030 [4144];
  
  uVar1 = *(unsigned int *)(param_1 + 0x31c);
  iVar2 = 0;
  lVar3 = (__int64)(int)*(unsigned int *)(param_2 + 0xc0) * (__int64)(int)uVar1 +
          (unsigned __int64)*(unsigned int *)(param_1 + 0x1abc);
  if (0 < (__int64)((unsigned __int64)*(unsigned int *)(param_2 + 0xc4) - (unsigned __int64)*(unsigned int *)(param_2 + 0xc0))) {
    do {
      (**(int (***)())(param_1 + 0x52a0))(param_1,lVar3,auStack_1030,*(unsigned int *)(param_1 + 0x31c));
      fn_82F68CC0(lVar3,auStack_1030,(unsigned __int64)uVar1);
      iVar2 = iVar2 + 1;
      lVar3 = (unsigned __int64)uVar1 + lVar3;
    } while (iVar2 < *(int *)(param_2 + 0xc4) - *(int *)(param_2 + 0xc0));
  }
  return;
}

