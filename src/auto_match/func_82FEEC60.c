extern int fn_82FEE7F8();
extern int fn_82FF4DD8();
extern int fn_83023568();
extern int fn_830235F0();
extern int fn_83023618();
extern int fn_830236D8();
extern int fn_83023780();
extern int fn_83023D40();
extern unsigned int lbl_83264304;
extern unsigned int lbl_832643B0;
extern unsigned int lbl_832643D4;
extern unsigned int lbl_83264436;


void fn_82FEEC60(void)

{
  char cVar1;
  
  lbl_83264436 = 0;
  fn_82FEE7F8();
  if (lbl_83264436 == 0) {
    RtlEnterCriticalSection((unsigned __int64)lbl_832643B0 + 8);
    fn_83023780(lbl_832643B0,0x400);
    RtlLeaveCriticalSection((unsigned __int64)lbl_832643B0 + 8);
  }
  else {
    RtlEnterCriticalSection((unsigned __int64)lbl_832643B0 + 8);
    fn_830236D8(lbl_832643B0,0xffffffff83264428);
    RtlLeaveCriticalSection((unsigned __int64)lbl_832643B0 + 8);
    fn_83023D40(lbl_832643D4);
  }
  RtlEnterCriticalSection((unsigned __int64)lbl_832643B0 + 8);
  cVar1 = fn_83023568(lbl_832643B0);
  if ((cVar1 != '\0') && (cVar1 = fn_830235F0(lbl_832643B0), cVar1 != '\0')) {
    fn_83023618(lbl_832643B0);
  }
  RtlLeaveCriticalSection((unsigned __int64)lbl_832643B0 + 8);
  fn_82FF4DD8(lbl_83264304,0xffffffff832643ec,0xffffffff832643e8);
  return;
}

