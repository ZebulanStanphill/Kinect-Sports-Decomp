extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern int fn_8251C390();
extern int fn_828A0518();
extern int fn_829E53B0();
extern int fn_82F63EC8();
extern unsigned int lbl_82024338;
extern unsigned int lbl_8321442C;
extern unsigned int uRam8321443c;


unsigned __int64 fn_828E5338(void)

{
  unsigned char auStack_30 [16];
  unsigned char auStack_20 [16];
  
  fn_8251C390(auStack_20,0xffffffff820272f0,0x136);
  if ((uRam8321443c & 1) == 0) {
    uRam8321443c = uRam8321443c | 1;
    auStack_30[0] = 0;
    fn_828A0518(0xffffffff8321442c,auStack_30,auStack_30);
    lbl_8321442C = &lbl_82024338;
    fn_82F63EC8(0xffffffff83141570);
  }
  fn_829E53B0(auStack_20);
  return 0xffffffff8321442c;
}

