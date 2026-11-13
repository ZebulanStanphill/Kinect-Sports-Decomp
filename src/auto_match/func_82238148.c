extern int fn_825130F8();
extern int fn_8265C9E0();


unsigned int * fn_82238148(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = fn_8265C9E0(0x38);
  uVar2 = uVar1 ? fn_825130F8(uVar1,param_2) : 0;
  *param_1 = uVar2;
  return param_1;
}

