extern unsigned int *auStack_2c;
extern int fn_82F90110();
extern int fn_82F90478();
extern unsigned int stack0x00000014;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002f;
extern unsigned int uStack00000037;


void fn_82F90378(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned char param_4,
                  unsigned char param_5)

{
  unsigned __int64 uVar1;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned char uStack0000002f;
  unsigned char uStack00000037;
  unsigned char auStack_2c [4];
  unsigned char *puStack_28;
  
  puStack_28 = auStack_2c;
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002f = param_4;
  uStack00000037 = param_5;
  uVar1 = fn_82F90110(&stack0x00000014);
  fn_82F90478(uVar1,param_2,param_3,auStack_2c[0]);
  return;
}

