extern int fn_825996B0();
extern int fn_82624CC8();
extern int (*lbl_832659F4)();
extern int (*lbl_83265A1C)();
extern int (*lbl_8327677C)();
extern int (*lbl_83276798)();
extern unsigned int lbl_832960A4;
extern unsigned int lbl_832960B4;
extern unsigned int lbl_832960B8;
extern int (*lbl_832961A4)();
extern unsigned int lbl_832961C8;


void fn_8251C6D8(void)

{
  int iVar1;
  
  fn_825996B0();
  fn_82624CC8(0xffffffff831d50d0,3);
  fn_82624CC8(0xffffffff831d6f00,2);
  if (lbl_832659F4 != (int (**)())0x0) {
    (*lbl_832659F4)();
  }
  lbl_832961C8 = 0;
  if (lbl_832961A4 != (int (**)())0x0) {
    (*lbl_832961A4)(0);
  }
  if (lbl_83276798 == (int (**)())0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*lbl_83276798)();
  }
  if ((iVar1 == 0) && (lbl_8327677C != (int (**)())0x0)) {
    (*lbl_8327677C)(0xffffffff821c2b64,0xffffffff821c2b20,0x359);
  }
  lbl_832960A4 = 0;
  lbl_832960B8 = 0;
  lbl_832960B4 = 0;
  lbl_832961C8 = 0;
  if (lbl_83265A1C != (int (**)())0x0) {
    (*lbl_83265A1C)();
  }
  return;
}

