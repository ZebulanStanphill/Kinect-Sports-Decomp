extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern int fn_8251C390();
extern int fn_828A0518();
extern int fn_829E53B0();
extern int fn_82F63EC8();
extern unsigned int lbl_82024338;
extern unsigned int lbl_83213ED4;
extern unsigned int lbl_83213EE4;


unsigned __int64 fn_828A0598(void)

{
  unsigned char auStack_30 [16];
  unsigned char auStack_20 [16];
  
  fn_8251C390(auStack_20,0xffffffff82023cd0,0x2e1);
  if ((lbl_83213EE4 & 1) == 0) {
    lbl_83213EE4 = lbl_83213EE4 | 1;
    auStack_30[0] = 0;
    fn_828A0518(0xffffffff83213ed4,auStack_30,auStack_30);
    lbl_83213ED4 = &lbl_82024338;
    fn_82F63EC8(0xffffffff831409a8);
  }
  fn_829E53B0(auStack_20);
  return 0xffffffff83213ed4;
}

