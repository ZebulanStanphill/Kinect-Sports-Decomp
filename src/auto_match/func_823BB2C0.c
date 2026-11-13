typedef unsigned char bool;


void fn_823BB2C0(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_2 + 0x80) == 0;
  *(unsigned int *)(param_1 + 4) = (unsigned int)bVar1;
  *(bool *)param_1 = !bVar1;
  return;
}

