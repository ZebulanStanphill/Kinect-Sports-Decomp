extern unsigned int *auStack_1c;
extern unsigned int *auStack_20;
extern int fn_82520158();
extern int fn_82528B78();
extern int fn_82528BF8();
extern int fn_8265C9E0();
extern unsigned int lbl_83276728;
extern unsigned int lbl_8327672C;
extern unsigned int lbl_83276730;


void fn_82489058(void)

{
  unsigned __int64 uVar1;
  unsigned char auStack_20 [4];
  unsigned char auStack_1c [4];
  
  if (lbl_83276728 == 0) {
    fn_82520158(0xffffffff821beacc,auStack_20,0);
    fn_82520158(0xffffffff821beae0,auStack_1c,0);
    uVar1 = fn_8265C9E0(0x24);
    if ((uVar1 & 0xffffffff) == 0) {
      lbl_8327672C = 0;
    }
    else {
      lbl_8327672C = fn_82528B78(uVar1,auStack_20,0xffffffff821bd350);
    }
    uVar1 = fn_8265C9E0(0x24);
    if ((uVar1 & 0xffffffff) == 0) {
      lbl_83276730 = 0;
    }
    else {
      lbl_83276730 = fn_82528B78(uVar1,auStack_1c,0xffffffff821beaf0);
    }
    lbl_83276728 = 1;
  }
  fn_82528BF8(lbl_8327672C,0xffffffff82198508,0xffffffff831d096c,0x80,1,1);
  fn_82528BF8(lbl_8327672C,0xffffffff82198518,0xffffffff831d0a6c,0x80,1,1);
  return;
}

