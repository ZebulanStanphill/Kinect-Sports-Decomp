unsigned int fn_82A33C40(int param_1)

{
  unsigned __int64 in_r0;
  
  trapWord(0x1f,in_r0,0x14);
  return *(unsigned int *)(param_1 + 4);
}

