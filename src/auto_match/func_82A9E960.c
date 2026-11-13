extern unsigned int *auStack_af;
extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A9A860();
extern int fn_82F691F0();
extern unsigned int lbl_820D28B4;


void fn_82A9E960(int param_1,unsigned __int64 param_2)

{
  unsigned char auStack_af [175];
  
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2da0);
  fn_82A9A860(param_2);
  if (*(unsigned int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14) * 0x1dc + *(unsigned int *)(param_1 + 0x10)) {
    fn_82A99BC8(param_2,0xffffffff82010000,0xffffffff820d0000,0xffffffff821d0000,
                  0xffffffff820d0000,0xffffffff82020000,0xffffffff820276c0,0xffffffff82030000);
    fn_82A99B70(param_2,&lbl_820D28B4,0xffffffff820014b8);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_af,0,0xf);
  }
  fn_82A99C28(param_2,0xffffffff820d2da0);
  return;
}

