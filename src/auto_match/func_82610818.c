extern unsigned int *auStack_28;
extern int fn_82569980();
extern int fn_82A1EFC0();


void fn_82610818(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  int iVar1;
  unsigned char auStack_28 [16];
  
  if (param_5 == 0) {
    iVar1 = fn_82569980(param_1,*(unsigned char *)(param_3 + 0x10));
    if (iVar1 == -1) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)((int)param_1 + 0xd8) + iVar1 * 0x30 + 0x10);
    }
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(auStack_28,0,4);
    }
  }
  return;
}

