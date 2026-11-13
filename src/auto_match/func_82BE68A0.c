typedef unsigned char bool;
extern int fn_82BE5C30();
extern int fn_82BE6410();


bool fn_82BE68A0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  char cVar1;
  
  cVar1 = fn_82BE5C30(param_1,*(unsigned int *)((int)param_1 + 0x20),param_3,param_4,param_1);
  fn_82BE6410(param_1);
  return cVar1 == '\x05';
}

