void fn_827F58F8(int param_1,__int64 param_2)

{
  unsigned char bVar1;
  
  bVar1 = *(unsigned char *)(param_1 + 0xdc);
  *(unsigned char *)(param_1 + 0xdc) = bVar1 | 1;
  *(unsigned char *)(param_1 + 0xdc) =
       (unsigned char)((unsigned char)((unsigned __int64)-param_2 >> 0x18) & ~(unsigned char)((unsigned __int64)param_2 >> 0x18)) >> 6 & 2 |
       bVar1 & 0xfd | 1;
  return;
}

