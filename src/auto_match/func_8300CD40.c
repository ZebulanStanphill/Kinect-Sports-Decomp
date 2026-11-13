typedef unsigned char bool;


bool fn_8300CD40(int param_1,unsigned int param_2)

{
  int n = param_2 & 0xffff;
  char c = *(char *)((param_2 >> 3 & 0x1fff) + *(int *)(param_1 + 0x28));
  return (c & (1 << (n % 8))) != 0;
}
