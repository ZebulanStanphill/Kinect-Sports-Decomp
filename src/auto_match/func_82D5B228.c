extern int fn_82D6FF00();


void fn_82D5B228(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  if ((*(unsigned char *)(param_2 + 0xb) & 0x20) != 0) {
    return;
  }
  fn_82D6FF00(param_2 + 0x10,param_2,param_3,param_5);
  return;
}
