extern int fn_82BEA200();
extern int fn_82BEA230();
extern unsigned int lbl_8317523C;


unsigned __int64 fn_82BE7908(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  if ((lbl_8317523C == 0) &&
     (iVar2 = fn_82BEA200(0xffffffff8322b1ec,0xffffffff820e9a0c), iVar2 != 0)) {
    *param_2 = *(unsigned int *)(param_1 * 0xc + -0x7ce8adb8);
    fn_82BEA230(0xffffffff8322b1ec,0xffffffff820e9a0c);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

