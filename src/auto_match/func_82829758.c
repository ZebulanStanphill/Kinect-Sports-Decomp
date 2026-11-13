extern int fn_82829620();
extern int memcpy();


void fn_82829758(unsigned __int64 param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  fn_82829620(param_1,param_2,param_4,param_5,param_6,0);
  memcpy(*param_2,param_3,param_4);
  return;
}

