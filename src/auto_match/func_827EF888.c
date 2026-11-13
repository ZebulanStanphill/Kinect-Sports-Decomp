void fn_827EF888(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned int param_7)

{
  int *piVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)((param_7 & 0xffff) * 8 + *(int *)(param_4 + 0x120));
  piVar1 = (int *)*puVar2;
  (*(int (**)())(*piVar1 + 4))(piVar1,param_5,param_6,puVar2[1],param_1,param_2,param_3);
  return;
}

