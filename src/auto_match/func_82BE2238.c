extern int fn_82BEA200();
extern int fn_82BEA230();
extern unsigned int lbl_8322B130;
extern unsigned int lbl_8322B1DC;


void fn_82BE2238(unsigned short param_1)

{
  int iVar1;
  
  iVar1 = fn_82BEA200(0xffffffff8322b13c,0xffffffff820e8a38);
  if (iVar1 != 0) {
    if (lbl_8322B130 != 0) {
      *(unsigned short *)(lbl_8322B1DC + 0x28) = param_1;
    }
    fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8a38);
  }
  return;
}

