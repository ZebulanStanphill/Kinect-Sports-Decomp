extern int fn_82D51E18();


unsigned __int64 fn_82D51508(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)fn_82D51E18(*(unsigned int *)(param_2 + 0x18));
  (*(int (**)())(*piVar1 + 0x20))(param_1,piVar1,param_3,param_4);
  return param_1;
}

