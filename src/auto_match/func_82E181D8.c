unsigned __int64 fn_82E181D8(unsigned __int64 param_1,int param_2,int param_3)

{
  if ((*(unsigned char *)(param_2 + 0xc) == *(unsigned char *)(param_3 + 0xc)) &&
     ((*(unsigned char *)(param_2 + 0xd) == *(unsigned char *)(param_3 + 0xd) || (*(unsigned char *)(param_2 + 0xc) == '\x18'))
     )) {
    return 1;
  }
  return 0;
}

