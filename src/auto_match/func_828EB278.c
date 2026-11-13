extern unsigned int *auStack_20;
extern int fn_8288A5D8();
extern int atexit();
extern unsigned int lbl_83214514;


unsigned __int64 fn_828EB278(void)

{
  unsigned char auStack_20 [16];
  
  if ((lbl_83214514 & 1) == 0) {
    lbl_83214514 = lbl_83214514 | 1;
    fn_8288A5D8(0xffffffff83214504,auStack_20,auStack_20[0]);
    atexit(0xffffffff831418a0);
    return 0xffffffff83214504;
  }
  return 0xffffffff83214504;
}

