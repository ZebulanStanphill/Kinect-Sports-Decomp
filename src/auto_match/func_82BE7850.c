extern int fn_82BE19A0();
extern int fn_82BE5240();
extern int fn_82BEA1F8();
extern int fn_82BEA230();
extern int fn_82F6D460();
extern unsigned int lbl_8322B1DC;


void fn_82BE7850(unsigned int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  int iVar1;
  
  if ((lbl_8322B1DC != 0) && (param_1 < 0x10)) {
    fn_82BEA1F8(0xffffffff8322b1ec,0xffffffff820e99e8);
    *(unsigned int *)(param_1 * 0xc + -0x7ce8adb8) = param_2;
    if (((param_3 & 0xffffffff) != 0) && (iVar1 = fn_82F6D460(param_3,0x100), iVar1 != 0)) {
      iVar1 = fn_82BE19A0(param_3);
      *(int *)(param_1 * 0xc + -0x7ce8adb0) = iVar1;
      if (iVar1 == 0) {
        fn_82BE5240(lbl_8322B1DC,0x65,0xffffffff82196582);
      }
    }
    fn_82BEA230(0xffffffff8322b1ec,0xffffffff820e99e8);
  }
  return;
}

