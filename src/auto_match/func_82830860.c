extern unsigned int *auStack_30;
extern int fn_8282D230();
extern int fn_82830670();


int  fn_82830860(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int lVar1;
  unsigned int auStack_30;
  
  lVar1 = fn_8282D230(param_2,&auStack_30);
  if (lVar1 == 0) {
    fn_82830670(param_1,auStack_30,param_3,param_4,1);
  }
  return lVar1;
}

