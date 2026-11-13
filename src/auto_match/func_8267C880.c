typedef unsigned char bool;
extern unsigned int fn_82A1E650();


bool fn_8267C880(unsigned int *param_1)

{
  unsigned int iVar1;
  
  iVar1 = fn_82A1E650(*param_1,0);
  if (iVar1 != 0) return 0;
  {
    param_1[2] = param_1[2] + 1;
  }
  return 1;
}

