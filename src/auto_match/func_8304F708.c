extern int fn_82FA4EB8();
extern int fn_82FA5060();
extern int fn_82FA5538();
extern int fn_82FA57F0();
extern unsigned int lbl_8217D360;
extern unsigned int lbl_8217DD70;
extern unsigned int lbl_8217DD88;
extern unsigned int lbl_831BC978;
extern unsigned int lbl_83265044;


unsigned int * fn_8304F708(unsigned int *param_1)

{
  char cVar3;
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  
  cVar3 = fn_82FA4EB8();
  if (cVar3 == '\0') {
LAB_8304f728:
    puVar2 = (unsigned int *)0x0;
  }
  else {
    if (lbl_83265044 != (unsigned int *)0x0) {
      return lbl_83265044;
    }
    uVar1 = (unsigned __int64)lbl_831BC978;
    if (lbl_831BC978 == 0xffffffff) {
      uVar1 = fn_82FA5538(0,*param_1,0x20,1,0);
      lbl_831BC978 = (unsigned int)uVar1;
      if (lbl_831BC978 == 0xffffffff) goto LAB_8304f728;
    }
    puVar2 = (unsigned int *)fn_82FA5060(uVar1,8);
    if (puVar2 == (unsigned int *)0x0) {
      fn_82FA57F0(lbl_831BC978);
      puVar2 = lbl_83265044;
    }
    else {
      puVar2[1] = &lbl_8217D360;
      lbl_83265044 = puVar2 + 1;
      *puVar2 = &lbl_8217DD88;
      puVar2[1] = &lbl_8217DD70;
      puVar2 = lbl_83265044;
    }
  }
  return puVar2;
}

