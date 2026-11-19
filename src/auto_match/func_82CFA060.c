typedef unsigned char bool;
extern int fn_82CEA280();


unsigned int fn_82CFA060(unsigned int self,__int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  
  iVar1 = fn_82CEA280(param_2 + 8,param_3,0);
  *(bool *)self = iVar1 == 0;
  return self;
}

