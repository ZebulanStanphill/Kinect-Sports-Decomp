extern int fn_82F90110();
extern int fn_82F90140();
extern unsigned int stack0x00000014;
extern unsigned int stack0x0000001c;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


void fn_82F8FF48(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uVar1 = fn_82F90110(&stack0x0000001c);
  uVar2 = fn_82F90110(&stack0x00000014);
  fn_82F90140(uVar2,uVar1,param_3);
  return;
}

