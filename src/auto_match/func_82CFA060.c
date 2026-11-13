typedef unsigned char bool;
extern int fn_82CEA280();


unsigned int fn_82CFA060(unsigned int param_1,__int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  
  iVar1 = fn_82CEA280(param_2 + 8,param_3,0);
  *(bool *)param_1 = iVar1 == 0;
  return param_1;
}

