extern int fn_82F691F0();
extern int fn_8306DEF0();
extern int fn_8306E128();
extern int fn_8306E7F8();
extern unsigned int lbl_82005718;
extern unsigned int lbl_821AAD20;


void fn_8306C9B0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  
  RtlEnterCriticalSection(param_2 + 0x1b1c);
  if ((param_4 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_4,0,0x1c0);
  }
  uVar1 = fn_8306E7F8(param_1,(double)lbl_821AAD20,(double)lbl_82005718);
  fn_8306DEF0(param_2 + 0x78);
  fn_8306E128(uVar1,*(unsigned int *)(param_2 + 0x1b18));
  RtlLeaveCriticalSection(param_2 + 0x1b1c);
  return;
}

