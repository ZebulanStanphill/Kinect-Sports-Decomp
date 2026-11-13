unsigned char * fn_82DB48D8(unsigned char *param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4)

{
  *(unsigned char *)(param_3 + 0x27) = *(unsigned char *)(param_3 + 0x27) | 1;
  (**(int (***)())(**(int **)(param_3 + 0x14) + 0x44))(*(int **)(param_3 + 0x14),param_3,param_4);
  *param_1 = (unsigned char)((~(unsigned __int64)*(unsigned char *)(param_3 + 0x27) & 0xffffffff) >> 3) & 1;
  return param_1;
}

