typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_830E6390();
extern V16 vectorSplatHalfWord();


void fn_830E9940(void)

{
  unsigned char in_vs32 [16];
  
  vectorSplatHalfWord(in_vs32,1);
  fn_830E6390();
  return;
}

