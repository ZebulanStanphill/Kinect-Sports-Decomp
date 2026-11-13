void fn_82D002F0(char *param_1,int param_2,unsigned __int64 param_3)

{
  *param_1 = ((char)((int)*(unsigned int *)(param_2 + 8) >> 0x1f) - ((char)(param_3 >> 0x18) >> 7)) +
             (param_3 <= *(unsigned int *)(param_2 + 8));
  return;
}

