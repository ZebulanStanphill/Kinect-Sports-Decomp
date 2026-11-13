extern int fn_825224E8();
extern int fn_82522D98();
extern unsigned int iStack00000024;
extern unsigned int lbl_832767C8;
extern unsigned int uStack0000001c;


void fn_82521DC8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uStack0000001c;
  int iStack00000024;
  
  uStack0000001c = (unsigned int)param_2;
  iStack00000024 = param_3;
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(0x14);
  }
  fn_825224E8(lbl_832767C8,param_2,2,0xffffffff82522050,0xffffffff825220c8,param_1);
  return;
}

