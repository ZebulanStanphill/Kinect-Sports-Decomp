extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82D0B0C0();
extern int fn_82D0CA60();
extern int fn_82D0D640();
extern int fn_82D0D6E8();
extern int fn_82D0D888();


void fn_82D08138(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [24];
  
  fn_82D0D6E8(auStack_30);
  fn_82D0B0C0(auStack_40);
  auStack_40[0] = 1;
  iVar1 = fn_82D0D888(auStack_30,param_1,auStack_40);
  if (iVar1 != -1) {
                    /* WARNING: Subroutine does not return */
    fn_82D0CA60(auStack_30,0,param_2);
  }
  fn_82D0D640(auStack_30);
  return;
}

