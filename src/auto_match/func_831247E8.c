extern unsigned int *auStack_30;
extern int fn_82230110();
extern int fn_822376D8();
extern int fn_8265CA20();
extern int atexit();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_831247E8(void)

{
  unsigned int auStack_30;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  fn_82230110(&auStack_30,0xffffffff821c243c);
  fn_822376D8(0xffffffff83295e98,0,0,&auStack_30,1,0,0,0);
  if (0xf < uStack_1c) {
    fn_8265CA20(auStack_30);
  }
  uStack_20 = 0;
  uStack_1c = 0xf;
  auStack_30 = auStack_30 & 0xffffff;
  atexit(0xffffffff8313f048);
  return;
}

