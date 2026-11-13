extern int fn_82CED308();


void fn_82E08D70(unsigned int param_1,unsigned __int64 param_2)

{
  if ((param_1 & 0xffffffff) != 0) {
    fn_82CED308();
    fn_82CED308(param_1 + 4,param_2);
  }
  return;
}

