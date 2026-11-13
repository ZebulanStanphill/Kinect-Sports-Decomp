extern int fn_82D59158();
extern int fn_82D65418();
extern int fn_82D654F8();
extern int fn_82D656C0();
extern int fn_82D65AB8();
extern int fn_82D65F60();
extern int fn_82D662B8();
extern int fn_82D66F00();
extern int fn_82D75FD0();
extern unsigned int uStack_1f;
extern unsigned int uStack_20;
extern unsigned int uStack_3f;
extern unsigned int uStack_40;


void fn_82D65D78(unsigned __int64 param_1)

{
  int (**pcStack_50)();
  int (**pcStack_4c)();
  int (**pcStack_48)();
  int (**pcStack_44)();
  unsigned char uStack_40;
  unsigned char uStack_3f;
  int (**pcStack_30)();
  int (**pcStack_2c)();
  int (**pcStack_28)();
  int (**pcStack_24)();
  unsigned char uStack_20;
  unsigned char uStack_1f;
  
  pcStack_50 = fn_82D654F8;
  pcStack_4c = fn_82D65F60;
  pcStack_48 = fn_82D662B8;
  pcStack_44 = fn_82D66F00;
  uStack_40 = 1;
  uStack_3f = 0;
  fn_82D59158(param_1,&pcStack_50,3,1);
  uStack_20 = 0;
  uStack_1f = 0;
  pcStack_30 = fn_82D65418;
  pcStack_2c = fn_82D656C0;
  pcStack_28 = fn_82D65AB8;
  pcStack_24 = fn_82D75FD0;
  fn_82D59158(param_1,&pcStack_30,1,3);
  return;
}

