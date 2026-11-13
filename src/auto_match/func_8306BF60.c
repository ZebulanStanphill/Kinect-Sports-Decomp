extern int fn_8306BEB8();
extern unsigned int lbl_831BCA64;
extern unsigned int lbl_832650B8;
extern unsigned int uRam832654b0;


void fn_8306BF60(void)

{
  if (lbl_831BCA64 == -1) {
    lbl_831BCA64 = KeTlsAlloc();
    RtlInitializeCriticalSection(0xffffffff83265098);
    uRam832654b0 = 1;
    fn_8306BEB8(1,0xffffffff832650b8);
    lbl_832650B8 = 1;
  }
  return;
}

