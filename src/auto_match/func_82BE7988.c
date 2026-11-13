extern int fn_82BEA200();
extern int fn_82BEA230();
extern unsigned int lbl_8317524C;


void fn_82BE7988(unsigned int param_1,unsigned short param_2)

{
  int iVar1;
  
  if ((param_1 < 0x10) &&
     (iVar1 = fn_82BEA200(0xffffffff8322b1ec,0xffffffff820e9a30), iVar1 != 0)) {
    *(unsigned short *)(&lbl_8317524C + param_1 * 0xc) = param_2;
    fn_82BEA230(0xffffffff8322b1ec,0xffffffff820e9a30);
  }
  return;
}

