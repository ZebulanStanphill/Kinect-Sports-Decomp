typedef unsigned char bool;
extern int fn_82A29DE8();


bool fn_82816C38(int *param_1,unsigned __int64 param_2)

{
  unsigned int iVar1;
  
  iVar1 = fn_82A29DE8(param_2,0xffffffff80000000,1,0,3,0,0);
  *param_1 = iVar1;
  return iVar1 == -1;
}

