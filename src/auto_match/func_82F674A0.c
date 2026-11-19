extern int _fsopen();


void fopen(unsigned __int64 param_1,unsigned __int64 param_2)

{
  _fsopen(param_1,param_2,0x40);
  return;
}
