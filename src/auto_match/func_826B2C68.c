extern unsigned int *auStack_30;
extern int fn_82696330();
extern int fn_826B0F90();
extern int fn_826B2BE8();


void fn_826B2C68(int param_1,unsigned __int64 param_2)

{
  unsigned int iVar1;
  unsigned char auStack_30 [24];
  
  if ((*(unsigned int *)(param_1 + 0xcc) != 0) &&
     (*(int *)(*(int *)(param_1 + 0xcc) * 4 + *(int *)(param_1 + 200) + -4) != 0)) {
    iVar1 = fn_826B0F90();
    if (iVar1 == 0) {
      auStack_30[0] = 0;
      fn_826B2BE8(param_1,param_2,auStack_30);
      fn_82696330(auStack_30);
    }
  }
  return;
}

