typedef unsigned char bool;
extern unsigned int *auStack_10;
extern int fn_8267FA50();


bool fn_8267FC60(unsigned int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int auStack_10;
  
  auStack_10 = param_1;
  iVar1 = fn_8267FA50(&auStack_10,1,param_2);
  return iVar1 == 0;
}

