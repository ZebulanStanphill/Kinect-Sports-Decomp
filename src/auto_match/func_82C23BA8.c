extern int fn_82C10B28();


unsigned __int64 fn_82C23BA8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  if ((unsigned __int64)*(unsigned int *)(param_2 + 0x48) != 0) {
    fn_82C10B28(*(unsigned int *)(param_4 + 0xe0),0xb,
                      (unsigned int)*(unsigned int *)(param_2 + 0x48) + 0x10);
    fn_82C10B28(*(unsigned int *)(param_4 + 0xe0),0xb,param_2 + 0x48);
  }
  return 0;
}

