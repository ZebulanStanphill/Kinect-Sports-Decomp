extern int fn_82D00450();


int fn_82E09328(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int iVar1;
  
  iVar1 = fn_82D00450(param_1 + 8,param_3,0);
  if ((iVar1 != 0) && (*(int (***)())(iVar1 + 8) != (int (**)())0x0)) {
    (*(int (**)())(iVar1 + 8))(param_2);
  }
  return iVar1;
}

