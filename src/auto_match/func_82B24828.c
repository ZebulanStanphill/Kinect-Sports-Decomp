extern int fn_82B24768();
extern unsigned int iStack_40;


void fn_82B24828(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,int *param_6)

{
  int iStack_40;
  int aiStack_3c;
  
  fn_82B24768(param_1,param_2,*(unsigned int *)(param_3 + 0x2c),param_4,param_5,&iStack_40);
  fn_82B24768(param_1,param_2,*(unsigned int *)(param_3 + 0x30),param_4,param_5,&aiStack_3c);
  if ((iStack_40 == 0) || (aiStack_3c == 0)) {
    iStack_40 = 0;
  }
  if (*param_6 == -1) {
    *param_6 = iStack_40;
  }
  else if (*param_6 != iStack_40) {
    *param_6 = -2;
  }
  return;
}

