typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorMultiplyAddFloatingPoint();


void fn_8306ED58(void)

{
  unsigned char in_vs32 [16];
  unsigned char in_vs33 [16];
  unsigned char in_vs34 [16];
  unsigned char in_vs43 [16];
  
  altv300_21(in_vs32,in_vs43);
  vectorMultiplyAddFloatingPoint(in_vs34,in_vs32,in_vs33);
  return;
}

