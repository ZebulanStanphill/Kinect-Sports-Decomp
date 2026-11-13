#define true 1
extern unsigned int *auStack_38;
extern int fn_828872C8();
extern int fn_828A1C98();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F8();
extern int fn_828EA790();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


void fn_8288DDF8(__int64 param_1,unsigned __int64 param_2)

{
  int aiStack_40;
  unsigned char auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  
  fn_828B5580(auStack_38,param_2 + 0x14);
  aiStack_40 = fn_828B55F8(auStack_38);
  fn_828A1C98(&iStack_30,param_1 + 0x6c,&aiStack_40);
  fn_828B55B0(auStack_38);
  aiStack_40 = iStack_30;
  while( true ) {
    if (aiStack_40 == iStack_2c) {
      return;
    }
    if ((unsigned __int64)*(unsigned int *)(aiStack_40 + 0x10) == (param_2 & 0xffffffff)) break;
    fn_828EA790();
  }
  fn_828872C8(&aiStack_40,param_1 + 0x6c);
  return;
}

