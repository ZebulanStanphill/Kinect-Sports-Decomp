extern int fn_82D59328();
extern int fn_82D698D0();
extern int fn_82D69910();
extern int fn_82D69958();
extern int fn_82D699A8();
extern int fn_82D69A20();
extern int fn_82D69A68();
extern int fn_82D69B10();
extern int fn_82D69C40();
extern unsigned int uStack_3e;
extern unsigned int uStack_3f;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;


void fn_82D6A040(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int (**pcStack_70)();
  int (**pcStack_6c)();
  int (**pcStack_68)();
  int (**pcStack_64)();
  int (**pcStack_60)();
  int (**pcStack_5c)();
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  int (**pcStack_48)();
  int (**pcStack_44)();
  unsigned char uStack_40;
  unsigned char uStack_3f;
  unsigned char uStack_3e;
  
  uStack_3f = 0;
  uStack_3e = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  pcStack_70 = fn_82D69A68;
  pcStack_64 = fn_82D698D0;
  pcStack_44 = fn_82D69C40;
  pcStack_48 = fn_82D69B10;
  pcStack_68 = fn_82D699A8;
  pcStack_6c = fn_82D69A20;
  uStack_40 = 1;
  pcStack_60 = fn_82D69910;
  pcStack_5c = fn_82D69958;
  fn_82D59328(param_1,&pcStack_70,param_2,param_3);
  return;
}

