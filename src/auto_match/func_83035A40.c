extern int fn_82FA5060();
extern int fn_83015E68();
extern int fn_83035338();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E0;


unsigned int fn_83035A40(unsigned int param_1)

{
  unsigned int uVar1;
  
  uVar1 = fn_82FA5060(lbl_831BC768,0x2c);
  if ((uVar1 & 0xffffffff) != 0) {
    uVar1 = fn_83035338(uVar1,param_1);
    if ((uVar1 & 0xffffffff) != 0) {
      fn_83015E68((unsigned int)lbl_832642E0 + 0xcbc,uVar1);
    }
    return uVar1;
  }
  return 0;
}

