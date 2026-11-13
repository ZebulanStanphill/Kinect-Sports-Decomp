extern int fn_82569980();


void fn_8260F160(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  int iVar1;
  unsigned int uVar2;
  
  if (param_5 == 0) {
    iVar1 = fn_82569980(param_1,*(unsigned short *)(param_3 + 0x10) & 0xff);
    if (iVar1 == -1) {
      return;
    }
    iVar1 = *(int *)((int)param_1 + 0xd8) + iVar1 * 0x30;
    uVar2 = 1;
  }
  else {
    if (param_5 != 1) {
      return;
    }
    iVar1 = fn_82569980(param_1,*(unsigned short *)(param_3 + 0x10) & 0xff);
    if (iVar1 == -1) {
      return;
    }
    iVar1 = *(int *)((int)param_1 + 0xd8) + iVar1 * 0x30;
    uVar2 = 0;
  }
  *(unsigned int *)(iVar1 + 0x18) = uVar2;
  return;
}

