typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_330;
extern int fn_830DF2D0();
extern int fn_830E6BA8();
extern V16 vectorSplatHalfWord();


void fn_830EA210(unsigned __int64 param_1, unsigned __int64 param_2, unsigned __int64 param_3, unsigned __int64 param_4, unsigned __int64 unused_arg_5, unsigned __int64 unused_arg_6, unsigned __int64 unused_arg_7, unsigned __int64 unused_arg_8, int in_stack_00000054)

{
  int iVar1;
  int iVar2;
  unsigned int in_r10;
  unsigned char in_vs32 [16];

  unsigned char auStack_330 [736];

  iVar1 = 4 << (in_r10 & 0x3f);
  iVar2 = 1 << (in_stack_00000054 == 0 & in_r10) + 2;
  fn_830DF2D0(param_1,param_2,auStack_330,iVar1,iVar2);
  vectorSplatHalfWord(in_vs32,1);
  fn_830E6BA8(auStack_330,param_4,param_3,iVar1,iVar2);
  return;
}
