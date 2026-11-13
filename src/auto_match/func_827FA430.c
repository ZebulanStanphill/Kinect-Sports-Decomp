unsigned int fn_827FA430(int param_1)

{
  unsigned int lVar1;
  
  lVar1 = *(unsigned short *)(param_1 + 0x1e) + *(unsigned short *)(param_1 + 0x1c);
  return (*(unsigned short *)(param_1 + 0x1a) * 0xc + lVar1) * 4 +
         (__int64)((int)(*(unsigned short *)(param_1 + 0x1a) + 7) >> 3) + (lVar1 + 7U >> 3);
}

