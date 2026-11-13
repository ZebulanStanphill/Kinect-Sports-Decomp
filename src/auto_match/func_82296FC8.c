typedef unsigned char bool;
extern int fn_82F63268();


bool fn_82296FC8(__int64 param_1,short param_2,unsigned __int64 param_3)

{
  short uVar1;
  
  uVar1 = fn_82F63268(param_3,param_1 + 8);
  return (uVar1 & param_2) != 0;
}

