extern int fn_8252CAF8();
extern int fn_82569980();


void fn_8260F698(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = fn_82569980(param_1,*(unsigned char *)(param_3 + 0x10));
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0xd8) + iVar1 * 0x30 + 0x10);
  }
  if (iVar1 != 0) {
    fn_8252CAF8(iVar1,*(unsigned int *)(param_3 + 0x14) & 0xff,*(unsigned int *)(param_3 + 0x18) & 0xff);
  }
  return;
}

