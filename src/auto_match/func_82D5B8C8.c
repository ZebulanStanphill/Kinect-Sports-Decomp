extern unsigned int *auStack_50;
extern int fn_82D59328();
extern int fn_82D5B820();
extern unsigned int uStack_1e;
extern unsigned int uStack_1f;
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


void fn_82D5B8C8(unsigned __int64 param_1)

{
  unsigned char auStack_50 [24];
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned char uStack_20;
  unsigned char uStack_1f;
  unsigned char uStack_1e;
  
  uStack_20 = 0;
  uStack_1f = 0;
  uStack_1e = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  fn_82D5B820(auStack_50);
  fn_82D59328(param_1,auStack_50,0x12,0x17);
  fn_82D59328(param_1,auStack_50,0x17,0x17);
  return;
}

