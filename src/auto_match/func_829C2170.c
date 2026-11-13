extern int fn_8262F658();


void d3dx_zcfree(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int (**pcVar1)();
  
  pcVar1 = (int (**)())fn_8262F658();
  (*pcVar1)(param_2,0x24810000);
  return;
}

