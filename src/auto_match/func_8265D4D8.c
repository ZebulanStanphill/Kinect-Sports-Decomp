extern int fn_8265D598();
extern int fn_8265D600();
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


void fn_8265D4D8(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned char uVar1;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uVar1 = fn_8265D598(param_1,param_3);
  fn_8265D600(uStack00000014,uStack0000001c,uStack00000024,uVar1);
  return;
}

