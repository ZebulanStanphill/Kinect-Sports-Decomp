void fn_827F5928(int param_1,__int64 param_2)

{
  unsigned char bVar1;
  
  bVar1 = *(unsigned char *)(param_1 + 0xdc);
  *(unsigned char *)(param_1 + 0xdc) = bVar1 | 4;
  *(unsigned char *)(param_1 + 0xdc) =
       (unsigned char)((unsigned char)((unsigned __int64)-param_2 >> 0x18) & ~(unsigned char)((unsigned __int64)param_2 >> 0x18)) >> 4 & 8 |
       bVar1 & 0xf7 | 4;
  return;
}

