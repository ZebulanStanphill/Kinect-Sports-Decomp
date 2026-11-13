extern int fn_82FA5060();
extern int fn_8300AA60();
extern unsigned int lbl_8217C940;
extern unsigned int lbl_8217CEE8;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_83264EC4;


unsigned int * fn_83032398(unsigned int *param_1)

{
  unsigned short *puVar1;
  
  fn_8300AA60();
  *param_1 = &lbl_8217CEE8;
  param_1[7] = &lbl_8217C940;
  puVar1 = (unsigned short *)fn_82FA5060(lbl_831BC768,0xc);
  param_1[0x11] = puVar1;
  if (puVar1 != (unsigned short *)0x0) {
    *puVar1 = 0;
    *(unsigned int *)(puVar1 + 2) = 0;
  }
  if (lbl_83264EC4 == (unsigned int *)0x0) {
    lbl_83264EC4 = param_1;
  }
  return param_1;
}

