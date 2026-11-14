extern int fn_822315A0();
extern int fn_8261BF58();
extern int fn_82A1E658();
extern int XMemSet();
extern int iRam83281150;


unsigned __int64 fn_825FD748(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  int aiStack_40 [16];
  
  if (iRam83281150 != 0) {
    if (*(int *)(param_3 + 4) != 0) {
      fn_822315A0();
    }
    return 0x3e5;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  iRam83281150 = 1;
  fn_8261BF58(aiStack_40,*(unsigned int *)(iVar1 + 0x19c),iVar1 + 0x170,iVar1 + 0x68);
  if (*(int *)(aiStack_40[0] + 0x248) != 0) {
    fn_82A1E658();
  }
                    /* WARNING: Subroutine does not return */
  XMemSet(aiStack_40[0] + 0x23c,0,0x1c);
}

