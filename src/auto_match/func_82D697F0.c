extern unsigned int fn_82D68C88;
extern unsigned int fn_82D68F28;
extern unsigned int fn_82D698D0;
extern unsigned int fn_82D69910;
extern unsigned int fn_82D69958;
extern unsigned int fn_82D699A8;
extern unsigned int fn_82D69A20;
extern unsigned int fn_82D69B10;

void fn_82D697F0(unsigned __int64 param_1)

{
  int (**pcStack_60)();
  int (**pcStack_5c)();
  int (**pcStack_58)();
  int (**pcStack_54)();
  int (**pcStack_50)();
  int (**pcStack_4c)();
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  int (**pcStack_38)();
  int (**pcStack_34)();
  unsigned char uStack_30;
  unsigned char uStack_2f;
  unsigned char uStack_2e;
  
  uStack_2e = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  pcStack_54 = fn_82D698D0;
  pcStack_50 = fn_82D69910;
  pcStack_4c = fn_82D69958;
  pcStack_5c = fn_82D69A20;
  uStack_30 = 1;
  pcStack_60 = fn_82D68C88;
  pcStack_34 = fn_82D68F28;
  pcStack_38 = fn_82D69B10;
  pcStack_58 = fn_82D699A8;
  uStack_2f = 1;
  fn_82D59328(param_1,&pcStack_60,2,0x12);
  uStack_2e = 1;
  fn_82D59328(param_1,&pcStack_60,0x12,2);
  return;
}
