typedef unsigned char bool;
extern int fn_82DBBD28();


unsigned int fn_82D957F0(unsigned int param_1,unsigned __int64 param_2)

{
  int iVar1;
  
  iVar1 = fn_82DBBD28(param_2,0x1b);
  *(bool *)param_1 = iVar1 == 0;
  return param_1;
}

