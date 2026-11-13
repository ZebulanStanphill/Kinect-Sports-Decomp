typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_830E2788();
extern V16 vectorSplatHalfWord();
extern V16 vectorSplatImmediateSignedHalfWord();


unsigned __int64 fn_830EAE10(__int64 param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 in_r10;
  unsigned char in_vs32 [16];
  unsigned int in_stack_00000054;
  
  vectorSplatImmediateSignedHalfWord(4);
  vectorSplatHalfWord(in_vs32,1);
  fn_830E2788(param_1 - param_2,param_2,param_3,param_4,2 << ((unsigned int)in_r10 & 0x3f),in_r10,
                    in_stack_00000054);
  return 0;
}

