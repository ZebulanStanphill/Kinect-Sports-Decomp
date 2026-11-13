extern int fn_8280AD30();
extern int fn_8305C3F0();
extern int fn_8305C550();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned __int64 fn_8285AEA0(int param_1,int param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  param_2 = *(int *)(param_1 + 100) + param_2;
  iVar1 = fn_8305C3F0(param_1 + 0x6c);
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 0x94) == 0) {
      uStack_30 = *param_3;
      uStack_2c = param_3[1];
      uStack_28 = param_3[2];
    }
    else {
      fn_8280AD30(param_2 + 0x10,param_3,&uStack_30);
    }
    iVar1 = fn_8305C550(param_1 + 0x6c,&uStack_30);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

