extern unsigned int *auStack_140;
extern int fn_82522D98();
extern int fn_827F9C98();
extern int fn_827FA000();


void fn_8255F8D0(int param_1)

{
  __int64 lVar1;
  unsigned char auStack_140 [320];
  
  fn_827FA000(auStack_140,*(unsigned int *)(param_1 + 4));
  lVar1 = fn_827F9C98(auStack_140);
                    /* WARNING: Subroutine does not return */
  fn_82522D98(lVar1 + 0x200);
}

