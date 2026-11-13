extern int fn_82230110();
extern int fn_82230218();
extern int atexit(void (*)(void));
extern void fn_83141088(void);
extern unsigned int lbl_83214018;


extern char lbl_83213FFC[];
extern char lbl_82196582[];
unsigned char * fn_828AD7A0(unsigned char *param_1)

{
  if ((lbl_83214018 & 1) == 0) {
    lbl_83214018 = lbl_83214018 | 1;
    fn_82230110(lbl_83213FFC,lbl_82196582);
    atexit(fn_83141088);
  }
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  fn_82230218(param_1,lbl_83213FFC,0,0xffffffffffffffff);
  return param_1;
}

