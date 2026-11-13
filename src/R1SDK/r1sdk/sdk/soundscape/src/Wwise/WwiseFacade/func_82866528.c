extern int fn_82865170();


void fn_82866528(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  
  iVar1 = fn_82865170();
  (**(int (***)())(**(int **)(iVar1 + 0x48c) + 0xc))
            (*(int **)(iVar1 + 0x48c),0xffffffff82020b28,0x363,0xffffffff82020b08,param_2,param_1,
             param_3);
  return;
}

