extern unsigned int *auStack_140;
extern unsigned int *auStack_240;
extern int fn_828358A8();
extern int fn_828358F8();
extern int fn_828359F8();
extern int fn_82836098();
extern int fn_82F64020();
extern int fn_82F6D000();


void fn_82836478(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,
                  unsigned __int64 param_5,char param_6,unsigned __int64 param_7)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_240 [256];
  unsigned char auStack_140 [320];
  
  lVar1 = fn_828358F8(param_1,param_3);
  auStack_240[0] = 0;
  if (param_6 == '\0') {
    fn_828359F8(param_1,auStack_240,param_5);
  }
  if (-1 < (int)param_7) {
    fn_82F64020(auStack_240,0x100,0xffffffff8201f318,auStack_240,param_7);
  }
  uVar2 = fn_828358A8(param_1);
  fn_82F64020(auStack_240,0x100,0xffffffff8201f320,auStack_240,uVar2);
  fn_82836098(param_1,lVar1 + param_4,auStack_140);
  fn_82F64020(auStack_240,0x100,0xffffffff8201f328,auStack_240,auStack_140);
  fn_82F6D000(param_2,0xffffffff8201f330,auStack_240);
  return;
}

