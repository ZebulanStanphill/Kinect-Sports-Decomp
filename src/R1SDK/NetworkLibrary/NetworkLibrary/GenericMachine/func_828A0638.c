extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern int fn_8251C390();
extern int fn_828A0518();
extern int fn_829E53B0();
extern int fn_82F63EC8();
extern unsigned int lbl_82024338;
extern unsigned int lbl_83213EE8;
extern unsigned int uRam83213ef8;


unsigned __int64 fn_828A0638(void)

{
  unsigned char auStack_30 [16];
  unsigned char auStack_20 [16];
  
  fn_8251C390(auStack_20,0xffffffff82023cd0,0x2f0);
  if ((uRam83213ef8 & 1) == 0) {
    uRam83213ef8 = uRam83213ef8 | 1;
    auStack_30[0] = 0;
    fn_828A0518(0xffffffff83213ee8,auStack_30,auStack_30);
    lbl_83213EE8 = &lbl_82024338;
    fn_82F63EC8(0xffffffff83140948);
  }
  fn_829E53B0(auStack_20);
  return 0xffffffff83213ee8;
}

